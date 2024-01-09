// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArticyDialogueSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class IArticyFlowObject;
class UArticyFlowPlayer;
class UDialogueWidget;
struct FArticyBranch;
struct FArticyRef;
#ifdef ARTICYDIALOGUESYSTEM_ArticyDialogueSubsystem_generated_h
#error "ArticyDialogueSubsystem.generated.h already included, missing '#pragma once' in ArticyDialogueSubsystem.h"
#endif
#define ARTICYDIALOGUESYSTEM_ArticyDialogueSubsystem_generated_h

#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_SPARSE_DATA
#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDialogueDisplayMode); \
	DECLARE_FUNCTION(execEndArticyDialogue); \
	DECLARE_FUNCTION(execStartArticyDialogue); \
	DECLARE_FUNCTION(execOnBranchesUpdated); \
	DECLARE_FUNCTION(execOnPlayerPause); \
	DECLARE_FUNCTION(execInitializeArticyDialogueSystem);


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDialogueDisplayMode); \
	DECLARE_FUNCTION(execEndArticyDialogue); \
	DECLARE_FUNCTION(execStartArticyDialogue); \
	DECLARE_FUNCTION(execOnBranchesUpdated); \
	DECLARE_FUNCTION(execOnPlayerPause); \
	DECLARE_FUNCTION(execInitializeArticyDialogueSystem);


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_ACCESSORS
#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArticyDialogueSubsystem(); \
	friend struct Z_Construct_UClass_UArticyDialogueSubsystem_Statics; \
public: \
	DECLARE_CLASS(UArticyDialogueSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UArticyDialogueSubsystem)


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUArticyDialogueSubsystem(); \
	friend struct Z_Construct_UClass_UArticyDialogueSubsystem_Statics; \
public: \
	DECLARE_CLASS(UArticyDialogueSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArticyDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UArticyDialogueSubsystem)


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyDialogueSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArticyDialogueSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyDialogueSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyDialogueSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArticyDialogueSubsystem(UArticyDialogueSubsystem&&); \
	NO_API UArticyDialogueSubsystem(const UArticyDialogueSubsystem&); \
public: \
	NO_API virtual ~UArticyDialogueSubsystem();


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArticyDialogueSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArticyDialogueSubsystem(UArticyDialogueSubsystem&&); \
	NO_API UArticyDialogueSubsystem(const UArticyDialogueSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArticyDialogueSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArticyDialogueSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArticyDialogueSubsystem) \
	NO_API virtual ~UArticyDialogueSubsystem();


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_15_PROLOG
#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_SPARSE_DATA \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_RPC_WRAPPERS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_ACCESSORS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_INCLASS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_SPARSE_DATA \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_ACCESSORS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTICYDIALOGUESYSTEM_API UClass* StaticClass<class UArticyDialogueSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_UnrealSampleProject_ArticyDialogueSystem_ArticyDialogueSystem_HostProject_Plugins_ArticyDialogueSystem_Source_ArticyDialogueSystem_Public_ArticyDialogueSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
