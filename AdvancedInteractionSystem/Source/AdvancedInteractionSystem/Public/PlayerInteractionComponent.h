// Copyright Durian Chan

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractSystemData.h"
#include "PlayerInteractionComponent.generated.h"

class UObjectInteractionComponent;
class UPrimitiveComponent;
class UUserWidget;
class APawn;
class UAnimMontage;
class APlayerController;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class ADVANCEDINTERACTIONSYSTEM_API UPlayerInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UPlayerInteractionComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//检测输入匹配尝试开始输入
	UFUNCTION(BlueprintCallable, Category = "Interaction System|Player")
	void TryInteractWithInput(const FString InputActionName, const bool bPressed);

	//开启或关闭交互检测
	UFUNCTION(BlueprintCallable, Category = "Interaction System|Player")
	void SetInteractionEnable(bool bEnable);

	//获取重叠检测到的物体合集
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Interaction System|Player")
	TArray<AActor*> GetOverlappingActors();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Interaction System|Player")
	AActor* GetCurrentInteractiveActor();

	//变更交互状态
	UFUNCTION(BlueprintCallable, Category = "Interaction System|Player")
	void ChangeInteractionState(EInteractionState State);

	//将数据以KeyValue形式传给交互对象
	UFUNCTION(BlueprintCallable, Category = "Interaction System|Player")
	void CallInteractiveObjectFunction(AActor* InteractiveActor, const TArray<FInteractionParameter> Parameters);
	
protected:

	//调用下面初始化组件方法
	virtual void BeginPlay() override;

	//初始化组件，查找和设置对应的引用
	void InitializeComponentData();

	//根据不同的检测模式进行Tick检测
	void UpdateInteractDetection();

	//Debug信息，打印检测对象
	void PrintInteractionDebugMessage();

	//更新预交互对象
	void UpdatePreInteractiveActor(AActor* ActorRef);

	//设置可交互的对象状态：深度&提示显示
	void SetInteractiveActor(AActor* ActorRef);

	//控制交互对象的深度显示和隐藏
	void OpenPreInteractiveActorCustomDepth(bool bOpen);

	//创建交互提示Widget
	void CreateInteractiveTipWidget();

	//移除交互提示Widget
	void RemoveInteractiveTipWidget();

	UFUNCTION(Client, Reliable)
	void CR_SetInteractionEnable(bool bEnable);

	//传递交互状态到交互对象的事件上
	UFUNCTION(Server, Reliable)
	void SR_ChangeInteractionState(AActor* InteractiveActor, const EInteractionState State, const APawn* Interactor);

	//获取射线检测结果
	AActor* GetLineTraceResult();

	//获取碰撞重叠的结果
	AActor* GetCollisionOverlapResult();

	//检测对象是否继承了IS_ObjectInterface接口
	bool CheckActorValid(AActor* ActorRef);
	
	//找出所选的Actor最接近于玩家正前方
	bool GetCloserActor(float& CurrentCloserAngle, AActor* ActorRef);

	//检测输入
	void HandleInputAction(const bool bPressed);
	void HandleOncePressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed);
	void HandleHoldPressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed);
	void HandleMultiPressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed);

	//检测持续按下的输入
	void HandleHoldPressed();

	//检测多次按下的输入
	void HandleMultiPressed();

	//更改的持续时间百分比
	void DurationPercentChanged(const float Percent);

	//传递持续按下的百分比值
	UFUNCTION(Server, Reliable)
	void SR_DurationPercentChanged(AActor* InteractiveActor, const APawn* InteractPawn, const float Percent);

	//传递多次按下的次数
	void MultiPressedAmountChanged(const int CurrentAmount, const int MaxAmount);
	UFUNCTION(Server, Reliable)
	void SR_MultiPressedAmountChanged(AActor* InteractiveActor, const APawn* InteractPawn, const int CurrentAmount,const int MaxAmount);

	//检查并播放交互蒙太奇
	void CheckPlayMontage();
	UFUNCTION(Server, Reliable)
	void SR_PlayMontage(const FString& MontageName);
	UFUNCTION(NetMulticast, Reliable)
	void MCR_PlayInteractionMontage(const FString& MontageName);

	//停止蒙太奇播放
	void StopMontage();
	UFUNCTION(Server, Reliable)
	void SR_StopMontage(const FString& MontageName);
	UFUNCTION(NetMulticast, Reliable)
	void MCR_StopInteractionMontage(const FString& MontageName);

	//传递数据
	UFUNCTION(Server, Reliable)
	void SR_CallInteractiveObjectFunction(AActor* InteractiveActor, const TArray<FInteractionParameter>& Parameters);
	UFUNCTION(Client, Reliable)
	void CR_CallInteractiveObjectFunction(AActor* InteractiveActor, const TArray<FInteractionParameter>& Parameters);

public:
	//检测类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System")
	EInteractionDetectionMode DetectionMode;
	
	//是否开启Debug显示
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System")
	bool bDebug;
	
	//是否通过将鼠标屏幕坐标映射到世界坐标来检测交互。如果你只想通过Collision组件检测，忽略这个选项。
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Trace Settings")
	bool bTraceByMousePosition;

	//射线距离
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Trace Settings")
	float TraceDistance;

	//射线检测类型。强烈建议新建一个类型，这个类型只代表可交互物体。
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Trace Settings")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;

	//如果DetectionMode包含了CollisionOverlap，你需要在玩家身上添加一个碰撞组件，并且给碰撞组件添加这个Tag
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Collision Settings")
	FName CollisionComponentTag;

	//碰撞检测的角度范围
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Collision Settings")
	float FieldOfView;

	//交互时播放的蒙太奇动画，这是一个Map类型数据，Key对应BPC_InteractSystem_Object中的InteractMontage。
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Animations Settings")
	TMap<FString, UAnimMontage*> InteractMontage;

	//设置交互Widget的ZOrder
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction System|Widget Settings")
	int InteractiveWidgetZOrder;

private:
	//组件的Owner
	TObjectPtr<APawn> PlayerPawnRef;
	
	//组件的Owner的PlayerController
	TObjectPtr<APlayerController> PlayerControllerRef;
	
	//交互对象的碰撞组件
	TObjectPtr<UPrimitiveComponent> CollisionComponentRef;

	//碰撞重叠的物体合集
	TArray<TObjectPtr<AActor>> CollisionOverlappingActors;

	//交互对象引用
	TObjectPtr<AActor> InteractiveActorRef;

	//交互对象Widget引用
	TObjectPtr<UUserWidget> InteractiveTipWidgetRef;

	//判断能否进行交互对象
	UPROPERTY(Replicated)
	bool bEnableDetection;

	//判断是否交互执行成功
	bool bInteractSucceed;

	FTimerHandle TimerHandle_InputKeepCheck;

	//当前持续按下的时间
	float CurrentKeepTime;

	FTimerHandle TimerHandle_InputMultiCheck;

	//当前持续按下的次数
	int CurrentInputMultiPressedAmount;

	//当前按下检测的时间
	float CurrentPressCheckTime;
};
