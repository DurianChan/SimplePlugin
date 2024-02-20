#pragma once


#include "CoreMinimal.h"
#include "InteractSystemData.generated.h"

//交互按键点击类型：单次点击，持续按压，多次点击
UENUM(BlueprintType)
enum class EInteractionInputType : uint8
{
	OncePressed,
	HoldPressed,
	MultiPressed
};

//检测交互模糊：射线检测、碰撞检测
UENUM(BlueprintType)
enum class EInteractionDetectionMode : uint8
{
	LineTrace,
	CollisionOverlap,
	BothAndTraceFirst,
	BothAndOverlapFirst
};

//交互状态
UENUM(BlueprintType)
enum class EInteractionState : uint8
{
	Pre,
	Start,
	Fail,
	Succeed,
	Finish
};

//交互类型：射线检测、碰撞检测、两者同时兼具
UENUM(BlueprintType)
enum class EInteractionDetectionType : uint8
{
	LineTrace,
	CollisionOverlap,
	Both
};

//在交互过程中，通过KeyValue进行传参
USTRUCT(BlueprintType)
struct FInteractionParameter
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	FString Value;
};