// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonParseManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyJsonObject;
enum class EEasyJsonParserErrorCode : uint8;
#ifdef EASYJSONPARSER_EasyJsonParseManager_generated_h
#error "EasyJsonParseManager.generated.h already included, missing '#pragma once' in EasyJsonParseManager.h"
#endif
#define EASYJSONPARSER_EasyJsonParseManager_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadFromString); \
	DECLARE_FUNCTION(execLoadFromFile);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyJsonParseManager(); \
	friend struct Z_Construct_UClass_UEasyJsonParseManager_Statics; \
public: \
	DECLARE_CLASS(UEasyJsonParseManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyJsonParser"), NO_API) \
	DECLARE_SERIALIZER(UEasyJsonParseManager)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyJsonParseManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyJsonParseManager(UEasyJsonParseManager&&); \
	UEasyJsonParseManager(const UEasyJsonParseManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyJsonParseManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyJsonParseManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyJsonParseManager) \
	NO_API virtual ~UEasyJsonParseManager();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_13_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYJSONPARSER_API UClass* StaticClass<class UEasyJsonParseManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
