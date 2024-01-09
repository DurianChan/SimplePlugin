// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueWidget.generated.h"

class UCanvasPanel;
class UTextBlock;
class UWrapBox;
class UButton;
class UArticyDialogueSubsystem;
struct FArticyBranch;
struct FTimerHandle;
class UBranchesButtonWidget;
class UCloseButtonWidget;

UCLASS()
class ARTICYDIALOGUESYSTEM_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, Category="SubSystem")
	UArticyDialogueSubsystem* DialogueSubsystem;
	
	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UCanvasPanel* DialogueContent;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* SpeakerNameText;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* DialogueLineText;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UWrapBox* WrapBoxBranches;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	bool bContinue;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	bool bEndDialogue;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	FArticyBranch CurrentBranch;
	
	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UButton* ContinueButton;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UButton* CancelButton;

	UPROPERTY(EditAnywhere, Category="ButtonWidget")
	TSubclassOf<UBranchesButtonWidget> BranchButtonWidget;
	
public:
	void ShowDialogueContent(bool bShowContent) const;
	void ClearBranchesButton() const;
	void AddBranchesButton(FArticyBranch BranchData);
	
	UFUNCTION()
	void ContinueDialogue();
	UFUNCTION()
	void EndDialogue();
	void SetEndDialogueFlag();

#pragma region Dialogue Name & Text
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FString TypingText;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	int TypingIndex;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FTimerHandle TypingTimerHandle;
	void SetSpeakerName(const FText& SpeakerName) const;
	void SetDialogueText(const FText& DialogueText, bool bTyping = false, float TypingSpeed = 0.04f);
	void StartTypingText(const FText& DialogueText, float TypingSpeed);
	void OnTypingTimerTick();
#pragma endregion
	
};
