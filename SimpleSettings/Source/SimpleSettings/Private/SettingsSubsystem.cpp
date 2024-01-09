#include "SettingsSubsystem.h"
#include "SettingsSaveData.h"
#include "Engine/PostProcessVolume.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/GameplayStatics.h"

USettingsSubsystem::USettingsSubsystem() : PlayerMainSettings(),PlayerDisplaySettings(),PlayerSoundSettings()
{
	//默认主设置
	DefaultMainSettings.LanguageSelection = 0;

	//默认声音设置
	DefaultSoundSettings.MasterVolume = 1;
	DefaultSoundSettings.BackgroundVolume = 1;
	DefaultSoundSettings.EffectVolume = 1;
	DefaultSoundSettings.VoiceVolume = 1;

	//默认画面设置
	DefaultDisplaySetting.ResolutionRatio.X = 1920;
	DefaultDisplaySetting.ResolutionRatio.Y = 1080;
	DefaultDisplaySetting.WindowMode = EWindowMode::WindowedFullscreen;
	DefaultDisplaySetting.FrameLimit = TEXT("60");
	DefaultDisplaySetting.GlobalIllumination = 2;
	DefaultDisplaySetting.AntiAliasing = 2;
	DefaultDisplaySetting.ShadowQuality = 2;
	DefaultDisplaySetting.TextureQuality = 2;
	DefaultDisplaySetting.ReflectionQuality = 2;
	DefaultDisplaySetting.VisualEffect = 2;
	DefaultDisplaySetting.PostProcessing = 2;
	DefaultDisplaySetting.FoliageQuality = 2;
	DefaultDisplaySetting.ShadingQuality = 2;
}

void USettingsSubsystem::SaveSettingsData()
{
	const bool bSaveGameExists = UGameplayStatics::DoesSaveGameExist(SaveGameFileName, 0);
	if(bSaveGameExists)
	{
		USettingsSaveData* SaveData = Cast<USettingsSaveData>(UGameplayStatics::LoadGameFromSlot(SaveGameFileName, 0));
		SaveData->DisplaySettings = PlayerDisplaySettings;
		SaveData->MainSettings = PlayerMainSettings;
		SaveData->SoundSettings = PlayerSoundSettings;
		UGameplayStatics::SaveGameToSlot(SaveData, SaveGameFileName, 0);
	}
}

void USettingsSubsystem::ReadSettingsData()
{
	const bool bSaveGameExists = UGameplayStatics::DoesSaveGameExist(SaveGameFileName, 0);
	if(bSaveGameExists)
	{
		USettingsSaveData* SaveData = Cast<USettingsSaveData>(UGameplayStatics::LoadGameFromSlot(SaveGameFileName, 0));
		PlayerDisplaySettings = SaveData->DisplaySettings;
		PlayerMainSettings = SaveData->MainSettings;
		PlayerSoundSettings = SaveData->SoundSettings;
	}
	else
	{
		USettingsSaveData* SaveData = Cast<USettingsSaveData>(UGameplayStatics::CreateSaveGameObject(SettingsSaveData));
		SaveData->DisplaySettings = DefaultDisplaySetting;
		SaveData->MainSettings = DefaultMainSettings;
		SaveData->SoundSettings = DefaultSoundSettings;
		PlayerDisplaySettings = DefaultDisplaySetting;
		PlayerMainSettings = DefaultMainSettings;
		PlayerSoundSettings = DefaultSoundSettings;
		UGameplayStatics::SaveGameToSlot(SaveData, SaveGameFileName, 0);
	}
}

void USettingsSubsystem::LoadSettingsData(FDisplaySetting SettingData)
{
	UGameUserSettings* GameUserSettings = UGameUserSettings::GetGameUserSettings();

	//动态模糊
	SetMotionBlurEnable(SettingData.bEnableMotionBlur);
	//垂直同步
	GameUserSettings->SetVSyncEnabled(SettingData.bEnableVSync);
	//分辨率
	GameUserSettings->SetScreenResolution(SettingData.ResolutionRatio);
	//窗口模式
	GameUserSettings->SetFullscreenMode(SettingData.WindowMode);
	
	//帧数限制
	if(SettingData.FrameLimit == TEXT("无限制"))
		GameUserSettings->SetFrameRateLimit(0);
	else
		GameUserSettings->SetFrameRateLimit(FCString::Atof(*SettingData.FrameLimit));
	
	//常规设置
	GameUserSettings->SetGlobalIlluminationQuality(SettingData.GlobalIllumination);
	GameUserSettings->SetAntiAliasingQuality(SettingData.AntiAliasing);
	GameUserSettings->SetShadowQuality(SettingData.ShadowQuality);
	GameUserSettings->SetTextureQuality(SettingData.TextureQuality);
	GameUserSettings->SetReflectionQuality(SettingData.ReflectionQuality);
	GameUserSettings->SetVisualEffectQuality(SettingData.VisualEffect);
	GameUserSettings->SetPostProcessingQuality(SettingData.PostProcessing);
	GameUserSettings->SetFoliageQuality(SettingData.FoliageQuality);
	GameUserSettings->SetShadingQuality(SettingData.ShadingQuality);
	
	//应用设置
	GameUserSettings->ApplyResolutionSettings(true);
	GameUserSettings->ApplySettings(true);
}

//查找当前场景的后处理体积，并开启或关闭MotionBlur，缺点就是每个场景都要执行一次
void USettingsSubsystem::SetMotionBlurEnable(bool bEnable)
{
	UWorld* World = GetWorld();
	if (World)
	{
		// 获取PlayerController所在的Post Process Volume
		APostProcessVolume* PostProcessVolume = nullptr;
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(World, APostProcessVolume::StaticClass(), FoundActors);

		for (AActor* Actor : FoundActors)
		{
			APostProcessVolume* Volume = Cast<APostProcessVolume>(Actor);
			if (Volume && Volume->bEnabled)
			{
				PostProcessVolume = Volume;
				break;
			}
		}

		if(PostProcessVolume)
		{
			// 启用Motion Blur
			if (bEnable)
			{
				PostProcessVolume->Settings.bOverride_MotionBlurAmount = true;
				PostProcessVolume->Settings.MotionBlurAmount = 1.0f; // 设置Motion Blur强度
			}
			// 关闭Motion Blur
			else
			{
				PostProcessVolume->Settings.bOverride_MotionBlurAmount = false;
			}
		}
	}
}

//在GameInstance中使用初始化替代也许只执行一次，在所有关卡中生效
/*void UYourGameInstance::Init()
{
	Super::Init();

	// 获取所有Post Process Volume
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APostProcessVolume::StaticClass(), FoundActors);

	// 设置Motion Blur
	for (AActor* Actor : FoundActors)
	{
		APostProcessVolume* Volume = Cast<APostProcessVolume>(Actor);
		if (Volume && Volume->bEnabled)
		{
			Volume->Settings.bOverride_MotionBlurAmount = true;
			Volume->Settings.MotionBlurAmount = 1.0f; // 设置Motion Blur强度
		}
	}
}*/
