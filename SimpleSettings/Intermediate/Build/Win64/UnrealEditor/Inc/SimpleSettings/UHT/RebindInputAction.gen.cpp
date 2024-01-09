// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleSettings/Public/RebindInputAction.h"
#include "EnhancedActionKeyMapping.h"
#include "Framework/Commands/InputChord.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRebindInputAction() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_URebindInputAction();
	SIMPLESETTINGS_API UClass* Z_Construct_UClass_URebindInputAction_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimpleSettings();
// End Cross Module References
	DEFINE_FUNCTION(URebindInputAction::execOnIsSelectingKeyChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsSelectingKeyChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URebindInputAction::execOnKeySelected)
	{
		P_GET_STRUCT(FInputChord,Z_Param_SelectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeySelected(Z_Param_SelectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URebindInputAction::execInputMappingRefresh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputMappingRefresh();
		P_NATIVE_END;
	}
	void URebindInputAction::StaticRegisterNativesURebindInputAction()
	{
		UClass* Class = URebindInputAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputMappingRefresh", &URebindInputAction::execInputMappingRefresh },
			{ "OnIsSelectingKeyChanged", &URebindInputAction::execOnIsSelectingKeyChanged },
			{ "OnKeySelected", &URebindInputAction::execOnKeySelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ReBind" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URebindInputAction, nullptr, "InputMappingRefresh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URebindInputAction_InputMappingRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URebindInputAction_InputMappingRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URebindInputAction, nullptr, "OnIsSelectingKeyChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics
	{
		struct RebindInputAction_eventOnKeySelected_Parms
		{
			FInputChord SelectedKey;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RebindInputAction_eventOnKeySelected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::NewProp_SelectedKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URebindInputAction, nullptr, "OnKeySelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::RebindInputAction_eventOnKeySelected_Parms), Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URebindInputAction_OnKeySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URebindInputAction_OnKeySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URebindInputAction);
	UClass* Z_Construct_UClass_URebindInputAction_NoRegister()
	{
		return URebindInputAction::StaticClass();
	}
	struct Z_Construct_UClass_URebindInputAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModifying_MetaData[];
#endif
		static void NewProp_bModifying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifying;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedActionKeyArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedActionKeyArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedActionKeyArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OrderIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OrderNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URebindInputAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URebindInputAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URebindInputAction_InputMappingRefresh, "InputMappingRefresh" }, // 1050186413
		{ &Z_Construct_UFunction_URebindInputAction_OnIsSelectingKeyChanged, "OnIsSelectingKeyChanged" }, // 2308149992
		{ &Z_Construct_UFunction_URebindInputAction_OnKeySelected, "OnKeySelected" }, // 1527866385
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RebindInputAction.h" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputKey_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, InputKey), Z_Construct_UClass_UInputKeySelector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_CurrentKey_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_CurrentKey = { "CurrentKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, CurrentKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_CurrentKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_CurrentKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	void Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying_SetBit(void* Obj)
	{
		((URebindInputAction*)Obj)->bModifying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying = { "bModifying", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URebindInputAction), &Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying_SetBit, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray_Inner = { "EnhancedActionKeyArray", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray = { "EnhancedActionKeyArray", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, EnhancedActionKeyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray_MetaData)) }; // 2762654059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderIndex_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8dInputAction\xe5\x9c\xa8Mapping\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8dInputAction\xe5\x9c\xa8Mapping\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderIndex = { "OrderIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, OrderIndex), METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderNumber_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8dKey\xe5\x9c\xa8InputAction\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/RebindInputAction.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8dKey\xe5\x9c\xa8InputAction\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderNumber = { "OrderNumber", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URebindInputAction, OrderNumber), METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URebindInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_CurrentKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_bModifying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_EnhancedActionKeyArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URebindInputAction_Statics::NewProp_OrderNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URebindInputAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebindInputAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URebindInputAction_Statics::ClassParams = {
		&URebindInputAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URebindInputAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URebindInputAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URebindInputAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URebindInputAction()
	{
		if (!Z_Registration_Info_UClass_URebindInputAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebindInputAction.OuterSingleton, Z_Construct_UClass_URebindInputAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URebindInputAction.OuterSingleton;
	}
	template<> SIMPLESETTINGS_API UClass* StaticClass<URebindInputAction>()
	{
		return URebindInputAction::StaticClass();
	}
	URebindInputAction::URebindInputAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URebindInputAction);
	URebindInputAction::~URebindInputAction() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_RebindInputAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_RebindInputAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URebindInputAction, URebindInputAction::StaticClass, TEXT("URebindInputAction"), &Z_Registration_Info_UClass_URebindInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebindInputAction), 2112083904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_RebindInputAction_h_2717021435(TEXT("/Script/SimpleSettings"),
		Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_RebindInputAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_RebindInputAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
