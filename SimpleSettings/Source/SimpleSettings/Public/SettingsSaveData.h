// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SettingsSubsystem.h"
#include "SettingsSaveData.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESETTINGS_API USettingsSaveData : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category="Settings")
	FMainSetting MainSettings;
	
	UPROPERTY(VisibleAnywhere, Category="Settings")
	FDisplaySetting DisplaySettings;

	UPROPERTY(VisibleAnywhere, Category="Settings")
	FSoundSetting SoundSettings;
};
