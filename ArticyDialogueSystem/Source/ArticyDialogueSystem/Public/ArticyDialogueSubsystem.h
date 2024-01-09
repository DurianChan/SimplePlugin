// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArticyDialogueSubsystem.generated.h"

class UArticyFlowPlayer;
class UDialogueWidget;
class APlayerController;
struct FArticyRef;
class UArticySaveGame;

UCLASS()
class ARTICYDIALOGUESYSTEM_API UArticyDialogueSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, Category="Dialogue")
	bool bPlayingDialogue;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void InitializeArticyDialogueSystem(APlayerController* PlayerController, UArticyFlowPlayer* ArticyFlowPlayer, UDialogueWidget* DialogueWidget);
	void OnDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn) const;
	UFUNCTION()
	void OnPlayerPause(TScriptInterface<IArticyFlowObject> PausedOn);
	UFUNCTION()
	void OnBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void StartArticyDialogue(FArticyRef DialogueData);
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void EndArticyDialogue();
	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void SetDialogueDisplayMode(bool UseTyping, float TypingTextSpeed);
	
	UPROPERTY(VisibleAnywhere, Category="Dialogue")
	APlayerController* OwnerPlayerController;
	UPROPERTY(VisibleAnywhere, Category="Dialogue")
	UArticyFlowPlayer* OwnerArticyFlowPlayer;
	UPROPERTY(VisibleAnywhere, Category="Dialogue")
	UDialogueWidget* OwnerDialogueWidget;
	UPROPERTY(VisibleAnywhere, Category="Dialogue")
	bool bUseTyping;
	UPROPERTY(VisibleAnywhere, Category="Dialogue")
	float TypingSpeed = 0.04f;
};
