#include "GameSettings.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/Slider.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameSettings::NativeConstruct()
{
	Super::NativeConstruct();

	UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		SettingsSubsystem = GameInstance->GetSubsystem<USettingsSubsystem>();
	}

	LoadUIDefaultData();
	PlayerDisplaySettings = SettingsSubsystem->PlayerDisplaySettings;
	PlayerMainSettings = SettingsSubsystem->PlayerMainSettings;
	InitializeMainUIData(PlayerMainSettings);
	InitializeDisplayUIData(PlayerDisplaySettings);
	InitializeSoundUIData(SettingsSubsystem->PlayerSoundSettings);
}

void UGameSettings::LoadUIDefaultData()
{
	FString OptionString;
	//只有在首次加载获取的时候执行，避免重新给分辨率添加选项时重复
	if(SupportedResolutionsArray.Num() == 0)
		UKismetSystemLibrary::GetSupportedFullscreenResolutions(SupportedResolutionsArray);

	ResolutionRatioCombo->ClearOptions();
	WindowModeCombo->ClearOptions();
	FrameLimitCombo->ClearOptions();
	GlobalIlluminationCombo->ClearOptions();
	AntiAliasingCombo->ClearOptions();
	ShadowQualityCombo->ClearOptions();
	TextureQualityCombo->ClearOptions();
	ReflectionQualityCombo->ClearOptions();
	VisualEffectCombo->ClearOptions();
	PostProcessingCombo->ClearOptions();
	FoliageQualityCombo->ClearOptions();
	ShadingQualityCombo->ClearOptions();
	GlobalSettingCombo->ClearOptions();
	
	for (FIntPoint Resolution : SupportedResolutionsArray)
	{
		OptionString = FString::FromInt(Resolution.X) + TEXT("*") + FString::FromInt(Resolution.Y);
		ResolutionRatioCombo->AddOption(OptionString);
	}

	TArray<EWindowMode::Type> WindowModeArray = {EWindowMode::Type::Windowed, EWindowMode::Type::WindowedFullscreen, EWindowMode::Type::Fullscreen};
	for (EWindowMode::Type WindowModeType : WindowModeArray)
	{
		OptionString = LexToString(WindowModeType);
		WindowModeCombo->AddOption(OptionString);
	}

	//这里使用了C++本地化语言的方法，但是下面使用了蓝图传递FText转为FString数组替代方便配置
	//在c++中为ComboBox设置选项，在本地化语言切换的时候一定要清空重新设置选项，否则选项显示语言不能及时更新
	/*#define LOCTEXT_NAMESPACE "UGameSettings"
	
	TArray<FString> FramesLimitArray = {TEXT("30"), TEXT("60"), TEXT("120"), TEXT("240")};
	
	const FText Unlimited = LOCTEXT("Unlimited", "无限制");
	FramesLimitArray.Add(Unlimited.ToString());
	
	TArray<FString> QualityArray = {LOCTEXT("Lower", "低").ToString(), LOCTEXT("Medium", "中").ToString(),
		LOCTEXT("High", "高").ToString(), LOCTEXT("Highest", "最高").ToString(), LOCTEXT("Epic", "影视").ToString()};
	
	const FText Custom = LOCTEXT("Custom", "自定义");
	
	#undef LOCTEXT_NAMESPACE*/
	
	
	for (FString FramesLimitType : GetFramesLimitTextArray())
	{
		FrameLimitCombo->AddOption(FramesLimitType);
	}
	
	int Index = 0;
	for (FString QualityArrayType : GetQualityTextArray())
	{
		if(Index == 5)
		{
			GlobalSettingCombo->AddOption(QualityArrayType);
			return;
		}
		
		GlobalIlluminationCombo->AddOption(QualityArrayType);
		AntiAliasingCombo->AddOption(QualityArrayType);
		ShadowQualityCombo->AddOption(QualityArrayType);
		TextureQualityCombo->AddOption(QualityArrayType);
		ReflectionQualityCombo->AddOption(QualityArrayType);
		VisualEffectCombo->AddOption(QualityArrayType);
		PostProcessingCombo->AddOption(QualityArrayType);
		FoliageQualityCombo->AddOption(QualityArrayType);
		ShadingQualityCombo->AddOption(QualityArrayType);
		GlobalSettingCombo->AddOption(QualityArrayType);
		Index++;
	}
}

