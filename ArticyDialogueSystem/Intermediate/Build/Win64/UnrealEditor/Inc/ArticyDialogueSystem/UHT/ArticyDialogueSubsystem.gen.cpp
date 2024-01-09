// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArticyDialogueSystem/Public/ArticyDialogueSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "ArticyFlowPlayer.h"
#include "ArticyRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArticyDialogueSubsystem() {}
// Cross Module References
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UArticyDialogueSubsystem();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UArticyDialogueSubsystem_NoRegister();
	ARTICYDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowObject_NoRegister();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyFlowPlayer_NoRegister();
	ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyBranch();
	ARTICYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArticyRef();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ArticyDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execSetDialogueDisplayMode)
	{
		P_GET_UBOOL(Z_Param_UseTyping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TypingTextSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueDisplayMode(Z_Param_UseTyping,Z_Param_TypingTextSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execEndArticyDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndArticyDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execStartArticyDialogue)
	{
		P_GET_STRUCT(FArticyRef,Z_Param_DialogueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartArticyDialogue(Z_Param_DialogueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execOnBranchesUpdated)
	{
		P_GET_TARRAY_REF(FArticyBranch,Z_Param_Out_AvailableBranches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBranchesUpdated(Z_Param_Out_AvailableBranches);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execOnPlayerPause)
	{
		P_GET_TINTERFACE(IArticyFlowObject,Z_Param_PausedOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerPause(Z_Param_PausedOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArticyDialogueSubsystem::execInitializeArticyDialogueSystem)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UArticyFlowPlayer,Z_Param_ArticyFlowPlayer);
		P_GET_OBJECT(UDialogueWidget,Z_Param_DialogueWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeArticyDialogueSystem(Z_Param_PlayerController,Z_Param_ArticyFlowPlayer,Z_Param_DialogueWidget);
		P_NATIVE_END;
	}
	void UArticyDialogueSubsystem::StaticRegisterNativesUArticyDialogueSubsystem()
	{
		UClass* Class = UArticyDialogueSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndArticyDialogue", &UArticyDialogueSubsystem::execEndArticyDialogue },
			{ "InitializeArticyDialogueSystem", &UArticyDialogueSubsystem::execInitializeArticyDialogueSystem },
			{ "OnBranchesUpdated", &UArticyDialogueSubsystem::execOnBranchesUpdated },
			{ "OnPlayerPause", &UArticyDialogueSubsystem::execOnPlayerPause },
			{ "SetDialogueDisplayMode", &UArticyDialogueSubsystem::execSetDialogueDisplayMode },
			{ "StartArticyDialogue", &UArticyDialogueSubsystem::execStartArticyDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "EndArticyDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics
	{
		struct ArticyDialogueSubsystem_eventInitializeArticyDialogueSystem_Parms
		{
			APlayerController* PlayerController;
			UArticyFlowPlayer* ArticyFlowPlayer;
			UDialogueWidget* DialogueWidget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArticyFlowPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArticyFlowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventInitializeArticyDialogueSystem_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_ArticyFlowPlayer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_ArticyFlowPlayer = { "ArticyFlowPlayer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventInitializeArticyDialogueSystem_Parms, ArticyFlowPlayer), Z_Construct_UClass_UArticyFlowPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_ArticyFlowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_ArticyFlowPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_DialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventInitializeArticyDialogueSystem_Parms, DialogueWidget), Z_Construct_UClass_UDialogueWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_DialogueWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_DialogueWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_ArticyFlowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::NewProp_DialogueWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "InitializeArticyDialogueSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::ArticyDialogueSubsystem_eventInitializeArticyDialogueSystem_Parms), Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics
	{
		struct ArticyDialogueSubsystem_eventOnBranchesUpdated_Parms
		{
			TArray<FArticyBranch> AvailableBranches;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableBranches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableBranches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableBranches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches_Inner = { "AvailableBranches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FArticyBranch, METADATA_PARAMS(nullptr, 0) }; // 3148968975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches = { "AvailableBranches", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventOnBranchesUpdated_Parms, AvailableBranches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches_MetaData)) }; // 3148968975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::NewProp_AvailableBranches,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "OnBranchesUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::ArticyDialogueSubsystem_eventOnBranchesUpdated_Parms), Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics
	{
		struct ArticyDialogueSubsystem_eventOnPlayerPause_Parms
		{
			TScriptInterface<IArticyFlowObject> PausedOn;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_PausedOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::NewProp_PausedOn = { "PausedOn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventOnPlayerPause_Parms, PausedOn), Z_Construct_UClass_UArticyFlowObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::NewProp_PausedOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "OnPlayerPause", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::ArticyDialogueSubsystem_eventOnPlayerPause_Parms), Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics
	{
		struct ArticyDialogueSubsystem_eventSetDialogueDisplayMode_Parms
		{
			bool UseTyping;
			float TypingTextSpeed;
		};
		static void NewProp_UseTyping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTyping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TypingTextSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_UseTyping_SetBit(void* Obj)
	{
		((ArticyDialogueSubsystem_eventSetDialogueDisplayMode_Parms*)Obj)->UseTyping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_UseTyping = { "UseTyping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArticyDialogueSubsystem_eventSetDialogueDisplayMode_Parms), &Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_UseTyping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_TypingTextSpeed = { "TypingTextSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventSetDialogueDisplayMode_Parms, TypingTextSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_UseTyping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::NewProp_TypingTextSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "SetDialogueDisplayMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::ArticyDialogueSubsystem_eventSetDialogueDisplayMode_Parms), Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics
	{
		struct ArticyDialogueSubsystem_eventStartArticyDialogue_Parms
		{
			FArticyRef DialogueData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::NewProp_DialogueData = { "DialogueData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArticyDialogueSubsystem_eventStartArticyDialogue_Parms, DialogueData), Z_Construct_UScriptStruct_FArticyRef, METADATA_PARAMS(nullptr, 0) }; // 1964957352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::NewProp_DialogueData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArticyDialogueSubsystem, nullptr, "StartArticyDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::ArticyDialogueSubsystem_eventStartArticyDialogue_Parms), Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArticyDialogueSubsystem);
	UClass* Z_Construct_UClass_UArticyDialogueSubsystem_NoRegister()
	{
		return UArticyDialogueSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UArticyDialogueSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayingDialogue_MetaData[];
#endif
		static void NewProp_bPlayingDialogue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayingDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerArticyFlowPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerArticyFlowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerDialogueWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerDialogueWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTyping_MetaData[];
#endif
		static void NewProp_bUseTyping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTyping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TypingSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArticyDialogueSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ArticyDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArticyDialogueSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_EndArticyDialogue, "EndArticyDialogue" }, // 3237829230
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_InitializeArticyDialogueSystem, "InitializeArticyDialogueSystem" }, // 2022863942
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_OnBranchesUpdated, "OnBranchesUpdated" }, // 3595092146
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_OnPlayerPause, "OnPlayerPause" }, // 1250086191
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_SetDialogueDisplayMode, "SetDialogueDisplayMode" }, // 556992184
		{ &Z_Construct_UFunction_UArticyDialogueSubsystem_StartArticyDialogue, "StartArticyDialogue" }, // 1715794863
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArticyDialogueSubsystem.h" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue_SetBit(void* Obj)
	{
		((UArticyDialogueSubsystem*)Obj)->bPlayingDialogue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue = { "bPlayingDialogue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArticyDialogueSubsystem), &Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerPlayerController_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerPlayerController = { "OwnerPlayerController", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArticyDialogueSubsystem, OwnerPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerArticyFlowPlayer_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerArticyFlowPlayer = { "OwnerArticyFlowPlayer", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArticyDialogueSubsystem, OwnerArticyFlowPlayer), Z_Construct_UClass_UArticyFlowPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerArticyFlowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerArticyFlowPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerDialogueWidget_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerDialogueWidget = { "OwnerDialogueWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArticyDialogueSubsystem, OwnerDialogueWidget), Z_Construct_UClass_UDialogueWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerDialogueWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerDialogueWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping_SetBit(void* Obj)
	{
		((UArticyDialogueSubsystem*)Obj)->bUseTyping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping = { "bUseTyping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArticyDialogueSubsystem), &Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_TypingSpeed_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/ArticyDialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_TypingSpeed = { "TypingSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArticyDialogueSubsystem, TypingSpeed), METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_TypingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_TypingSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArticyDialogueSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bPlayingDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerArticyFlowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_OwnerDialogueWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_bUseTyping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArticyDialogueSubsystem_Statics::NewProp_TypingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArticyDialogueSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArticyDialogueSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArticyDialogueSubsystem_Statics::ClassParams = {
		&UArticyDialogueSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArticyDialogueSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArticyDialogueSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArticyDialogueSubsystem()
	{
		if (!Z_Registration_Info_UClass_UArticyDialogueSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArticyDialogueSubsystem.OuterSingleton, Z_Construct_UClass_UArticyDialogueSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArticyDialogueSubsystem.OuterSingleton;
	}
	template<> ARTICYDIALOGUESYSTEM_API UClass* StaticClass<UArticyDialogueSubsystem>()
	{
		return UArticyDialogueSubsystem::StaticClass();
	}
	UArticyDialogueSubsystem::UArticyDialogueSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArticyDialogueSubsystem);
	UArticyDialogueSubsystem::~UArticyDialogueSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArticyDialogueSubsystem, UArticyDialogueSubsystem::StaticClass, TEXT("UArticyDialogueSubsystem"), &Z_Registration_Info_UClass_UArticyDialogueSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArticyDialogueSubsystem), 230031365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_404624386(TEXT("/Script/ArticyDialogueSystem"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
