// Copyright Durian Chan


#include "PlayerInteractionComponent.h"
#include "IInteractionSystemObject.h"
#include "IInteractionSystemWidget.h"
#include "ObjectInteractionComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/KismetMathLibrary.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "TimerManager.h"
#include "GameFramework/Pawn.h"
#include "Engine/Engine.h"
#include "Engine/HitResult.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerInteractionComponent::UPlayerInteractionComponent()
{
	TraceDistance = 1000.0f;
	CollisionComponentTag = TEXT("InteractCollision");
	FieldOfView = 180.0f;
	bEnableDetection = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(UPlayerInteractionComponent, bEnableDetection, COND_OwnerOnly);
}

void UPlayerInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeComponentData();
}

void UPlayerInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateInteractDetection();
	PrintInteractionDebugMessage();
}

void UPlayerInteractionComponent::SetInteractionEnable(bool bEnable)
{
	if(GetOwnerRole() == ROLE_Authority)
	{
		bEnableDetection = bEnable;
		SetInteractiveActor(nullptr);

		if(!PlayerControllerRef->IsLocalController())
			CR_SetInteractionEnable(bEnable);
	}
	else
	{
		CR_SetInteractionEnable(bEnable);
	}
}

void UPlayerInteractionComponent::CR_SetInteractionEnable_Implementation(bool bEnable)
{
	bEnableDetection = bEnable;
	SetInteractiveActor(nullptr);
}

void UPlayerInteractionComponent::InitializeComponentData()
{
	//关闭Tick
	PrimaryComponentTick.SetTickFunctionEnable(false);

	FTimerHandle TimerHandle_Init;

	PlayerPawnRef = Cast<APawn>(this->GetOwner());
	//如果查找Owner对象失败，设置计时重新执行初始化函数查找
	if (PlayerPawnRef == nullptr)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Init, this, &UPlayerInteractionComponent::InitializeComponentData,0.2f);
		return;
	}

	PlayerControllerRef = Cast<APlayerController>(PlayerPawnRef->GetController());
	//如果查找PlayerController对象失败，设置计时重新执行初始化函数查找
	if (PlayerControllerRef == nullptr)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Init, this, &UPlayerInteractionComponent::InitializeComponentData,0.2f);
		return;
	}

	//判断是否本地玩家控制角色
	if (PlayerControllerRef->IsLocalController())
	{
		if (DetectionMode != EInteractionDetectionMode::LineTrace)
		{
			//如果当前检测方式不是射线，则从Pawn对象上根据Tag查找到对应的组件
			TArray<UActorComponent*> CompArray = PlayerPawnRef->GetComponentsByTag(UPrimitiveComponent::StaticClass(), CollisionComponentTag);

			if (CompArray.Num() > 0)
			{
				//如果能够找到带有制定Tag的组件，将第一个设置为检测重叠的组件对象
				if (CompArray[0] != nullptr)
					CollisionComponentRef = Cast<UPrimitiveComponent>(CompArray[0]);
			}
			else
			{
				checkf(CompArray.Num() > 0, TEXT("No collision component found with the %s Tag"), *CollisionComponentTag.ToString());
			}
		}

		//开启Tick
		PrimaryComponentTick.SetTickFunctionEnable(true);
	}
}

bool UPlayerInteractionComponent::CheckActorValid(AActor* ActorRef)
{
	if (ActorRef != nullptr && ActorRef->Implements<UIInteractionSystemObject>())
		return true;
	
	return false;
}

void UPlayerInteractionComponent::PrintInteractionDebugMessage()
{
	if (!bDebug)	return;

	FString DebugMessage("Interact System Debug\r\nDetection Mode:");

	FString DetectionModeStr = UEnum::GetValueAsString(DetectionMode);
	DebugMessage.Append(DetectionModeStr);

	DebugMessage.Append(TEXT("\r\nInteractResult:\r\n"));
	DebugMessage.Append(IsValid(InteractiveActorRef) ? InteractiveActorRef->GetClass()->GetName() : TEXT("None"));

	if(GEngine != nullptr)
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, DebugMessage);
}

#pragma region Handle Detection 


