#include "ArticyDialogueSubsystem.h"
#include "ArticyAsset.h"
#include "ArticyFunctionLibrary.h"
#include "ArticyEntity.h"
#include "ArticyFlowPlayer.h"
#include "IArticyDialogueHandle.h"
#include "Interfaces/ArticyNode.h"
#include "Interfaces/ArticyObjectWithDisplayName.h"
#include "Interfaces/ArticyObjectWithPreviewImage.h"
#include "Interfaces/ArticyObjectWithSpeaker.h"
#include "Interfaces/ArticyObjectWithText.h"

void UArticyDialogueSubsystem::InitializeArticyDialogueSystem(APlayerController* OwnerPlayerController, UArticyFlowPlayer* OwnerArticyFlowPlayer, TScriptInterface<IIArticyDialogueHandle> ArticyDialogueHandleWidget)
{
	if(ArticyFlowPlayer)
	{
		ArticyFlowPlayer->OnPlayerPaused.Clear();
		ArticyFlowPlayer->OnBranchesUpdated.Clear();
		ArticyFlowPlayer = nullptr;
	}
	if(DialogueHandleWidget)
	{
		DialogueHandleWidget->Execute_HandleDestroyObject(DialogueHandleWidget.GetObject());
		DialogueHandleWidget = nullptr;
	}
	
	PlayerController = OwnerPlayerController;
	ArticyFlowPlayer = OwnerArticyFlowPlayer;
	DialogueHandleWidget = ArticyDialogueHandleWidget;
	
	ArticyFlowPlayer->OnPlayerPaused.AddDynamic(this, &UArticyDialogueSubsystem::OnPlayerPause);
	ArticyFlowPlayer->OnBranchesUpdated.AddDynamic(this, &UArticyDialogueSubsystem::OnBranchesUpdated);
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
			ArticyFlowPlayer->Play();
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
	if(DialogueHandleWidget && PlayerController)
	{
		UObject* Object = Cast<UObject>(PausedOn.GetInterface());
		if(Object)
		{
			DialogueHandleWidget->Execute_HandleDialogueFragment(DialogueHandleWidget.GetObject(), Object);
		}
	}
}

void UArticyDialogueSubsystem::OnBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches)
{
	if(DialogueHandleWidget && PlayerController)
	{
		DialogueHandleWidget->Execute_HandleBranchesUpdated(DialogueHandleWidget.GetObject(), AvailableBranches);
	}
}

void UArticyDialogueSubsystem::StartArticyDialogue(FArticyRef DialogueData)
{
	bPlayingDialogue = true;
	PlayerController->SetShowMouseCursor(true);
	const FInputModeUIOnly Data;
	PlayerController->SetInputMode(Data);
	ArticyFlowPlayer->SetStartNode(DialogueData);

	if(OnStartArticyDialogue.IsBound())
		OnStartArticyDialogue.Broadcast();
}

void UArticyDialogueSubsystem::EndArticyDialogue()
{
	bPlayingDialogue = false;
	PlayerController->SetShowMouseCursor(false);
	const FInputModeGameOnly Data;
	PlayerController->SetInputMode(Data);
	//确保在最后一句对话设置的语句变量能够执行
	ArticyFlowPlayer->FinishCurrentPausedObject();

	if(OnEndArticyDialogue.IsBound())
		OnEndArticyDialogue.Broadcast();
}

FText UArticyDialogueSubsystem::GetDialogueSpeakerName(TScriptInterface<IArticyFlowObject> PausedOn) const
{
	FText SpeakerName;
	IArticyObjectWithSpeaker* ArticySpeaker = Cast<IArticyObjectWithSpeaker>(PausedOn.GetInterface());
	if(ArticySpeaker)
	{
		UArticyObject* Speaker = ArticySpeaker->GetSpeaker();
		IArticyObjectWithDisplayName* ArticyDisplayName = Cast<IArticyObjectWithDisplayName>(Speaker);
		if(ArticyDisplayName)
		{
			SpeakerName = ArticyDisplayName->GetDisplayName();
		}
	}

	return SpeakerName;
}

UTexture2D* UArticyDialogueSubsystem::GetDialogueSpeakerImage(TScriptInterface<IArticyFlowObject> PausedOn) const
{
	UTexture2D* SpeakerTexture = NewObject<UTexture2D>(GetTransientPackage(), UTexture2D::StaticClass());
	IArticyObjectWithSpeaker* ArticySpeaker = Cast<IArticyObjectWithSpeaker>(PausedOn.GetInterface());
	if(ArticySpeaker)
	{
		UArticyObject* Speaker = ArticySpeaker->GetSpeaker();
		UArticyEntity* ArticyEntity = Cast<UArticyEntity>(Speaker);
		IArticyObjectWithPreviewImage* ArticyObjectWithPreviewImage = Cast<IArticyObjectWithPreviewImage>(ArticyEntity);
		if(ArticyObjectWithPreviewImage)
		{
			const UArticyPreviewImage* ArticyPreviewImage = ArticyObjectWithPreviewImage->GetPreviewImage();
			const UWorld* World = PlayerController->GetWorld();
			if(World)
			{
				UArticyObject* CurrentObject  = UArticyFunctionLibrary::ArticyId_GetObject(ArticyPreviewImage->Asset, UArticyObject::StaticClass(), World);
				UArticyAsset* ArticyAsset = Cast<UArticyAsset>(CurrentObject);
				if(ArticyAsset)
				{
					SpeakerTexture = ArticyAsset->LoadAsTexture2D();
				}
			}
		}
	}
	return SpeakerTexture;
}

FText UArticyDialogueSubsystem::GetDialogueText(TScriptInterface<IArticyFlowObject> PausedOn) const
{
	FText DialogueContent;
	IArticyObjectWithText* ArticyText = Cast<IArticyObjectWithText>(PausedOn.GetInterface());
	if(ArticyText)
	{
		DialogueContent = ArticyText->GetText();
	}
	
	return DialogueContent;
}
