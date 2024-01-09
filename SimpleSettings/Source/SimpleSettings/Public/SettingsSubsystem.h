// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SettingsSubsystem.generated.h"

class USettingsSaveData;

USTRUCT(BlueprintType, meta=(UsesHierarchy))
struct FDisplaySetting
{
	GENERATED_BODY()
	
	//动态模糊
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	bool bEnableMotionBlur;
	//分辨率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	FIntPoint ResolutionRatio;
	//窗口模式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	TEnumAsByte<EWindowMode::Type> WindowMode;
	//帧数限制
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	FString FrameLimit;
	//垂直同步
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	bool bEnableVSync;
	//全局光照
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int GlobalIllumination;
	//抗锯齿
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int AntiAliasing;
	//阴影
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int ShadowQuality;
	//贴图
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int TextureQuality;
	//反射
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int ReflectionQuality;
	//视觉
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int VisualEffect;
	//后处理
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int PostProcessing;
	//植被
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int FoliageQuality;
	//着色
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DisplaySetting")
	int ShadingQuality;
};

USTRUCT(BlueprintType, meta=(UsesHierarchy))
struct FSoundSetting
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SoundSetting")
	float MasterVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SoundSetting")
	float BackgroundVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SoundSetting")
	float VoiceVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SoundSetting")
	float EffectVolume;
};

USTRUCT(BlueprintType, meta=(UsesHierarchy))
struct FMainSetting
{
	GENERATED_BODY()
	
	//语言选择
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MainSetting")
	int LanguageSelection;
};


UCLASS()
class SIMPLESETTINGS_API USettingsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	USettingsSubsystem();

	//默认主设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FMainSetting DefaultMainSettings;
	
	//玩家主设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FMainSetting PlayerMainSettings;
	
	//默认显示设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FDisplaySetting DefaultDisplaySetting;

	//玩家显示设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FDisplaySetting PlayerDisplaySettings;

	//默认音量设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FSoundSetting DefaultSoundSettings;

	//玩家音量设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FSoundSetting PlayerSoundSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	TSubclassOf<USettingsSaveData> SettingsSaveData;

public:
	UFUNCTION(BlueprintCallable, Category="Data")
	void SaveSettingsData();

	UFUNCTION(BlueprintCallable, Category="Data")
	void ReadSettingsData();

	UFUNCTION(BlueprintCallable,  Category="Data")
	void LoadSettingsData(FDisplaySetting SettingData);

private:
	const FString SaveGameFileName = "savegame_setting";

	void SetMotionBlurEnable(bool bEnable);
};