void UPlayerInteractionComponent::UpdateInteractDetection()
{
	if (!bEnableDetection) return;

	AActor* ResultActorRef;
	switch (DetectionMode)
	{
	case EInteractionDetectionMode::LineTrace:
		{
			ResultActorRef = GetLineTraceResult();
			UpdatePreInteractiveActor(ResultActorRef);
			break;
		}
	case EInteractionDetectionMode::CollisionOverlap:
		{
			ResultActorRef = GetCollisionOverlapResult();
			UpdatePreInteractiveActor(ResultActorRef);
			break;
		}
	case EInteractionDetectionMode::BothAndTraceFirst:
		{
			//先进行射线检测，如果没有检测成功，则进行碰撞检测
			ResultActorRef = GetLineTraceResult();
			if (IsValid(ResultActorRef))
			{
				UpdatePreInteractiveActor(ResultActorRef);
				break;
			}
			ResultActorRef = GetCollisionOverlapResult();
			UpdatePreInteractiveActor(ResultActorRef);
			break;
		}
	case EInteractionDetectionMode::BothAndOverlapFirst:
		{
			//先进行碰撞检测，如果没有检测成功，则进行射线检测
			ResultActorRef = GetCollisionOverlapResult();
			if (IsValid(ResultActorRef))
			{
				UpdatePreInteractiveActor(ResultActorRef);
				break;
			}
			ResultActorRef = GetLineTraceResult();
			UpdatePreInteractiveActor(ResultActorRef);
			break;
		}
	default:
		break;
	}
}

