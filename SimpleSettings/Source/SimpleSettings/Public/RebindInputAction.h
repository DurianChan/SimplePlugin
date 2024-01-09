// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RebindInputAction.generated.h"

class UInputKeySelector;
class UInputMappingContext;
class UInputAction;
struct FEnhancedActionKeyMapping;

UCLASS()
class SIMPLESETTINGS_API URebindInputAction : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:

	UPROPERTY(BlueprintReadWrite, Category="Key", meta = (BindWidget))
	UInputKeySelector* InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Key")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Key")
	UInputAction* InputAction;

	UPROPERTY(BlueprintReadWrite, Category="Key")
	FKey CurrentKey;

	UPROPERTY(BlueprintReadWrite, Category="Key")
	bool bModifying;

	UPROPERTY(BlueprintReadOnly, Category="Key")
	TArray<FEnhancedActionKeyMapping> EnhancedActionKeyArray;

	//当前InputAction在Mapping中的索引
	UPROPERTY(BlueprintReadOnly, Category="Key")
	int OrderIndex;
	//当前Key在InputAction中的索引
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Key")
	int OrderNumber;

	void InitializeInputMapping();
	
	UFUNCTION(BlueprintCallable, Category="ReBind")
	void InputMappingRefresh();

private:
	UFUNCTION()
	void OnKeySelected(FInputChord SelectedKey);
	UFUNCTION()
	void OnIsSelectingKeyChanged();
};
