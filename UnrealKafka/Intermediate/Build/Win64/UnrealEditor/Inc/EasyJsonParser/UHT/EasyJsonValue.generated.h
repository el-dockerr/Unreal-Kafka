// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYJSONPARSER_EasyJsonValue_generated_h
#error "EasyJsonValue.generated.h already included, missing '#pragma once' in EasyJsonValue.h"
#endif
#define EASYJSONPARSER_EasyJsonValue_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execGetStringValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetIntValue);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyJsonValue(); \
	friend struct Z_Construct_UClass_UEasyJsonValue_Statics; \
public: \
	DECLARE_CLASS(UEasyJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyJsonParser"), NO_API) \
	DECLARE_SERIALIZER(UEasyJsonValue)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyJsonValue(UEasyJsonValue&&); \
	UEasyJsonValue(const UEasyJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyJsonValue) \
	NO_API virtual ~UEasyJsonValue();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_10_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYJSONPARSER_API UClass* StaticClass<class UEasyJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