AActor* UPlayerInteractionComponent::GetLineTraceResult()
{
	if (PlayerControllerRef == nullptr)
		return nullptr;

	FHitResult LineTraceResult;
	FVector Start;
	FVector End;
	FCollisionQueryParams Params;
	//忽略自身Pawn
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(PlayerPawnRef);
	Params.AddIgnoredActors(IgnoreActors);

	//通过鼠标位置作为检测交互物体的射线位置
	if (bTraceByMousePosition)
	{
		FVector WorldDirection;
		PlayerControllerRef->DeprojectMousePositionToWorld(Start, WorldDirection);
		End = Start + (WorldDirection * TraceDistance);
	}
	else
	{
		//获取玩家控制器关联的相机管理器的当前位置作为射线的起点
		Start = PlayerControllerRef->PlayerCameraManager->GetCameraLocation();
		//计算射线的终点：先获取相机的旋转方向向量，然后根据给定的距离TraceDistance沿该方向延伸出射线的长度，将起点加上这个偏移量得到终点。
		End = Start + (PlayerControllerRef->PlayerCameraManager->GetCameraRotation().Vector() * TraceDistance);
	}
	bool result = GetWorld()->LineTraceSingleByObjectType(LineTraceResult, Start, End, TraceObjectTypes, Params);

	//没有检测到则返回空指针
	if (!result && !LineTraceResult.bBlockingHit)
		return nullptr;
	
	AActor* HitActor = LineTraceResult.GetHitObjectHandle().FetchActor();
	if (CheckActorValid(HitActor))
	{
		UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(HitActor->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
		//当前检测类型不等于碰撞检测才能返回检测到的对象
		if (comp != nullptr && comp->InteractionType != EInteractionDetectionType::CollisionOverlap)
			return HitActor;
	}

	return nullptr;
}

AActor* UPlayerInteractionComponent::GetCollisionOverlapResult()
{
	if (CollisionComponentRef == nullptr)
		return nullptr;

	CollisionOverlappingActors.Empty();
	float CloserAngle = FieldOfView / 2;
	AActor* OutActorRef = nullptr;

	//获取碰撞的对象合集
	TArray<AActor*> OverlappingActors;
	CollisionComponentRef->GetOverlappingActors(OverlappingActors);

	for (AActor* element : OverlappingActors)
	{
		if (!CheckActorValid(element))
			continue;

		//检测重叠对象是否带有交互组件
		UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(element->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
		if (comp == nullptr)	continue;

		//排除组件上的交互类型不是射线检测的
		if (comp->InteractionType != EInteractionDetectionType::LineTrace)
		{
			CollisionOverlappingActors.AddUnique(element);
			//计算得到最接近玩家正前方的Actor
			if (GetCloserActor(CloserAngle, element))
			{
				OutActorRef = element;
			}
		}
	}

	return OutActorRef;
}

bool UPlayerInteractionComponent::GetCloserActor(float& CurrentCloserAngle, AActor* ActorRef)
{
	if (ActorRef == nullptr)
		return false;
	//计算从玩家角色到目标Actor之间的相对位置向量，并将其Z轴坐标置零，以确保只在XY平面上计算距离和角度
	FVector RelativeVector = ActorRef->GetActorLocation() - PlayerPawnRef->GetActorLocation();
	RelativeVector = FVector(RelativeVector.X, RelativeVector.Y, 0.0f);
	//对这个二维化的向量取单位向量
	FVector NormVec = RelativeVector.GetSafeNormal();

	//计算NormVec与玩家角色面向方向（PlayerPawnRef->GetActorForwardVector()）的点积
	//然后通过UKismetMathLibrary::DegAcos(DotResult)计算出两者之间的角度（弧度制），并转换为度数
	float DotResult = NormVec.Dot(PlayerPawnRef->GetActorForwardVector());
	float angle = FMath::Abs(UKismetMathLibrary::DegAcos(DotResult));

	//如果计算得到的角度小于当前记录的最小角度CurrentCloserAngle，则将该角度赋值给CurrentCloserAngle，并返回true，表示找到了一个更接近玩家的Actor
	if (angle < CurrentCloserAngle)
	{
		CurrentCloserAngle = angle;
		return true;
	}
	
	//如果计算得到的角度不小于当前记录的最小角度，则返回false，表示当前Actor并不比已知的最近Actor更接近
	return false;
}

TArray<AActor*> UPlayerInteractionComponent::GetOverlappingActors()
{
	return CollisionOverlappingActors;
}

AActor* UPlayerInteractionComponent::GetCurrentInteractiveActor()
{
	return InteractiveActorRef;
}

#pragma endregion 

#pragma region Handle Interaction

void UPlayerInteractionComponent::UpdatePreInteractiveActor(AActor* ActorRef)
{
	if (ActorRef == nullptr)
	{
		SetInteractiveActor(nullptr);
	}
	else if (ActorRef != InteractiveActorRef && IIInteractionSystemObject::Execute_CanInteract(ActorRef, PlayerPawnRef))
	{
		SetInteractiveActor(ActorRef);
	}
}

void UPlayerInteractionComponent::SetInteractiveActor(AActor* ActorRef)
{
	//关闭自定义深度显示
	if (!bEnableDetection || InteractiveActorRef != nullptr)
	{
		OpenPreInteractiveActorCustomDepth(false);
	}
	//移除交互提示Widget
	if (!bEnableDetection || ActorRef == nullptr)
	{
		InteractiveActorRef = nullptr;
		RemoveInteractiveTipWidget();
	}
	//开启自定义深度显示，创建交互提示Widget
	else
	{
		InteractiveActorRef = ActorRef;
		OpenPreInteractiveActorCustomDepth(true);
		CreateInteractiveTipWidget();
	}
}

void UPlayerInteractionComponent::OpenPreInteractiveActorCustomDepth(bool bOpen)
{
	if (InteractiveActorRef != nullptr && InteractiveActorRef->Implements<UIInteractionSystemObject>())
	{
		IIInteractionSystemObject::Execute_SetCustomDepth(InteractiveActorRef, bOpen);
	}
}

void UPlayerInteractionComponent::CreateInteractiveTipWidget()
{
	RemoveInteractiveTipWidget();
	if (InteractiveActorRef != nullptr)
	{
		UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
		if (comp != nullptr)
		{
			if (IsValid(comp->InteractionTipWidgetClass.Get()))
			{
				InteractiveTipWidgetRef = CreateWidget<UUserWidget>(PlayerControllerRef, comp->InteractionTipWidgetClass);
				InteractiveTipWidgetRef->AddToViewport(InteractiveWidgetZOrder);
				//改变当前交互状态为Pre
				ChangeInteractionState(EInteractionState::Pre);
			}
		}
	}
}

void UPlayerInteractionComponent::RemoveInteractiveTipWidget()
{
	//如果交互成功则变更状态为Finish，不移除交互提示
	if (bInteractSucceed)
	{
		ChangeInteractionState(EInteractionState::Finish);
		return;
	}
	if (InteractiveTipWidgetRef != nullptr)
	{
		InteractiveTipWidgetRef->RemoveFromParent();
		InteractiveTipWidgetRef = nullptr;
	}
}

void UPlayerInteractionComponent::ChangeInteractionState(EInteractionState State)
{
	if(!bEnableDetection) return;
	
	if (InteractiveActorRef == nullptr || InteractiveTipWidgetRef == nullptr)
	{
		SetInteractiveActor(nullptr);
		PrimaryComponentTick.SetTickFunctionEnable(true);
		return;
	}
	
	if (!InteractiveActorRef->Implements<UIInteractionSystemObject>() || !InteractiveTipWidgetRef->Implements<UIInteractionSystemWidget>())
		return;

	//判断是否接口Widget状态设置成功
	IIInteractionSystemWidget::Execute_SetInteractStateToWidget(InteractiveTipWidgetRef, InteractiveActorRef, State);
	
	//检测是否是同步对象，如果是则需要在Server上同步调用接口改变Object状态
	if (InteractiveActorRef->GetIsReplicated())
		SR_ChangeInteractionState(InteractiveActorRef, State, PlayerPawnRef);
	else
		IIInteractionSystemObject::Execute_OnInteractionStateChanged(InteractiveActorRef, State, PlayerPawnRef);

	switch (State)
	{
	case EInteractionState::Pre:
		break;
	case EInteractionState::Start:
		{
			PrimaryComponentTick.SetTickFunctionEnable(false);
			break;
		}
	case EInteractionState::Fail:
		{
			bInteractSucceed = false;
			StopMontage();
			SetInteractiveActor(nullptr);
			PrimaryComponentTick.SetTickFunctionEnable(true);
			break;
		}
	case EInteractionState::Succeed:
		{
			bInteractSucceed = true;
			UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
			//当交互组件不为空，且组件勾选了成功后完成，才能够返回完成
			if (comp != nullptr && comp->bFinishOnSuccess)
				ChangeInteractionState(EInteractionState::Finish);
			break;
		}
	case EInteractionState::Finish:
		{
			bInteractSucceed = false;
			SetInteractiveActor(nullptr);
			PrimaryComponentTick.SetTickFunctionEnable(true);
			break;
		}
	}
}

void UPlayerInteractionComponent::SR_ChangeInteractionState_Implementation(AActor* InteractiveActor, const EInteractionState State, const APawn* Interactor)
{
	if (InteractiveActor != nullptr && InteractiveActor->Implements<UIInteractionSystemObject>())
		IIInteractionSystemObject::Execute_OnInteractionStateChanged(InteractiveActor, State, Interactor);
}


#pragma endregion 

#pragma region Handle Input Action

void UPlayerInteractionComponent::TryInteractWithInput(const FString InputActionName, const bool bPressed)
{
	if (InteractiveActorRef == nullptr)
		return;

	//从检测对象InteractiveActorRef身上中获取对应输入名字匹配，并检查当前能否交互
	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	if (comp == nullptr) return;
	
	if (comp->InputActionName == InputActionName && !bInteractSucceed)
	{
		HandleInputAction(bPressed);
	}
}

void UPlayerInteractionComponent::HandleInputAction(const bool bPressed)
{
	if (InteractiveActorRef == nullptr)	return;

	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	if (comp == nullptr) return;
	
	switch (comp->InputActionType)
	{
	case EInteractionInputType::OncePressed:
		HandleOncePressed(comp, bPressed);
		break;
	case EInteractionInputType::HoldPressed:
		HandleHoldPressed(comp, bPressed);
		break;
	case EInteractionInputType::MultiPressed:
		HandleMultiPressed(comp, bPressed);
		break;
	}
}

void UPlayerInteractionComponent::HandleOncePressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed)
{
	if(ObjectComponent == nullptr) return;
	if (bPressed)
	{
		CheckPlayMontage();
		ChangeInteractionState(EInteractionState::Start);
		ChangeInteractionState(EInteractionState::Succeed);
	}
}

void UPlayerInteractionComponent::HandleHoldPressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed)
{
	if(ObjectComponent == nullptr) return;
	if (bPressed)
	{
		if (!TimerHandle_InputKeepCheck.IsValid())
		{
			CheckPlayMontage();
			ChangeInteractionState(EInteractionState::Start);
			CurrentKeepTime = 0.0f;
			//设置循环时间
			const float LoopTime = (ObjectComponent->HoldKeyTime > 0.0f) ? 0.02f : 10.0f;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle_InputKeepCheck, this, &UPlayerInteractionComponent::HandleHoldPressed,LoopTime, true);
		}
	}
	else
	{
		if (TimerHandle_InputKeepCheck.IsValid())
		{
			if (ObjectComponent->HoldKeyTime > 0.0f && CurrentKeepTime < ObjectComponent->HoldKeyTime)
			{
					GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputKeepCheck);
					ChangeInteractionState(EInteractionState::Fail);
			}
			else
			{
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputKeepCheck);
				ChangeInteractionState(EInteractionState::Succeed);
			}
		}
	}
}

