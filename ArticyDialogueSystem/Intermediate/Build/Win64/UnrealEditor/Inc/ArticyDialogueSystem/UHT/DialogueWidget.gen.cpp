// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyDialogueSystem/Public/DialogueWidget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "ArticyFlowPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidget() {}
// Cross Module References
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UArticyDialogueSubsystem_NoRegister();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UBranchesButtonWidget_NoRegister();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueWidget();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
	ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArticyDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueWidget::execEndDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execContinueDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueDialogue();
		P_NATIVE_END;
	}
	void UDialogueWidget::StaticRegisterNativesUDialogueWidget()
	{
		UClass* Class = UDialogueWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinueDialogue", &UDialogueWidget::execContinueDialogue },
			{ "EndDialogue", &UDialogueWidget::execEndDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "ContinueDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_ContinueDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_ContinueDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "EndDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_EndDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_EndDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidget);
	UClass* Z_Construct_UClass_UDialogueWidget_NoRegister()
	{
		return UDialogueWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueContent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLineText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueLineText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapBoxBranches_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WrapBoxBranches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinue_MetaData[];
#endif
		static void NewProp_bContinue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEndDialogue_MetaData[];
#endif
		static void NewProp_bEndDialogue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBranch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBranch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchButtonWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BranchButtonWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypingText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypingText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypingIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TypingIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypingTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TypingTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArticyDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidget_ContinueDialogue, "ContinueDialogue" }, // 2596962276
		{ &Z_Construct_UFunction_UDialogueWidget_EndDialogue, "EndDialogue" }, // 101498264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueWidget.h" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueSubsystem_MetaData[] = {
		{ "Category", "SubSystem" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueSubsystem = { "DialogueSubsystem", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, DialogueSubsystem), Z_Construct_UClass_UArticyDialogueSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueContent = { "DialogueContent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, DialogueContent), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SpeakerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SpeakerNameText = { "SpeakerNameText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, SpeakerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SpeakerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SpeakerNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueLineText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueLineText = { "DialogueLineText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, DialogueLineText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueLineText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueLineText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_WrapBoxBranches_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_WrapBoxBranches = { "WrapBoxBranches", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, WrapBoxBranches), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_WrapBoxBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_WrapBoxBranches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue_SetBit(void* Obj)
	{
		((UDialogueWidget*)Obj)->bContinue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue = { "bContinue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueWidget), &Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue_SetBit(void* Obj)
	{
		((UDialogueWidget*)Obj)->bEndDialogue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue = { "bEndDialogue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueWidget), &Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentBranch_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentBranch = { "CurrentBranch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, CurrentBranch), Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentBranch_MetaData)) }; // 3148968975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CancelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CancelButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CancelButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_BranchButtonWidget_MetaData[] = {
		{ "Category", "ButtonWidget" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_BranchButtonWidget = { "BranchButtonWidget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, BranchButtonWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBranchesButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_BranchButtonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_BranchButtonWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingText = { "TypingText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, TypingText), METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingIndex_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingIndex = { "TypingIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, TypingIndex), METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingTimerHandle_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingTimerHandle = { "TypingTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, TypingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingTimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_SpeakerNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueLineText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_WrapBoxBranches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bContinue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_bEndDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CancelButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_BranchButtonWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_TypingTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidget_Statics::ClassParams = {
		&UDialogueWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton, Z_Construct_UClass_UDialogueWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton;
	}
	template<> ARTICYDIALOGUESYSTEM_API UClass* StaticClass<UDialogueWidget>()
	{
		return UDialogueWidget::StaticClass();
	}
	UDialogueWidget::UDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidget);
	UDialogueWidget::~UDialogueWidget() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_DialogueWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_DialogueWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidget, UDialogueWidget::StaticClass, TEXT("UDialogueWidget"), &Z_Registration_Info_UClass_UDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidget), 3439322535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_DialogueWidget_h_3380460885(TEXT("/Script/ArticyDialogueSystem"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_DialogueWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
