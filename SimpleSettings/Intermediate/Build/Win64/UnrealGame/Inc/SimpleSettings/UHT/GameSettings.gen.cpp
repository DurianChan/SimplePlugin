// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleSettings/Public/GameSettings.h"
#include "SimpleSettings/Public/SettingsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettings() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_UGameSettings();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_UGameSettings_NoRegister();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSubsystem_NoRegister();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FDisplaySetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMainSetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSetting();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleSettings();
// End Cross Module References
	DEFINE_FUNCTION(UGameSettings::execQuickGraphicSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickGraphicSettings(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execInitializeMainUIData)
	{
		P_GET_STRUCT(FMainSetting,Z_Param_MainData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMainUIData(Z_Param_MainData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execInitializeSoundUIData)
	{
		P_GET_STRUCT(FSoundSetting,Z_Param_SoundData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSoundUIData(Z_Param_SoundData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execInitializeDisplayUIData)
	{
		P_GET_STRUCT(FDisplaySetting,Z_Param_DisplayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDisplayUIData(Z_Param_DisplayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execLoadUIDefaultData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadUIDefaultData();
		P_NATIVE_END;
	}
	struct GameSettings_eventGetFramesLimitTextArray_Parms
	{
		TArray<FString> ReturnValue;
	};
	struct GameSettings_eventGetQualityTextArray_Parms
	{
		TArray<FString> ReturnValue;
	};
	static FName NAME_UGameSettings_GetFramesLimitTextArray = FName(TEXT("GetFramesLimitTextArray"));
	TArray<FString> UGameSettings::GetFramesLimitTextArray()
	{
		GameSettings_eventGetFramesLimitTextArray_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettings_GetFramesLimitTextArray),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameSettings_GetQualityTextArray = FName(TEXT("GetQualityTextArray"));
	TArray<FString> UGameSettings::GetQualityTextArray()
	{
		GameSettings_eventGetQualityTextArray_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettings_GetQualityTextArray),&Parms);
		return Parms.ReturnValue;
	}
	void UGameSettings::StaticRegisterNativesUGameSettings()
	{
		UClass* Class = UGameSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeDisplayUIData", &UGameSettings::execInitializeDisplayUIData },
			{ "InitializeMainUIData", &UGameSettings::execInitializeMainUIData },
			{ "InitializeSoundUIData", &UGameSettings::execInitializeSoundUIData },
			{ "LoadUIDefaultData", &UGameSettings::execLoadUIDefaultData },
			{ "QuickGraphicSettings", &UGameSettings::execQuickGraphicSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventGetFramesLimitTextArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "GetFramesLimitTextArray", nullptr, nullptr, sizeof(GameSettings_eventGetFramesLimitTextArray_Parms), Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventGetQualityTextArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "GetQualityTextArray", nullptr, nullptr, sizeof(GameSettings_eventGetQualityTextArray_Parms), Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_GetQualityTextArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_GetQualityTextArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics
	{
		struct GameSettings_eventInitializeDisplayUIData_Parms
		{
			FDisplaySetting DisplayData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::NewProp_DisplayData = { "DisplayData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventInitializeDisplayUIData_Parms, DisplayData), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(nullptr, 0) }; // 2449500517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::NewProp_DisplayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "InitializeDisplayUIData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::GameSettings_eventInitializeDisplayUIData_Parms), Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics
	{
		struct GameSettings_eventInitializeMainUIData_Parms
		{
			FMainSetting MainData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::NewProp_MainData = { "MainData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventInitializeMainUIData_Parms, MainData), Z_Construct_UScriptStruct_FMainSetting, METADATA_PARAMS(nullptr, 0) }; // 3816297453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::NewProp_MainData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "InitializeMainUIData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::GameSettings_eventInitializeMainUIData_Parms), Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_InitializeMainUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_InitializeMainUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics
	{
		struct GameSettings_eventInitializeSoundUIData_Parms
		{
			FSoundSetting SoundData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::NewProp_SoundData = { "SoundData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventInitializeSoundUIData_Parms, SoundData), Z_Construct_UScriptStruct_FSoundSetting, METADATA_PARAMS(nullptr, 0) }; // 3460644097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::NewProp_SoundData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "InitializeSoundUIData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::GameSettings_eventInitializeSoundUIData_Parms), Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_InitializeSoundUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_InitializeSoundUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "LoadUIDefaultData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_LoadUIDefaultData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_LoadUIDefaultData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics
	{
		struct GameSettings_eventQuickGraphicSettings_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSettings_eventQuickGraphicSettings_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "QuickGraphicSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::GameSettings_eventQuickGraphicSettings_Parms), Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_QuickGraphicSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettings_QuickGraphicSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettings);
	UClass* Z_Construct_UClass_UGameSettings_NoRegister()
	{
		return UGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMainSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedResolutionsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedResolutionsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedResolutionsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurCheckBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionBlurCheckBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VSyncCheckBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VSyncCheckBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionRatioCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionRatioCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowModeCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowModeCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameLimitCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameLimitCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalIlluminationCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AntiAliasingCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowQualityCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowQualityCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureQualityCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureQualityCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionQualityCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReflectionQualityCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualEffectCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualEffectCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessingCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageQualityCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageQualityCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingQualityCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadingQualityCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettingCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalSettingCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectLanguageCombo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectLanguageCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolumeSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterVolumeSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicVolumeSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectVolumeSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectVolumeSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolumeSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceVolumeSlider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettings_GetFramesLimitTextArray, "GetFramesLimitTextArray" }, // 105225674
		{ &Z_Construct_UFunction_UGameSettings_GetQualityTextArray, "GetQualityTextArray" }, // 3439404715
		{ &Z_Construct_UFunction_UGameSettings_InitializeDisplayUIData, "InitializeDisplayUIData" }, // 2435799134
		{ &Z_Construct_UFunction_UGameSettings_InitializeMainUIData, "InitializeMainUIData" }, // 2814850491
		{ &Z_Construct_UFunction_UGameSettings_InitializeSoundUIData, "InitializeSoundUIData" }, // 3698632854
		{ &Z_Construct_UFunction_UGameSettings_LoadUIDefaultData, "LoadUIDefaultData" }, // 501443275
		{ &Z_Construct_UFunction_UGameSettings_QuickGraphicSettings, "QuickGraphicSettings" }, // 3726479243
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSettings.h" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_SettingsSubsystem_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SettingsSubsystem = { "SettingsSubsystem", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, SettingsSubsystem), Z_Construct_UClass_USettingsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_SettingsSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_SettingsSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerDisplaySettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerDisplaySettings = { "PlayerDisplaySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, PlayerDisplaySettings), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerDisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerDisplaySettings_MetaData)) }; // 2449500517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerMainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerMainSettings = { "PlayerMainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, PlayerMainSettings), Z_Construct_UScriptStruct_FMainSetting, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerMainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerMainSettings_MetaData)) }; // 3816297453
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray_Inner = { "SupportedResolutionsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray_MetaData[] = {
		{ "Category", "Settings Data" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray = { "SupportedResolutionsArray", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, SupportedResolutionsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_MotionBlurCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Check" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_MotionBlurCheckBox = { "MotionBlurCheckBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, MotionBlurCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_MotionBlurCheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_MotionBlurCheckBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_VSyncCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Check" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_VSyncCheckBox = { "VSyncCheckBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, VSyncCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_VSyncCheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_VSyncCheckBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_ResolutionRatioCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_ResolutionRatioCombo = { "ResolutionRatioCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, ResolutionRatioCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_ResolutionRatioCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_ResolutionRatioCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_WindowModeCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_WindowModeCombo = { "WindowModeCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, WindowModeCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_WindowModeCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_WindowModeCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_FrameLimitCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_FrameLimitCombo = { "FrameLimitCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, FrameLimitCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_FrameLimitCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_FrameLimitCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalIlluminationCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalIlluminationCombo = { "GlobalIlluminationCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, GlobalIlluminationCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalIlluminationCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalIlluminationCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_AntiAliasingCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_AntiAliasingCombo = { "AntiAliasingCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, AntiAliasingCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_AntiAliasingCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_AntiAliasingCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadowQualityCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadowQualityCombo = { "ShadowQualityCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, ShadowQualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadowQualityCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadowQualityCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_TextureQualityCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_TextureQualityCombo = { "TextureQualityCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, TextureQualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_TextureQualityCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_TextureQualityCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_ReflectionQualityCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_ReflectionQualityCombo = { "ReflectionQualityCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, ReflectionQualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_ReflectionQualityCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_ReflectionQualityCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_VisualEffectCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_VisualEffectCombo = { "VisualEffectCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, VisualEffectCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_VisualEffectCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_VisualEffectCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_PostProcessingCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_PostProcessingCombo = { "PostProcessingCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, PostProcessingCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_PostProcessingCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_PostProcessingCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_FoliageQualityCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_FoliageQualityCombo = { "FoliageQualityCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, FoliageQualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_FoliageQualityCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_FoliageQualityCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadingQualityCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadingQualityCombo = { "ShadingQualityCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, ShadingQualityCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadingQualityCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadingQualityCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalSettingCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalSettingCombo = { "GlobalSettingCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, GlobalSettingCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalSettingCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalSettingCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_SelectLanguageCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "List" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SelectLanguageCombo = { "SelectLanguageCombo", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, SelectLanguageCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_SelectLanguageCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_SelectLanguageCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_MasterVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_MasterVolumeSlider = { "MasterVolumeSlider", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, MasterVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_MasterVolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_MasterVolumeSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_MusicVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_MusicVolumeSlider = { "MusicVolumeSlider", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, MusicVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_MusicVolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_MusicVolumeSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_EffectVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_EffectVolumeSlider = { "EffectVolumeSlider", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, EffectVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_EffectVolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_EffectVolumeSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_VoiceVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_VoiceVolumeSlider = { "VoiceVolumeSlider", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSettings, VoiceVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_VoiceVolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_VoiceVolumeSlider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SettingsSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_PlayerMainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SupportedResolutionsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_MotionBlurCheckBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_VSyncCheckBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_ResolutionRatioCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_WindowModeCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_FrameLimitCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalIlluminationCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_AntiAliasingCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadowQualityCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_TextureQualityCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_ReflectionQualityCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_VisualEffectCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_PostProcessingCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_FoliageQualityCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_ShadingQualityCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_GlobalSettingCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SelectLanguageCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_MasterVolumeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_MusicVolumeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_EffectVolumeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_VoiceVolumeSlider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettings_Statics::ClassParams = {
		&UGameSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettings()
	{
		if (!Z_Registration_Info_UClass_UGameSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettings.OuterSingleton, Z_Construct_UClass_UGameSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettings.OuterSingleton;
	}
	template<> SIMPLESETTINGS_API UClass* StaticClass<UGameSettings>()
	{
		return UGameSettings::StaticClass();
	}
	UGameSettings::UGameSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettings);
	UGameSettings::~UGameSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_GameSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_GameSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettings, UGameSettings::StaticClass, TEXT("UGameSettings"), &Z_Registration_Info_UClass_UGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettings), 3771758993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_GameSettings_h_2822551991(TEXT("/Script/SimpleSettings"),
		Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_GameSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_GameSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
