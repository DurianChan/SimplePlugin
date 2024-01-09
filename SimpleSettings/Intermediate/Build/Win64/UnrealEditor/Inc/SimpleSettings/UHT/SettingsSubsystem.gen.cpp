// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleSettings/Public/SettingsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSaveData_NoRegister();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSubsystem();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_USettingsSubsystem_NoRegister();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FDisplaySetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMainSetting();
	SIMPLESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSetting();
	UPackage* Z_Construct_UPackage__Script_SimpleSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplaySetting;
class UScriptStruct* FDisplaySetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplaySetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplaySetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplaySetting, (UObject*)Z_Construct_UPackage__Script_SimpleSettings(), TEXT("DisplaySetting"));
	}
	return Z_Registration_Info_UScriptStruct_DisplaySetting.OuterSingleton;
}
template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<FDisplaySetting>()
{
	return FDisplaySetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplaySetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionBlur_MetaData[];
#endif
		static void NewProp_bEnableMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FrameLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVSync_MetaData[];
#endif
		static void NewProp_bEnableVSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIllumination_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GlobalIllumination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ShadowQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReflectionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualEffect_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VisualEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessing_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PostProcessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ShadingQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "UsesHierarchy", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplaySetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x8a\xa8\xe6\x80\x81\xe6\xa8\xa1\xe7\xb3\x8a\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x8a\xa8\xe6\x80\x81\xe6\xa8\xa1\xe7\xb3\x8a" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur_SetBit(void* Obj)
	{
		((FDisplaySetting*)Obj)->bEnableMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur = { "bEnableMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplaySetting), &Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ResolutionRatio_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ResolutionRatio = { "ResolutionRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, ResolutionRatio), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ResolutionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ResolutionRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_WindowMode_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe7\xaa\x97\xe5\x8f\xa3\xe6\xa8\xa1\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe7\xaa\x97\xe5\x8f\xa3\xe6\xa8\xa1\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_WindowMode = { "WindowMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, WindowMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_WindowMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_WindowMode_MetaData)) }; // 2666347754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FrameLimit_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\xb8\xa7\xe6\x95\xb0\xe9\x99\x90\xe5\x88\xb6\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe6\x95\xb0\xe9\x99\x90\xe5\x88\xb6" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FrameLimit = { "FrameLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, FrameLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FrameLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FrameLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x9e\x82\xe7\x9b\xb4\xe5\x90\x8c\xe6\xad\xa5\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x9e\x82\xe7\x9b\xb4\xe5\x90\x8c\xe6\xad\xa5" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync_SetBit(void* Obj)
	{
		((FDisplaySetting*)Obj)->bEnableVSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync = { "bEnableVSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplaySetting), &Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_GlobalIllumination_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x85\xa8\xe5\xb1\x80\xe5\x85\x89\xe7\x85\xa7\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x85\xa8\xe5\xb1\x80\xe5\x85\x89\xe7\x85\xa7" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_GlobalIllumination = { "GlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, GlobalIllumination), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_GlobalIllumination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_GlobalIllumination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe6\x8a\x97\xe9\x94\xaf\xe9\xbd\xbf\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe6\x8a\x97\xe9\x94\xaf\xe9\xbd\xbf" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, AntiAliasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_AntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_AntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadowQuality_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe9\x98\xb4\xe5\xbd\xb1\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe9\x98\xb4\xe5\xbd\xb1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadowQuality = { "ShadowQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, ShadowQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_TextureQuality_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe8\xb4\xb4\xe5\x9b\xbe\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe8\xb4\xb4\xe5\x9b\xbe" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_TextureQuality = { "TextureQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, TextureQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_TextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ReflectionQuality_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x8f\x8d\xe5\xb0\x84\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ReflectionQuality = { "ReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, ReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_VisualEffect_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe8\xa7\x86\xe8\xa7\x89\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe8\xa7\x89" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_VisualEffect = { "VisualEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, VisualEffect), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_VisualEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_VisualEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_PostProcessing_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe5\x90\x8e\xe5\xa4\x84\xe7\x90\x86\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe5\x90\x8e\xe5\xa4\x84\xe7\x90\x86" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_PostProcessing = { "PostProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, PostProcessing), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_PostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_PostProcessing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FoliageQuality_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe6\xa4\x8d\xe8\xa2\xab\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe6\xa4\x8d\xe8\xa2\xab" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FoliageQuality = { "FoliageQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, FoliageQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FoliageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FoliageQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadingQuality_MetaData[] = {
		{ "Category", "DisplaySetting" },
		{ "Comment", "//\xe7\x9d\x80\xe8\x89\xb2\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe7\x9d\x80\xe8\x89\xb2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadingQuality = { "ShadingQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplaySetting, ShadingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadingQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplaySetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ResolutionRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_WindowMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FrameLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_bEnableVSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_GlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_AntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadowQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_TextureQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_VisualEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_PostProcessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_FoliageQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewProp_ShadingQuality,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplaySetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
		nullptr,
		&NewStructOps,
		"DisplaySetting",
		sizeof(FDisplaySetting),
		alignof(FDisplaySetting),
		Z_Construct_UScriptStruct_FDisplaySetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplaySetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplaySetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplaySetting()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplaySetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplaySetting.InnerSingleton, Z_Construct_UScriptStruct_FDisplaySetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplaySetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSetting;
class UScriptStruct* FSoundSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSetting, (UObject*)Z_Construct_UPackage__Script_SimpleSettings(), TEXT("SoundSetting"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSetting.OuterSingleton;
}
template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<FSoundSetting>()
{
	return FSoundSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "UsesHierarchy", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_MasterVolume_MetaData[] = {
		{ "Category", "SoundSetting" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSetting, MasterVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_MasterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_MasterVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_BackgroundVolume_MetaData[] = {
		{ "Category", "SoundSetting" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_BackgroundVolume = { "BackgroundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSetting, BackgroundVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_BackgroundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_BackgroundVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_VoiceVolume_MetaData[] = {
		{ "Category", "SoundSetting" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_VoiceVolume = { "VoiceVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSetting, VoiceVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_VoiceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_VoiceVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_EffectVolume_MetaData[] = {
		{ "Category", "SoundSetting" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_EffectVolume = { "EffectVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSetting, EffectVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_EffectVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_EffectVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_MasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_BackgroundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_VoiceVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSetting_Statics::NewProp_EffectVolume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
		nullptr,
		&NewStructOps,
		"SoundSetting",
		sizeof(FSoundSetting),
		alignof(FSoundSetting),
		Z_Construct_UScriptStruct_FSoundSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSetting.InnerSingleton, Z_Construct_UScriptStruct_FSoundSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MainSetting;
class UScriptStruct* FMainSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MainSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MainSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainSetting, (UObject*)Z_Construct_UPackage__Script_SimpleSettings(), TEXT("MainSetting"));
	}
	return Z_Registration_Info_UScriptStruct_MainSetting.OuterSingleton;
}
template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<FMainSetting>()
{
	return FMainSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMainSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageSelection_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LanguageSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "UsesHierarchy", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMainSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMainSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainSetting_Statics::NewProp_LanguageSelection_MetaData[] = {
		{ "Category", "MainSetting" },
		{ "Comment", "//\xe8\xaf\xad\xe8\xa8\x80\xe9\x80\x89\xe6\x8b\xa9\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe8\xaf\xad\xe8\xa8\x80\xe9\x80\x89\xe6\x8b\xa9" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMainSetting_Statics::NewProp_LanguageSelection = { "LanguageSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMainSetting, LanguageSelection), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainSetting_Statics::NewProp_LanguageSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainSetting_Statics::NewProp_LanguageSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMainSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainSetting_Statics::NewProp_LanguageSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMainSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
		nullptr,
		&NewStructOps,
		"MainSetting",
		sizeof(FMainSetting),
		alignof(FMainSetting),
		Z_Construct_UScriptStruct_FMainSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMainSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMainSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_MainSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MainSetting.InnerSingleton, Z_Construct_UScriptStruct_FMainSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MainSetting.InnerSingleton;
	}
	DEFINE_FUNCTION(USettingsSubsystem::execLoadSettingsData)
	{
		P_GET_STRUCT(FDisplaySetting,Z_Param_SettingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettingsData(Z_Param_SettingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSubsystem::execReadSettingsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadSettingsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSubsystem::execSaveSettingsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSettingsData();
		P_NATIVE_END;
	}
	void USettingsSubsystem::StaticRegisterNativesUSettingsSubsystem()
	{
		UClass* Class = USettingsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadSettingsData", &USettingsSubsystem::execLoadSettingsData },
			{ "ReadSettingsData", &USettingsSubsystem::execReadSettingsData },
			{ "SaveSettingsData", &USettingsSubsystem::execSaveSettingsData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics
	{
		struct SettingsSubsystem_eventLoadSettingsData_Parms
		{
			FDisplaySetting SettingData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsSubsystem_eventLoadSettingsData_Parms, SettingData), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(nullptr, 0) }; // 2449500517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::NewProp_SettingData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSubsystem, nullptr, "LoadSettingsData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::SettingsSubsystem_eventLoadSettingsData_Parms), Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSubsystem, nullptr, "ReadSettingsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSubsystem, nullptr, "SaveSettingsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsSubsystem);
	UClass* Z_Construct_UClass_USettingsSubsystem_NoRegister()
	{
		return USettingsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USettingsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplaySetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDisplaySetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSoundSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSoundSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSaveData_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsSaveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsSubsystem_LoadSettingsData, "LoadSettingsData" }, // 1569672070
		{ &Z_Construct_UFunction_USettingsSubsystem_ReadSettingsData, "ReadSettingsData" }, // 2972474476
		{ &Z_Construct_UFunction_USettingsSubsystem_SaveSettingsData, "SaveSettingsData" }, // 3410567984
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SettingsSubsystem.h" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultMainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultMainSettings = { "DefaultMainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, DefaultMainSettings), Z_Construct_UScriptStruct_FMainSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultMainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultMainSettings_MetaData)) }; // 3816297453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerMainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe7\x8e\xa9\xe5\xae\xb6\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerMainSettings = { "PlayerMainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, PlayerMainSettings), Z_Construct_UScriptStruct_FMainSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerMainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerMainSettings_MetaData)) }; // 3816297453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultDisplaySetting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultDisplaySetting = { "DefaultDisplaySetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, DefaultDisplaySetting), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultDisplaySetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultDisplaySetting_MetaData)) }; // 2449500517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerDisplaySettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe7\x8e\xa9\xe5\xae\xb6\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerDisplaySettings = { "PlayerDisplaySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, PlayerDisplaySettings), Z_Construct_UScriptStruct_FDisplaySetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerDisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerDisplaySettings_MetaData)) }; // 2449500517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultSoundSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe9\x9f\xb3\xe9\x87\x8f\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe9\x9f\xb3\xe9\x87\x8f\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultSoundSettings = { "DefaultSoundSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, DefaultSoundSettings), Z_Construct_UScriptStruct_FSoundSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultSoundSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultSoundSettings_MetaData)) }; // 3460644097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerSoundSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//\xe7\x8e\xa9\xe5\xae\xb6\xe9\x9f\xb3\xe9\x87\x8f\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe9\x9f\xb3\xe9\x87\x8f\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerSoundSettings = { "PlayerSoundSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, PlayerSoundSettings), Z_Construct_UScriptStruct_FSoundSetting, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerSoundSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerSoundSettings_MetaData)) }; // 3460644097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_SettingsSaveData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SettingsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_SettingsSaveData = { "SettingsSaveData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSubsystem, SettingsSaveData), Z_Construct_UClass_UClass, Z_Construct_UClass_USettingsSaveData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_SettingsSaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_SettingsSaveData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultMainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerMainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultDisplaySetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_DefaultSoundSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_PlayerSoundSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSubsystem_Statics::NewProp_SettingsSaveData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsSubsystem_Statics::ClassParams = {
		&USettingsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsSubsystem()
	{
		if (!Z_Registration_Info_UClass_USettingsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsSubsystem.OuterSingleton, Z_Construct_UClass_USettingsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USettingsSubsystem.OuterSingleton;
	}
	template<> SIMPLESETTINGS_API UClass* StaticClass<USettingsSubsystem>()
	{
		return USettingsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsSubsystem);
	USettingsSubsystem::~USettingsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FDisplaySetting::StaticStruct, Z_Construct_UScriptStruct_FDisplaySetting_Statics::NewStructOps, TEXT("DisplaySetting"), &Z_Registration_Info_UScriptStruct_DisplaySetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplaySetting), 2449500517U) },
		{ FSoundSetting::StaticStruct, Z_Construct_UScriptStruct_FSoundSetting_Statics::NewStructOps, TEXT("SoundSetting"), &Z_Registration_Info_UScriptStruct_SoundSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSetting), 3460644097U) },
		{ FMainSetting::StaticStruct, Z_Construct_UScriptStruct_FMainSetting_Statics::NewStructOps, TEXT("MainSetting"), &Z_Registration_Info_UScriptStruct_MainSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMainSetting), 3816297453U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USettingsSubsystem, USettingsSubsystem::StaticClass, TEXT("USettingsSubsystem"), &Z_Registration_Info_UClass_USettingsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsSubsystem), 4073084207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_679386115(TEXT("/Script/SimpleSettings"),
		Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
