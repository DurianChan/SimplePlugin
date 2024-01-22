#include "DefaultArticyDialogueWidget.h"
#include "ArticyDialogueSubsystem.h"
#include "ArticyFlowPlayer.h"
#include "BranchesButtonWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Interfaces/ArticyObjectWithMenuText.h"
#include "TimerManager.h"
#include "Interfaces/ArticyFlowObject.h"

void UDefaultArticyDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	const UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		DialogueSubsystem = GameInstance->GetSubsystem<UArticyDialogueSubsystem>();
	}

	DialogueSubsystem->OnStartArticyDialogue.AddDynamic(this, &UDefaultArticyDialogueWidget::OnStartDialogue);
	DialogueSubsystem->OnEndArticyDialogue.AddDynamic(this, &UDefaultArticyDialogueWidget::OnEndDialogue);

	DialogueRoot->SetVisibility(ESlateVisibility::Collapsed);
	ContinueButton->OnClicked.AddDynamic(this, &UDefaultArticyDialogueWidget::HandleContinueButton);
	ContinueButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UDefaultArticyDialogueWidget::HandleDialogueFragment_Implementation(UObject* HandleObject)
{
	const TScriptInterface<IArticyFlowObject> PausedOn(HandleObject);
	
	//设置对话者图片
	UTexture2D* Image = DialogueSubsystem->GetDialogueSpeakerImage(PausedOn);
	if(Image)
	{
		FSlateBrush Brush;
		Brush.SetResourceObject(Image);
		SpeakerImg->SetBrush(Brush);
	}
	
	//设置对话者名称
	SpeakerNameText->SetText(DialogueSubsystem->GetDialogueSpeakerName(PausedOn));

	//播放对话语音
	UObject* Object = Cast<UObject>(PausedOn.GetInterface());
	HandleDialogueSoundPlay(Object);

	//设置对话者内容
	if(bEnableTyping)
	{
		VerticalBranches->SetVisibility(ESlateVisibility::Collapsed);
		StartTypingText(DialogueSubsystem->GetDialogueText(PausedOn));
	}
	else
	{
		DialogueLineText->SetText(DialogueSubsystem->GetDialogueText(PausedOn));
	}
}

void UDefaultArticyDialogueWidget::SetTypingMode(bool bEnable, float Speed)
{
	bEnableTyping = bEnable;
	TypingSpeed = Speed;
}

void UDefaultArticyDialogueWidget::StartTypingText(const FText& DialogueText)
{
	TypingText = DialogueText.ToString();
	TypingIndex = 0;
	DialogueLineText->SetText(FText::FromString(TypingText.Left(TypingIndex)));
	UWorld* World = GetWorld();
	if(World)
	{
		FTimerManager& TimerManager = GetWorld()->GetTimerManager();
		TimerManager.ClearTimer(TypingTimerHandle);
		TimerManager.SetTimer(
		TypingTimerHandle,
		this,
		&UDefaultArticyDialogueWidget::OnTypingTimerTick,
		TypingSpeed,
		true,
		false
		);
	}
}

void UDefaultArticyDialogueWidget::OnTypingTimerTick()
{
	if (TypingIndex < TypingText.Len())
	{
		++TypingIndex;
		DialogueLineText->SetText(FText::FromString(TypingText.Left(TypingIndex)));

		// 如果文本已经完全显示，清除定时器
		if (TypingIndex == TypingText.Len())
		{
			UWorld* World = GetWorld();
			if(World)
			{
				FTimerManager& TimerManager = GetWorld()->GetTimerManager();
				TimerManager.ClearTimer(TypingTimerHandle);
			}
			VerticalBranches->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void UDefaultArticyDialogueWidget::HandleBranchesUpdated_Implementation(const TArray<FArticyBranch>& AvailableBranches)
{
	VerticalBranches->ClearChildren();

	for (FArticyBranch Branch : AvailableBranches)
	{
		AddBranchesButton(Branch);
	}

	if(!VerticalBranches->HasAnyChildren() && !bContinue)
		bEndDialogue = true;
	
	if(bContinue || bEndDialogue)
		ContinueButton->SetVisibility(ESlateVisibility::Visible);
	else
		ContinueButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UDefaultArticyDialogueWidget::AddBranchesButton(FArticyBranch BranchData)
{
	CurrentBranchData = BranchData;
	//当前分支对话内容为空时，直接点击继续即可下一步对话，无需添加分支按钮
	const IArticyObjectWithMenuText* MenuText = Cast<IArticyObjectWithMenuText>(BranchData.GetTarget().GetInterface());
	FText PreviewText;
	if(MenuText)
		PreviewText = MenuText->GetMenuText();
	if(PreviewText.IsEmpty())
	{
		if(!bEndDialogue)
			bContinue = true;
		else
			bContinue = false;
		return;
	}

	//有分支内容时，添加分支按钮
	if(BranchButtonWidget && DialogueSubsystem->ArticyFlowPlayer)
	{
		UBranchesButtonWidget* BranchesButton = CreateWidget<UBranchesButtonWidget>(GetWorld(), BranchButtonWidget);
		BranchesButton->AssignBranchButton(DialogueSubsystem->ArticyFlowPlayer, BranchData);
		VerticalBranches->AddChild(BranchesButton);

		const FMargin ChildPadding(0.f, 20.f, 0.f, 0.f);
		BranchesButton->SetPadding(ChildPadding);
	}
}

void UDefaultArticyDialogueWidget::HandleContinueButton()
{
	const bool bNotHasChildren = !VerticalBranches->HasAnyChildren();

	if(bNotHasChildren && bContinue)
	{
		if(DialogueSubsystem->ArticyFlowPlayer)
		{
			bContinue = false;
			DialogueSubsystem->ArticyFlowPlayer->PlayBranch(CurrentBranchData);
		}
	}
	
	if(bNotHasChildren && bEndDialogue)
	{
		bEndDialogue = false;
		DialogueSubsystem->EndArticyDialogue();
	}
}

void UDefaultArticyDialogueWidget::OnStartDialogue()
{
	DialogueRoot->SetVisibility(ESlateVisibility::Visible);
}

void UDefaultArticyDialogueWidget::OnEndDialogue()
{
	DialogueRoot->SetVisibility(ESlateVisibility::Collapsed);
}

void UDefaultArticyDialogueWidget::HandleDestroyObject_Implementation()
{
	this->RemoveFromParent();
}
