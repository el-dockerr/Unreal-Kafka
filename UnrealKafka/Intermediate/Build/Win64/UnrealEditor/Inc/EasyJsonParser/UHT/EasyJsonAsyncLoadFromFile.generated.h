// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonAsyncLoadFromFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyJsonAsyncLoadFromFile;
class UEasyJsonObject;
class UObject;
#ifdef EASYJSONPARSER_EasyJsonAsyncLoadFromFile_generated_h
#error "EasyJsonAsyncLoadFromFile.generated.h already included, missing '#pragma once' in EasyJsonAsyncLoadFromFile.h"
#endif
#define EASYJSONPARSER_EasyJsonAsyncLoadFromFile_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_10_DELEGATE \
EASYJSONPARSER_API void FEasyJsonAsyncLoadFromFile_Result_DelegateWrapper(const FMulticastScriptDelegate& EasyJsonAsyncLoadFromFile_Result, UEasyJsonObject* JsonObject);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadFromFile);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyJsonAsyncLoadFromFile(); \
	friend struct Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics; \
public: \
	DECLARE_CLASS(UEasyJsonAsyncLoadFromFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyJsonParser"), NO_API) \
	DECLARE_SERIALIZER(UEasyJsonAsyncLoadFromFile)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyJsonAsyncLoadFromFile(UEasyJsonAsyncLoadFromFile&&); \
	UEasyJsonAsyncLoadFromFile(const UEasyJsonAsyncLoadFromFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyJsonAsyncLoadFromFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyJsonAsyncLoadFromFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyJsonAsyncLoadFromFile) \
	NO_API virtual ~UEasyJsonAsyncLoadFromFile();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_13_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYJSONPARSER_API UClass* StaticClass<class UEasyJsonAsyncLoadFromFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
