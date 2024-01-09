// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleSettings/Public/SettingsSaveData.h"
#include "SimpleSettings/Public/SettingsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsSaveData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSaveData();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSaveData_NoRegister();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FDisplaySetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMainSetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSetting();
	UPackage* Z_Construct_UPackage__Script_SimpleSettings();
// End Cross Module References
	void USettingsSaveData::StaticRegisterNativesUSettingsSaveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsSaveData);
	UClass* Z_Construct_UClass_USettingsSaveData_NoRegister()
	{
		return USettingsSaveData::StaticClass();
	}
	struct Z_Construct_UClass_USettingsSaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsSaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SettingsSaveData.h" },
		{ "ModuleRelativePath", "Public/SettingsSaveData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveData_Statics::NewProp_MainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SettingsSaveData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSaveData_Statics::NewProp_MainSettings = { "MainSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveData, MainSettings), Z_Construct_UScriptStruct_FMainSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_MainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_MainSettings_MetaData)) }; // 3816297453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveData_Statics::NewProp_DisplaySettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SettingsSaveData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSaveData_Statics::NewProp_DisplaySettings = { "DisplaySettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveData, DisplaySettings), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_DisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_DisplaySettings_MetaData)) }; // 2449500517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveData_Statics::NewProp_SoundSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SettingsSaveData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSaveData_Statics::NewProp_SoundSettings = { "SoundSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveData, SoundSettings), Z_Construct_UScriptStruct_FSoundSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_SoundSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveData_Statics::NewProp_SoundSettings_MetaData)) }; // 3460644097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveData_Statics::NewProp_MainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveData_Statics::NewProp_DisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveData_Statics::NewProp_SoundSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsSaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsSaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsSaveData_Statics::ClassParams = {
		&USettingsSaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USettingsSaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsSaveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsSaveData()
	{
		if (!Z_Registration_Info_UClass_USettingsSaveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsSaveData.OuterSingleton, Z_Construct_UClass_USettingsSaveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USettingsSaveData.OuterSingleton;
	}
	template<> SIMPLESETTINGS_API UClass* StaticClass<USettingsSaveData>()
	{
		return USettingsSaveData::StaticClass();
	}
	USettingsSaveData::USettingsSaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsSaveData);
	USettingsSaveData::~USettingsSaveData() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSaveData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSaveData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USettingsSaveData, USettingsSaveData::StaticClass, TEXT("USettingsSaveData"), &Z_Registration_Info_UClass_USettingsSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsSaveData), 4138616212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSaveData_h_24078669(TEXT("/Script/SimpleSettings"),
		Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSaveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSaveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
