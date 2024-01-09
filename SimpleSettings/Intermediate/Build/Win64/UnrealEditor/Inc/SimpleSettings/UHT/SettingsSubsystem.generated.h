// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SettingsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplaySetting;
#ifdef SIMPLESETTINGS_SettingsSubsystem_generated_h
#error "SettingsSubsystem.generated.h already included, missing '#pragma once' in SettingsSubsystem.h"
#endif
#define SIMPLESETTINGS_SettingsSubsystem_generated_h

#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDisplaySetting_Statics; \
	SIMPLESETTINGS_API static class UScriptStruct* StaticStruct();


template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<struct FDisplaySetting>();

#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSetting_Statics; \
	SIMPLESETTINGS_API static class UScriptStruct* StaticStruct();


template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<struct FSoundSetting>();

#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMainSetting_Statics; \
	SIMPLESETTINGS_API static class UScriptStruct* StaticStruct();


template<> SIMPLESETTINGS_API UScriptStruct* StaticStruct<struct FMainSetting>();

#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_SPARSE_DATA
#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadSettingsData); \
	DECLARE_FUNCTION(execReadSettingsData); \
	DECLARE_FUNCTION(execSaveSettingsData);


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadSettingsData); \
	DECLARE_FUNCTION(execReadSettingsData); \
	DECLARE_FUNCTION(execSaveSettingsData);


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_ACCESSORS
#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsSubsystem(); \
	friend struct Z_Construct_UClass_USettingsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USettingsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingsSubsystem)


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUSettingsSubsystem(); \
	friend struct Z_Construct_UClass_USettingsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USettingsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingsSubsystem)


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsSubsystem(USettingsSubsystem&&); \
	NO_API USettingsSubsystem(const USettingsSubsystem&); \
public: \
	NO_API virtual ~USettingsSubsystem();


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsSubsystem(USettingsSubsystem&&); \
	NO_API USettingsSubsystem(const USettingsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USettingsSubsystem) \
	NO_API virtual ~USettingsSubsystem();


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_89_PROLOG
#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_SPARSE_DATA \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_RPC_WRAPPERS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_ACCESSORS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_INCLASS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_SPARSE_DATA \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_ACCESSORS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESETTINGS_API UClass* StaticClass<class USettingsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_ExtendEditor_Packaged_SimpleSettings_HostProject_Plugins_SimpleSettings_Source_SimpleSettings_Public_SettingsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
