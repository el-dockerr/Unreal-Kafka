// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyJsonParserEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYJSONPARSER_EasyJsonParserEnums_generated_h
#error "EasyJsonParserEnums.generated.h already included, missing '#pragma once' in EasyJsonParserEnums.h"
#endif
#define EASYJSONPARSER_EasyJsonParserEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParserEnums_h


#define FOREACH_ENUM_EEASYJSONPARSERERRORCODE(op) \
	op(EEasyJsonParserErrorCode::Successed) \
	op(EEasyJsonParserErrorCode::Failed) 

enum class EEasyJsonParserErrorCode : uint8;
template<> struct TIsUEnumClass<EEasyJsonParserErrorCode> { enum { Value = true }; };
template<> EASYJSONPARSER_API UEnum* StaticEnum<EEasyJsonParserErrorCode>();

#define FOREACH_ENUM_EEASYJSONPARSERFOUND(op) \
	op(EEasyJsonParserFound::Found) \
	op(EEasyJsonParserFound::NotFound) 

enum class EEasyJsonParserFound : uint8;
template<> struct TIsUEnumClass<EEasyJsonParserFound> { enum { Value = true }; };
template<> EASYJSONPARSER_API UEnum* StaticEnum<EEasyJsonParserFound>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
