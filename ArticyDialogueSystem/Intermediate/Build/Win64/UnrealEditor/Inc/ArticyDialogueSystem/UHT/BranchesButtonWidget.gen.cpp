// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyDialogueSystem/Public/BranchesButtonWidget.h"
#include "ArticyFlowPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchesButtonWidget() {}
// Cross Module References
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UBranchesButtonWidget();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UBranchesButtonWidget_NoRegister();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPlayer_NoRegister();
	ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArticyDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UBranchesButtonWidget::execOnClickBranchButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickBranchButton();
		P_NATIVE_END;
	}
	void UBranchesButtonWidget::StaticRegisterNativesUBranchesButtonWidget()
	{
		UClass* Class = UBranchesButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickBranchButton", &UBranchesButtonWidget::execOnClickBranchButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBranchesButtonWidget, nullptr, "OnClickBranchButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBranchesButtonWidget);
	UClass* Z_Construct_UClass_UBranchesButtonWidget_NoRegister()
	{
		return UBranchesButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBranchesButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BranchButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArticyBranch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArticyBranch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBranchesButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArticyDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBranchesButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBranchesButtonWidget_OnClickBranchButton, "OnClickBranchButton" }, // 2178309153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBranchesButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BranchesButtonWidget.h" },
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_BranchButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_BranchButton = { "BranchButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBranchesButtonWidget, BranchButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_BranchButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_BranchButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBranchesButtonWidget, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_FlowPlayer_MetaData[] = {
		{ "Category", "Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_FlowPlayer = { "FlowPlayer", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBranchesButtonWidget, FlowPlayer), Z_Construct_UClass_UArticyFlowPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_FlowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_FlowPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ArticyBranch_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/BranchesButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ArticyBranch = { "ArticyBranch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBranchesButtonWidget, ArticyBranch), Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ArticyBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ArticyBranch_MetaData)) }; // 3148968975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBranchesButtonWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_BranchButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_FlowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBranchesButtonWidget_Statics::NewProp_ArticyBranch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBranchesButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBranchesButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBranchesButtonWidget_Statics::ClassParams = {
		&UBranchesButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBranchesButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBranchesButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBranchesButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBranchesButtonWidget()
	{
		if (!Z_Registration_Info_UClass_UBranchesButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBranchesButtonWidget.OuterSingleton, Z_Construct_UClass_UBranchesButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBranchesButtonWidget.OuterSingleton;
	}
	template<> ARTICYDIALOGUESYSTEM_API UClass* StaticClass<UBranchesButtonWidget>()
	{
		return UBranchesButtonWidget::StaticClass();
	}
	UBranchesButtonWidget::UBranchesButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBranchesButtonWidget);
	UBranchesButtonWidget::~UBranchesButtonWidget() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_BranchesButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_BranchesButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBranchesButtonWidget, UBranchesButtonWidget::StaticClass, TEXT("UBranchesButtonWidget"), &Z_Registration_Info_UClass_UBranchesButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBranchesButtonWidget), 3875233573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_BranchesButtonWidget_h_577274131(TEXT("/Script/ArticyDialogueSystem"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_BranchesButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_BranchesButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