void UPlayerInteractionComponent::HandleMultiPressed(UObjectInteractionComponent* ObjectComponent, const bool bPressed)
{
	if(ObjectComponent == nullptr) return;
	if (bPressed)
	{
		if (TimerHandle_InputMultiCheck.IsValid())
		{
			CurrentInputMultiPressedAmount++;
			MultiPressedAmountChanged(CurrentInputMultiPressedAmount, ObjectComponent->PressKeyAmount);
			if (CurrentInputMultiPressedAmount >= ObjectComponent->PressKeyAmount)
			{
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputMultiCheck);
				ChangeInteractionState(EInteractionState::Succeed);
			}
			else
			{
				CurrentPressCheckTime = ObjectComponent->PressCheckTime;
			}
		}
		else
		{
			CurrentInputMultiPressedAmount = 1;
			CheckPlayMontage();
			CurrentPressCheckTime = ObjectComponent->PressCheckTime;
			ChangeInteractionState(EInteractionState::Start);
			GetWorld()->GetTimerManager().SetTimer(TimerHandle_InputMultiCheck, this,&UPlayerInteractionComponent::HandleMultiPressed,0.02f, true);
			MultiPressedAmountChanged(CurrentInputMultiPressedAmount, ObjectComponent->PressKeyAmount);
		}
	}
}

