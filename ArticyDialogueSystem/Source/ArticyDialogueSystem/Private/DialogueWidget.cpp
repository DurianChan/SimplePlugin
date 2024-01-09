#include "DialogueWidget.h"
#include "ArticyDialogueSubsystem.h"
#include "BranchesButtonWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"
#include "Components/WrapBox.h"
#include "Async/Async.h"
#include "Interfaces/ArticyObjectWithMenuText.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	const UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		DialogueSubsystem = GameInstance->GetSubsystem<UArticyDialogueSubsystem>();
	}

	CancelButton->OnClicked.AddDynamic(this, &UDialogueWidget::EndDialogue);
	ContinueButton->OnClicked.AddDynamic(this, &UDialogueWidget::ContinueDialogue);
}

void UDialogueWidget::ShowDialogueContent(bool bShowContent) const
{
	if(bShowContent)
		DialogueContent->SetVisibility(ESlateVisibility::Visible);
	else
		DialogueContent->SetVisibility(ESlateVisibility::Collapsed);
}

void UDialogueWidget::SetSpeakerName(const FText& SpeakerName) const
{
	SpeakerNameText->SetText(SpeakerName);
}

void UDialogueWidget::SetDialogueText(const FText& DialogueText, bool bTyping, float TypingSpeed)
{
	if(bTyping)
	{
		StartTypingText(DialogueText, TypingSpeed);
		WrapBoxBranches->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		DialogueLineText->SetText(DialogueText);
	}
}

void UDialogueWidget::StartTypingText(const FText& DialogueText, float TypingSpeed)
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
		&UDialogueWidget::OnTypingTimerTick,
		TypingSpeed,
		true,
		false
		);
	}
}

void UDialogueWidget::OnTypingTimerTick()
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
			WrapBoxBranches->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void UDialogueWidget::ClearBranchesButton() const
{
	WrapBoxBranches->ClearChildren();
}

void UDialogueWidget::AddBranchesButton(FArticyBranch BranchData)
{
	CurrentBranch = BranchData;
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
	if(BranchButtonWidget && DialogueSubsystem->OwnerArticyFlowPlayer)
	{
		UBranchesButtonWidget* BranchesButton = CreateWidget<UBranchesButtonWidget>(GetWorld(), BranchButtonWidget);
		BranchesButton->AssignBranchButton(DialogueSubsystem->OwnerArticyFlowPlayer, BranchData);
		WrapBoxBranches->AddChild(BranchesButton);
	}
}

void UDialogueWidget::ContinueDialogue()
{
	const bool bNotHasChildren = !WrapBoxBranches->HasAnyChildren();

	if(bNotHasChildren && bContinue)
	{
		if(DialogueSubsystem->OwnerArticyFlowPlayer)
		{
			bContinue = false;
			DialogueSubsystem->OwnerArticyFlowPlayer->PlayBranch(CurrentBranch);
		}
	}
	
	if(bNotHasChildren && bEndDialogue)
	{
		bEndDialogue = false;
		DialogueSubsystem->EndArticyDialogue();
	}
}

void UDialogueWidget::EndDialogue()
{
	DialogueSubsystem->EndArticyDialogue();
}

void UDialogueWidget::SetEndDialogueFlag()
{
	if(!WrapBoxBranches->HasAnyChildren() && !bContinue)
		bEndDialogue = true;
}

