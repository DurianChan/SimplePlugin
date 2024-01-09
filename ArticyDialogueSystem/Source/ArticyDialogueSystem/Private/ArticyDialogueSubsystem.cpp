#include "ArticyDialogueSubsystem.h"
#include "ArticyFlowPlayer.h"
#include "DialogueWidget.h"
#include "Interfaces/ArticyNode.h"
#include "Interfaces/ArticyObjectWithDisplayName.h"
#include "Interfaces/ArticyObjectWithSpeaker.h"
#include "Interfaces/ArticyObjectWithText.h"

void UArticyDialogueSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
}

void UArticyDialogueSubsystem::InitializeArticyDialogueSystem(APlayerController* PlayerController, UArticyFlowPlayer* ArticyFlowPlayer, UDialogueWidget* DialogueWidget)
{
	if(OwnerArticyFlowPlayer)
	{
		OwnerArticyFlowPlayer->OnPlayerPaused.Clear();
		OwnerArticyFlowPlayer->OnBranchesUpdated.Clear();
		OwnerArticyFlowPlayer = nullptr;
	}
	if(OwnerDialogueWidget)
	{
		OwnerDialogueWidget->RemoveFromParent();
		OwnerDialogueWidget = nullptr;
	}

	OwnerPlayerController = PlayerController;
	OwnerArticyFlowPlayer = ArticyFlowPlayer;
	OwnerDialogueWidget = DialogueWidget;

	OwnerArticyFlowPlayer->OnPlayerPaused.AddDynamic(this, &UArticyDialogueSubsystem::OnPlayerPause);
	OwnerArticyFlowPlayer->OnBranchesUpdated.AddDynamic(this, &UArticyDialogueSubsystem::OnBranchesUpdated);
}

void UArticyDialogueSubsystem::OnPlayerPause(TScriptInterface<IArticyFlowObject> PausedOn)
{
	UArticyNode* ArticyNode = Cast<UArticyNode>(PausedOn.GetInterface());
	if(ArticyNode)
	{
		EArticyPausableType PausableType = ArticyNode->GetType();
		switch (PausableType) {
		case EArticyPausableType::FlowFragment:
			break;
		case EArticyPausableType::Dialogue:
			OwnerArticyFlowPlayer->Play();
			break;
		case EArticyPausableType::DialogueFragment:
			OnDialogueFragment(PausedOn);
			break;
		case EArticyPausableType::Hub:
			break;
		case EArticyPausableType::Jump:
			break;
		case EArticyPausableType::Condition:
			break;
		case EArticyPausableType::Instruction:
			break;
		case EArticyPausableType::Pin:
			break;
		default: ;
		}
	}
}

void UArticyDialogueSubsystem::OnDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn) const
{
	if(OwnerDialogueWidget)
	{
		//设置对话者名字
		IArticyObjectWithSpeaker* ArticySpeaker = Cast<IArticyObjectWithSpeaker>(PausedOn.GetInterface());
		if(ArticySpeaker)
		{
			UArticyObject* Speaker = ArticySpeaker->GetSpeaker();
			IArticyObjectWithDisplayName* ArticyDisplayName = Cast<IArticyObjectWithDisplayName>(Speaker);
			if(ArticyDisplayName)
			{
				const FText SpeakerName = ArticyDisplayName->GetDisplayName();
				OwnerDialogueWidget->SetSpeakerName(SpeakerName);
			}
		}
				
		//设置对话内容
		IArticyObjectWithText* ArticyText = Cast<IArticyObjectWithText>(PausedOn.GetInterface());
		if(ArticyText)
		{
			const FText DialogueContent = ArticyText->GetText();
			OwnerDialogueWidget->SetDialogueText(DialogueContent, bUseTyping, TypingSpeed);
		}
	}
}

void UArticyDialogueSubsystem::OnBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches)
{
	if(OwnerDialogueWidget)
	{
		OwnerDialogueWidget->ClearBranchesButton();
		
		for (FArticyBranch Branch : AvailableBranches)
		{
			OwnerDialogueWidget->AddBranchesButton(Branch);
		}
		
		OwnerDialogueWidget->SetEndDialogueFlag();
	}
}

void UArticyDialogueSubsystem::StartArticyDialogue(FArticyRef DialogueData)
{
	bPlayingDialogue = true;
	OwnerPlayerController->SetShowMouseCursor(true);
	const FInputModeUIOnly Data;
	OwnerPlayerController->SetInputMode(Data);
	OwnerDialogueWidget->ShowDialogueContent(true);
	OwnerArticyFlowPlayer->SetStartNode(DialogueData);
}

void UArticyDialogueSubsystem::EndArticyDialogue()
{
	bPlayingDialogue = false;
	OwnerPlayerController->SetShowMouseCursor(false);
	const FInputModeGameOnly Data;
	OwnerPlayerController->SetInputMode(Data);
	OwnerDialogueWidget->ShowDialogueContent(false);
	//确保在最后一句对话设置的语句变量能够执行
	OwnerArticyFlowPlayer->FinishCurrentPausedObject();
}

void UArticyDialogueSubsystem::SetDialogueDisplayMode(bool UseTyping, float TypingTextSpeed)
{
	bUseTyping = UseTyping;
	TypingSpeed = TypingTextSpeed;
}