void UPlayerInteractionComponent::HandleHoldPressed()
{
	if (InteractiveActorRef == nullptr)
	{
		CurrentKeepTime = 0.0f;
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputKeepCheck);
		return;
	}

	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	if (comp != nullptr)
	{
		if (comp->HoldKeyTime > 0.0f)
		{
			CurrentKeepTime += 0.02;
			DurationPercentChanged(CurrentKeepTime / comp->HoldKeyTime);

			//满足持续按下时间变更交互状态为成功
			if (CurrentKeepTime >= comp->HoldKeyTime)
			{
				CurrentKeepTime = 0.0f;
				GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputKeepCheck);
				ChangeInteractionState(EInteractionState::Succeed);
			}
		}
	}
}

void UPlayerInteractionComponent::HandleMultiPressed()
{
	if (InteractiveActorRef == nullptr)
	{
		CurrentPressCheckTime = 0.0f;
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputMultiCheck);
		CurrentInputMultiPressedAmount = 0;
		return;
	}

	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	if (comp != nullptr)
	{
		CurrentPressCheckTime -= 0.02f;
		if (CurrentPressCheckTime <= 0.0f)
		{
			CurrentPressCheckTime = comp->PressCheckTime;
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle_InputMultiCheck);
			ChangeInteractionState(EInteractionState::Fail);
		}
	}
}

void UPlayerInteractionComponent::DurationPercentChanged(const float Percent)
{
	if (InteractiveActorRef == nullptr)
		return;

	//判断是否是同步对象，通过Server调用传递百分比值
	if (InteractiveActorRef->GetIsReplicated())
		SR_DurationPercentChanged(InteractiveActorRef, PlayerPawnRef, Percent);
	else
		IIInteractionSystemObject::Execute_OnHoldTimeChanged(InteractiveActorRef, PlayerPawnRef, Percent);

	//传递百分比值到Widget中
	if (InteractiveTipWidgetRef != nullptr && InteractiveTipWidgetRef->Implements<UIInteractionSystemWidget>())
	{
		IIInteractionSystemWidget::Execute_ChangeHoldTimePercent(InteractiveTipWidgetRef, InteractiveActorRef, Percent);
	}
}

void UPlayerInteractionComponent::SR_DurationPercentChanged_Implementation(AActor* InteractiveActor, const APawn* InteractPawn, const float Percent)
{
	if (InteractiveActor != nullptr && InteractiveActor->Implements<UIInteractionSystemObject>())
		IIInteractionSystemObject::Execute_OnHoldTimeChanged(InteractiveActor, InteractPawn, Percent);
}

void UPlayerInteractionComponent::MultiPressedAmountChanged(const int CurrentAmount, const int MaxAmount)
{
	if (InteractiveActorRef == nullptr)
		return;
	
	if (InteractiveActorRef->GetIsReplicated())
		SR_MultiPressedAmountChanged(InteractiveActorRef, PlayerPawnRef, CurrentAmount, MaxAmount);
	else
		IIInteractionSystemObject::Execute_OnMultiInputPressed(InteractiveActorRef, PlayerPawnRef, CurrentAmount,MaxAmount);

	if (InteractiveTipWidgetRef != nullptr && InteractiveTipWidgetRef->Implements<UIInteractionSystemWidget>())
	{
		IIInteractionSystemWidget::Execute_ChangeMultiPressCount(InteractiveTipWidgetRef, InteractiveActorRef,CurrentAmount, MaxAmount);
	}
}

