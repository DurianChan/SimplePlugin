// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArticyFlowPlayer.h"
#include "Blueprint/UserWidget.h"
#include "BranchesButtonWidget.generated.h"

class UTextBlock;
class UButton;


UCLASS()
class ARTICYDIALOGUESYSTEM_API UBranchesButtonWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:

	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UButton* BranchButton;
	
	UPROPERTY(BlueprintReadOnly, Category="UI", meta=(BindWidget))
	UTextBlock* ButtonText;

	UPROPERTY(BlueprintReadOnly, Category="Data")
	UArticyFlowPlayer* FlowPlayer;

	UPROPERTY(BlueprintReadOnly, Category="Data")
	FArticyBranch ArticyBranch;
	
	void AssignBranchButton(UArticyFlowPlayer* ArticyFlowPlayer, FArticyBranch BranchData);

	UFUNCTION()
	void OnClickBranchButton();
};
