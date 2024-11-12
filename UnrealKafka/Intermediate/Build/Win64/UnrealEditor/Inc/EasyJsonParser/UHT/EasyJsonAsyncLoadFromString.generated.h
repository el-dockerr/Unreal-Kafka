// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonAsyncLoadFromString.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyJsonAsyncLoadFromString;
class UEasyJsonObject;
class UObject;
#ifdef EASYJSONPARSER_EasyJsonAsyncLoadFromString_generated_h
#error "EasyJsonAsyncLoadFromString.generated.h already included, missing '#pragma once' in EasyJsonAsyncLoadFromString.h"
#endif
#define EASYJSONPARSER_EasyJsonAsyncLoadFromString_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_10_DELEGATE \
EASYJSONPARSER_API void FEasyJsonAsyncLoadFromString_Result_DelegateWrapper(const FMulticastScriptDelegate& EasyJsonAsyncLoadFromString_Result, UEasyJsonObject* JsonObject);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadFromString);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyJsonAsyncLoadFromString(); \
	friend struct Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics; \
public: \
	DECLARE_CLASS(UEasyJsonAsyncLoadFromString, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyJsonParser"), NO_API) \
	DECLARE_SERIALIZER(UEasyJsonAsyncLoadFromString)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyJsonAsyncLoadFromString(UEasyJsonAsyncLoadFromString&&); \
	UEasyJsonAsyncLoadFromString(const UEasyJsonAsyncLoadFromString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyJsonAsyncLoadFromString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyJsonAsyncLoadFromString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyJsonAsyncLoadFromString) \
	NO_API virtual ~UEasyJsonAsyncLoadFromString();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_13_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYJSONPARSER_API UClass* StaticClass<class UEasyJsonAsyncLoadFromString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