void UGameSettings::InitializeDisplayUIData(FDisplaySetting DisplayData)
{
	FString OptionString = FString::FromInt(DisplayData.ResolutionRatio.X) + TEXT("*") + FString::FromInt(DisplayData.ResolutionRatio.Y);
	ResolutionRatioCombo->SetSelectedOption(OptionString);

	OptionString = LexToString(DisplayData.WindowMode);
	WindowModeCombo->SetSelectedOption(OptionString);

	OptionString = DisplayData.FrameLimit;
	FrameLimitCombo->SetSelectedOption(OptionString);

	const ECheckBoxState DynamicBlurState = DisplayData.bEnableMotionBlur ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	MotionBlurCheckBox->SetCheckedState(DynamicBlurState);
	const ECheckBoxState VSyncCheckState = DisplayData.bEnableVSync ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	VSyncCheckBox->SetCheckedState(VSyncCheckState);
	
	GlobalIlluminationCombo->SetSelectedOption(GlobalIlluminationCombo->GetOptionAtIndex(DisplayData.GlobalIllumination));
	AntiAliasingCombo->SetSelectedOption(AntiAliasingCombo->GetOptionAtIndex(DisplayData.AntiAliasing));    
	ShadowQualityCombo->SetSelectedOption(ShadowQualityCombo->GetOptionAtIndex(DisplayData.ShadowQuality)); 
	TextureQualityCombo->SetSelectedOption(TextureQualityCombo->GetOptionAtIndex(DisplayData.TextureQuality));               
	ReflectionQualityCombo->SetSelectedOption(ReflectionQualityCombo->GetOptionAtIndex(DisplayData.ReflectionQuality));
	VisualEffectCombo->SetSelectedOption(VisualEffectCombo->GetOptionAtIndex(DisplayData.VisualEffect));
	PostProcessingCombo->SetSelectedOption(PostProcessingCombo->GetOptionAtIndex(DisplayData.PostProcessing));
	FoliageQualityCombo->SetSelectedOption(FoliageQualityCombo->GetOptionAtIndex(DisplayData.FoliageQuality));
	ShadingQualityCombo->SetSelectedOption(ShadingQualityCombo->GetOptionAtIndex(DisplayData.ShadingQuality));

	GlobalSettingCombo->SetSelectedIndex(5);
}

void UGameSettings::InitializeSoundUIData(FSoundSetting SoundData)
{
	MasterVolumeSlider->SetValue(SoundData.MasterVolume);
	MusicVolumeSlider->SetValue(SoundData.BackgroundVolume);
	EffectVolumeSlider->SetValue(SoundData.EffectVolume);
	VoiceVolumeSlider->SetValue(SoundData.VoiceVolume);
}

void UGameSettings::InitializeMainUIData(FMainSetting MainData)
{
	SelectLanguageCombo->SetSelectedIndex(MainData.LanguageSelection);
}

void UGameSettings::QuickGraphicSettings(int Index)
{
	if(Index == 5)
	{
		SetAdvancedSettingEnable(true);
	}
	else
	{
		GlobalIlluminationCombo->SetSelectedIndex(Index);
		AntiAliasingCombo->SetSelectedIndex(Index);
		ShadowQualityCombo->SetSelectedIndex(Index);
		TextureQualityCombo->SetSelectedIndex(Index);
		ReflectionQualityCombo->SetSelectedIndex(Index);
		VisualEffectCombo->SetSelectedIndex(Index);
		PostProcessingCombo->SetSelectedIndex(Index);
		FoliageQualityCombo->SetSelectedIndex(Index);
		ShadingQualityCombo->SetSelectedIndex(Index);

		SetAdvancedSettingEnable(false);
	}
}

void UGameSettings::SetAdvancedSettingEnable(bool bEnable)
{
	GlobalIlluminationCombo->SetIsEnabled(bEnable);
	AntiAliasingCombo->SetIsEnabled(bEnable);
	ShadowQualityCombo->SetIsEnabled(bEnable);
	TextureQualityCombo->SetIsEnabled(bEnable);
	ReflectionQualityCombo->SetIsEnabled(bEnable);
	VisualEffectCombo->SetIsEnabled(bEnable);
	PostProcessingCombo->SetIsEnabled(bEnable);
	FoliageQualityCombo->SetIsEnabled(bEnable);
	ShadingQualityCombo->SetIsEnabled(bEnable);
}


