// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KafkaAdminConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAFKAADMIN_KafkaAdminConfig_generated_h
#error "KafkaAdminConfig.generated.h already included, missing '#pragma once' in KafkaAdminConfig.h"
#endif
#define KAFKAADMIN_KafkaAdminConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_KafkaAdminConfig_h


#define FOREACH_ENUM_EKAFKAADMINCONFIG(op) \
	op(EKafkaAdminConfig::BOOTSTRAP_SERVERS) \
	op(EKafkaAdminConfig::SOCKET_TIMEOUT_MS) \
	op(EKafkaAdminConfig::SECURITY_PROTOCOL) \
	op(EKafkaAdminConfig::SASL_KERBEROS_KINIT_CMD) \
	op(EKafkaAdminConfig::SASL_KERBEROS_SERVICE_NAME) \
	op(EKafkaAdminConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION) \
	op(EKafkaAdminConfig::LOG_LEVEL) 

enum class EKafkaAdminConfig : uint8;
template<> struct TIsUEnumClass<EKafkaAdminConfig> { enum { Value = true }; };
template<> KAFKAADMIN_API UEnum* StaticEnum<EKafkaAdminConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
