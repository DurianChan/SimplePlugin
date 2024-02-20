// Copyright Durian Chan

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractSystemData.h"
#include "Blueprint/UserWidget.h"
#include "ObjectInteractionComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class ADVANCEDINTERACTIONSYSTEM_API UObjectInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UObjectInteractionComponent();

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System")
	EInteractionDetectionType InteractionType;

	//是否需要交互成功时结束
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System")
	bool bFinishOnSuccess;

	//如果你启用了增强输入插件，那么可以将这个参数设置为增强输入的命名。如果没有启用插件，可以设置为项目设置中的输入命名。
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Input Settings")
	FString InputActionName;
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Input Settings")
	EInteractionInputType InputActionType;

	//持续按键时间，InputActionType为持续按键时才需要设置
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Input Settings")
	float HoldKeyTime;

	//连续按键次数，InputActionType为多次按键时才需要设置
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Input Settings")
	int PressKeyAmount;

	//连续按键检测时间间隔，InputActionType为多次按键时才需要设置
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Input Settings")
	float PressCheckTime;

	//交互所需的小部件。小部件必须添加BPI_InteractSystem_Widget接口。
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Widget Settings")
	TSubclassOf<UUserWidget> InteractionTipWidgetClass;

	//开始交互时，玩家蒙太奇动画类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Animations Settings")
	FString InteractMontage;

public:

	//获取从Player中传递过来的交互数据
	UFUNCTION(BlueprintCallable, Category = "Interaction System | Object")
	bool GetParameterValueByKey(const TArray<FInteractionParameter>& Parameters, const FString Key, FString& OutValue);
		
};
