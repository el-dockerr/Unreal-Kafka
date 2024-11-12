// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyJsonObject;
enum class EEasyJsonParserFound : uint8;
#ifdef EASYJSONPARSER_EasyJsonObject_generated_h
#error "EasyJsonObject.generated.h already included, missing '#pragma once' in EasyJsonObject.h"
#endif
#define EASYJSONPARSER_EasyJsonObject_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadObjects); \
	DECLARE_FUNCTION(execReadObject); \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadString); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execReadInt);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyJsonObject(); \
	friend struct Z_Construct_UClass_UEasyJsonObject_Statics; \
public: \
	DECLARE_CLASS(UEasyJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyJsonParser"), NO_API) \
	DECLARE_SERIALIZER(UEasyJsonObject)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyJsonObject(UEasyJsonObject&&); \
	UEasyJsonObject(const UEasyJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyJsonObject) \
	NO_API virtual ~UEasyJsonObject();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_12_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYJSONPARSER_API UClass* StaticClass<class UEasyJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
