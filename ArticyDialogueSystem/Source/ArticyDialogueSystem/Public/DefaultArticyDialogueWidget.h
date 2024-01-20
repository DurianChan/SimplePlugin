// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArticyDialogueWidget.h"
#include "DefaultArticyDialogueWidget.generated.h"

struct FArticyBranch;
class IArticyFlowObject;
class UBranchesButtonWidget;
struct FTimerHandle;
struct FArticyBranch;
class UCanvasPanel;
class UVerticalBox;
class UImage;
class UTextBlock;
class UButton;

UCLASS()
class ARTICYDIALOGUESYSTEM_API UDefaultArticyDialogueWidget : public UArticyDialogueWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	
#pragma region UI Widget
	
	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UCanvasPanel* DialogueRoot;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UVerticalBox* VerticalBranches;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UImage* SpeakerImg;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* SpeakerNameText;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* DialogueLineText;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UButton* ContinueButton;

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* ContinueText;

	UPROPERTY(EditAnywhere, Category="ButtonWidget")
	TSubclassOf<UBranchesButtonWidget> BranchButtonWidget;

#pragma endregion

	virtual void HandleDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn) override;
	virtual void HandleBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches) override;

	/*由于声音资源要从DialogueFragment的模板中获取，而模板类由Articy插件生成
	如果模板不固定，则从蓝图中实现
	如果模板固定，则可以将逻辑移入C++中*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
	void HandleDialogueSoundPlay(UObject* Object);

	void SetTypingMode(bool bEnable, float Speed);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	bool bEnableTyping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	float TypingSpeed = 0.02f;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FString TypingText;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	int TypingIndex;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FTimerHandle TypingTimerHandle;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FArticyBranch CurrentBranchData;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	bool bContinue;
	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	bool bEndDialogue;

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void StartTypingText(const FText& DialogueText);
	void OnTypingTimerTick();
	void AddBranchesButton(FArticyBranch BranchData);
	
	UFUNCTION()
	void HandleContinueButton();
	UFUNCTION()
	void OnStartDialogue();
	UFUNCTION()
	void OnEndDialogue();
};
