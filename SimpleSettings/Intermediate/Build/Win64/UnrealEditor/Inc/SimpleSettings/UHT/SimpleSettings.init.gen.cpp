// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSettings_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleSettings;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleSettings()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleSettings.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleSettings",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0D2DF0DA,
				0x4DAF619C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleSettings.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleSettings.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleSettings(Z_Construct_UPackage__Script_SimpleSettings, TEXT("/Script/SimpleSettings"), Z_Registration_Info_UPackage__Script_SimpleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0D2DF0DA, 0x4DAF619C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
