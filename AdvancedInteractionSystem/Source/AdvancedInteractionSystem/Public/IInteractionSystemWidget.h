// Copyright Durian Chan

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IInteractionSystemWidget.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIInteractionSystemWidget : public UInterface
{
	GENERATED_BODY()
};


class ADVANCEDINTERACTIONSYSTEM_API IIInteractionSystemWidget
{
	GENERATED_BODY()


public:

	//将交互状态设置给Widget
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Widget")
	void SetInteractStateToWidget(const AActor* InteractiveActorRef, const EInteractionState State);

	//改变按键按住的百分比
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Widget")
	void ChangeHoldTimePercent(const AActor* InteractiveActorRef, const float Percent);

	//改变多次按下按键的数量
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Widget")
	void ChangeMultiPressCount(const AActor* InteractiveActorRef, const int CurrentCount, const int MaxCount);

};
