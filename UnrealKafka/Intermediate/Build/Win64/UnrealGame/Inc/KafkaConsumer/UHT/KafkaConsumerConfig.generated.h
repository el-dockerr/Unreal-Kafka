// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KafkaConsumerConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAFKACONSUMER_KafkaConsumerConfig_generated_h
#error "KafkaConsumerConfig.generated.h already included, missing '#pragma once' in KafkaConsumerConfig.h"
#endif
#define KAFKACONSUMER_KafkaConsumerConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_KafkaConsumerConfig_h


#define FOREACH_ENUM_EKAFKACONSUMERCONFIG(op) \
	op(EKafkaConsumerConfig::BOOTSTRAP_SERVERS) \
	op(EKafkaConsumerConfig::GROUP_ID) \
	op(EKafkaConsumerConfig::CLIENT_ID) \
	op(EKafkaConsumerConfig::ENABLE_AUTO_COMMIT) \
	op(EKafkaConsumerConfig::AUTO_OFFSET_RESET) \
	op(EKafkaConsumerConfig::ENABLE_PARTITION_EOF) \
	op(EKafkaConsumerConfig::MAX_POLL_RECORDS) \
	op(EKafkaConsumerConfig::QUEUED_MIN_MESSAGES) \
	op(EKafkaConsumerConfig::SESSION_TIMEOUT_MS) \
	op(EKafkaConsumerConfig::SOCKET_TIMEOUT_MS) \
	op(EKafkaConsumerConfig::ISOLATION_LEVEL) \
	op(EKafkaConsumerConfig::PARTITION_ASSIGNMENT_STRATEGY) \
	op(EKafkaConsumerConfig::SECURITY_PROTOCOL) \
	op(EKafkaConsumerConfig::SASL_KERBEROS_KINIT_CMD) \
	op(EKafkaConsumerConfig::SASL_KERBEROS_SERVICE_NAME) \
	op(EKafkaConsumerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION) \
	op(EKafkaConsumerConfig::LOG_LEVEL) 

enum class EKafkaConsumerConfig : uint8;
template<> struct TIsUEnumClass<EKafkaConsumerConfig> { enum { Value = true }; };
template<> KAFKACONSUMER_API UEnum* StaticEnum<EKafkaConsumerConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