void UPlayerInteractionComponent::SR_MultiPressedAmountChanged_Implementation(AActor* InteractiveActor, const APawn* InteractPawn, const int CurrentAmount, const int MaxAmount)
{
	if (InteractiveActor != nullptr && InteractiveActor->Implements<UIInteractionSystemObject>())
		IIInteractionSystemObject::Execute_OnMultiInputPressed(InteractiveActor, InteractPawn, CurrentAmount, MaxAmount);
}

#pragma endregion

#pragma region Handle Montage

void UPlayerInteractionComponent::CheckPlayMontage()
{
	if (InteractiveActorRef == nullptr)	return;
	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	if (comp != nullptr && !comp->InteractMontage.IsEmpty())
	{
		//设置对应蒙太奇名字
		SR_PlayMontage(comp->InteractMontage);
	}
}

void UPlayerInteractionComponent::SR_PlayMontage_Implementation(const FString& MontageName)
{
	MCR_PlayInteractionMontage(MontageName);
}

void UPlayerInteractionComponent::MCR_PlayInteractionMontage_Implementation(const FString& MontageName)
{
	UAnimMontage** MapValue = InteractMontage.Find(MontageName);
	if (MapValue == nullptr)
		return;

	UAnimMontage* MontageRef = *MapValue;
	if (MontageRef != nullptr)
	{
		USkeletalMeshComponent* SKComponent = Cast<USkeletalMeshComponent>(
			PlayerPawnRef->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
		if (SKComponent != nullptr)
		{
			SKComponent->GetAnimInstance()->Montage_Play(MontageRef);
		}
	}
}

void UPlayerInteractionComponent::StopMontage()
{
	if (InteractiveActorRef == nullptr)
		return;
	
	UObjectInteractionComponent* comp = Cast<UObjectInteractionComponent>(
		InteractiveActorRef->GetComponentByClass(UObjectInteractionComponent::StaticClass()));
	
	if (comp != nullptr && !comp->InteractMontage.IsEmpty())
	{
		SR_StopMontage(comp->InteractMontage);
	}
}

void UPlayerInteractionComponent::SR_StopMontage_Implementation(const FString& MontageName)
{
	MCR_StopInteractionMontage(MontageName);
}

void UPlayerInteractionComponent::MCR_StopInteractionMontage_Implementation(const FString& MontageName)
{
	UAnimMontage** MapValue = InteractMontage.Find(MontageName);
	if (MapValue == nullptr)
		return;

	UAnimMontage* MontageRef = *MapValue;
	if (MontageRef != nullptr)
	{
		USkeletalMeshComponent* SK_Comp = Cast<USkeletalMeshComponent>(
			PlayerPawnRef->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
		if (SK_Comp != nullptr)
		{
			UAnimInstance* AnimInstance = SK_Comp->GetAnimInstance();
			if (AnimInstance == nullptr)
				return;
			if (AnimInstance->Montage_IsActive(MontageRef))
			{
				AnimInstance->Montage_Stop(MontageRef->GetDefaultBlendOutTime(), MontageRef);
			}
		}
	}
}


#pragma endregion

#pragma region Handle Call Interactive Object Function

void UPlayerInteractionComponent::CallInteractiveObjectFunction(AActor* InteractiveActor, const TArray<FInteractionParameter> Parameters)
{
	if (InteractiveActor == nullptr)
		return;
	if (InteractiveActor->GetIsReplicated())
		SR_CallInteractiveObjectFunction(InteractiveActor, Parameters);
	else
		CR_CallInteractiveObjectFunction(InteractiveActor, Parameters);
}

void UPlayerInteractionComponent::SR_CallInteractiveObjectFunction_Implementation(AActor* InteractiveActor, const TArray<FInteractionParameter>& Parameters)
{
	if (InteractiveActor != nullptr && InteractiveActor->Implements<UIInteractionSystemObject>())
		IIInteractionSystemObject::Execute_CallFunctionByParameters(InteractiveActor, Parameters);
}

void UPlayerInteractionComponent::CR_CallInteractiveObjectFunction_Implementation(AActor* InteractiveActor, const TArray<FInteractionParameter>& Parameters)
{
	if (InteractiveActor != nullptr && InteractiveActor->Implements<UIInteractionSystemObject>())
		IIInteractionSystemObject::Execute_CallFunctionByParameters(InteractiveActor, Parameters);
}

#pragma endregion



