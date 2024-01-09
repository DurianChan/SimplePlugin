// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SettingsSubsystem.h"
#include "GameSettings.generated.h"

class UCheckBox;
class UComboBoxString;
class USettingsSubsystem;
class USlider;

UCLASS()
class SIMPLESETTINGS_API UGameSettings : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, Category="Instance")
	USettingsSubsystem* SettingsSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FDisplaySetting PlayerDisplaySettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FMainSetting PlayerMainSettings;
	
	UPROPERTY(BlueprintReadWrite, Category="Settings Data")
	TArray<FIntPoint> SupportedResolutionsArray;

#pragma region CheckBox
	UPROPERTY(BlueprintReadWrite, Category= "Check", meta = (BindWidget))
	UCheckBox* MotionBlurCheckBox;
	UPROPERTY(BlueprintReadWrite, Category= "Check", meta = (BindWidget))
	UCheckBox* VSyncCheckBox;
#pragma endregion

#pragma region ComboBox
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* ResolutionRatioCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* WindowModeCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* FrameLimitCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* GlobalIlluminationCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* AntiAliasingCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* ShadowQualityCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* TextureQualityCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* ReflectionQualityCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* VisualEffectCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* PostProcessingCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* FoliageQualityCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* ShadingQualityCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* GlobalSettingCombo;
	UPROPERTY(BlueprintReadWrite, Category= "List", meta = (BindWidget))
	UComboBoxString* SelectLanguageCombo;
#pragma endregion
	
#pragma region Slider
	UPROPERTY(BlueprintReadWrite, Category= "Sound", meta = (BindWidget))
	USlider* MasterVolumeSlider;
	UPROPERTY(BlueprintReadWrite, Category= "Sound", meta = (BindWidget))
	USlider* MusicVolumeSlider;
	UPROPERTY(BlueprintReadWrite, Category= "Sound", meta = (BindWidget))
	USlider* EffectVolumeSlider;
	UPROPERTY(BlueprintReadWrite, Category= "Sound", meta = (BindWidget))
	USlider* VoiceVolumeSlider;
#pragma endregion

public:
	UFUNCTION(BlueprintCallable, Category="Settings")
	void LoadUIDefaultData();
	UFUNCTION(BlueprintCallable, Category="Settings")
	void InitializeDisplayUIData(FDisplaySetting DisplayData);
	UFUNCTION(BlueprintCallable, Category="Settings")
	void InitializeSoundUIData(FSoundSetting SoundData);
	UFUNCTION(BlueprintCallable, Category="Settings")
	void InitializeMainUIData(FMainSetting MainData);
	UFUNCTION(BlueprintCallable, Category="Settings")
	void QuickGraphicSettings(int Index);
	UFUNCTION(BlueprintImplementableEvent, Category="Combo")
	TArray<FString> GetFramesLimitTextArray();
	UFUNCTION(BlueprintImplementableEvent, Category="Combo")
	TArray<FString> GetQualityTextArray();

private:
	void SetAdvancedSettingEnable(bool bEnable);
};
