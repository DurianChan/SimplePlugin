// Copyright Durian Chan

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IInteractionSystemObject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIInteractionSystemObject : public UInterface
{
	GENERATED_BODY()
};


class ADVANCEDINTERACTIONSYSTEM_API IIInteractionSystemObject
{
	GENERATED_BODY()

	
public:

	//用于决定当前对象是否能够交互
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	bool CanInteract(const APawn* InteractPawn);

	//响应交互状态改变的事件
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	void OnInteractionStateChanged(const EInteractionState State, const APawn* InteractPawn);

	//当按键HoldKeyTime的值大于0且按键持续按下时，这个接口函数会被持续调用
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	void OnHoldTimeChanged(const APawn* InteractPawn, const float Percent);

	//当PressKeyAmount的值大于0切按键连续按下时，这个接口函数会被多次调用
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	void OnMultiInputPressed(const APawn* InteractPawn, const int CurrentCount, const int MaxCount);

	//开启&关闭自定义深度显示
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	bool SetCustomDepth(const bool Open);

	//获取从Player中传递过来的交互数据
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction System Interface|Object")
	void CallFunctionByParameters(const TArray<FInteractionParameter>& Parameters);

};
