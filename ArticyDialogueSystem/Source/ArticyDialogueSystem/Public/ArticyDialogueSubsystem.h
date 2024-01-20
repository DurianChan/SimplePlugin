// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArticyDialogueSubsystem.generated.h"

class UArticyFlowPlayer;
class UArticyDialogueWidget;
class APlayerController;
struct FArticyRef;
class IArticyFlowObject;
struct FArticyBranch;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartArticyDialogue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndArticyDialogue);

UCLASS()
class ARTICYDIALOGUESYSTEM_API UArticyDialogueSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, Category="Dialogue Data")
	bool bPlayingDialogue;
	UPROPERTY(VisibleAnywhere, Category="Dialogue Data")
	APlayerController* PlayerController;
	UPROPERTY(VisibleAnywhere, Category="Dialogue Data")
	UArticyFlowPlayer* ArticyFlowPlayer;
	UPROPERTY(VisibleAnywhere, Category="Dialogue Data")
	UArticyDialogueWidget* DialogueWidget;
	
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void InitializeArticyDialogueSystem(APlayerController* OwnerPlayerController, UArticyFlowPlayer* OwnerArticyFlowPlayer, UArticyDialogueWidget* ArticyDialogueWidget);
	UFUNCTION()
	void OnPlayerPause(TScriptInterface<IArticyFlowObject> PausedOn);
	void OnDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn) const;
	UFUNCTION()
	void OnBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void StartArticyDialogue(FArticyRef DialogueData);
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void EndArticyDialogue();

	UPROPERTY(BlueprintAssignable, Category="Dialogue Event")
	FOnStartArticyDialogue OnStartArticyDialogue;

	UPROPERTY(BlueprintAssignable, Category="Dialogue Event")
	FOnEndArticyDialogue OnEndArticyDialogue;

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	FText GetDialogueSpeakerName(TScriptInterface<IArticyFlowObject> PausedOn) const;
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	UTexture2D* GetDialogueSpeakerImage(TScriptInterface<IArticyFlowObject> PausedOn) const;
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	FText GetDialogueText(TScriptInterface<IArticyFlowObject> PausedOn) const;
};
