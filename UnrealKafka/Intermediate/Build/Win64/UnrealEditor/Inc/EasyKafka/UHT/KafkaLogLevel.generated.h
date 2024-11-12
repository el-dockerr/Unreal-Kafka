// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KafkaLogLevel.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYKAFKA_KafkaLogLevel_generated_h
#error "KafkaLogLevel.generated.h already included, missing '#pragma once' in KafkaLogLevel.h"
#endif
#define EASYKAFKA_KafkaLogLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_KafkaLogLevel_h


#define FOREACH_ENUM_EKAFKALOGLEVEL(op) \
	op(EKafkaLogLevel::EMERG) \
	op(EKafkaLogLevel::ALERT) \
	op(EKafkaLogLevel::CRIT) \
	op(EKafkaLogLevel::ERR) \
	op(EKafkaLogLevel::WARNING) \
	op(EKafkaLogLevel::NOTICE) \
	op(EKafkaLogLevel::INFO) \
	op(EKafkaLogLevel::DEBUG) 

enum class EKafkaLogLevel : uint8;
template<> struct TIsUEnumClass<EKafkaLogLevel> { enum { Value = true }; };
template<> EASYKAFKA_API UEnum* StaticEnum<EKafkaLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
