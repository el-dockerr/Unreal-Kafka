// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KafkaProducerConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAFKAPRODUCER_KafkaProducerConfig_generated_h
#error "KafkaProducerConfig.generated.h already included, missing '#pragma once' in KafkaProducerConfig.h"
#endif
#define KAFKAPRODUCER_KafkaProducerConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_KafkaProducerConfig_h


#define FOREACH_ENUM_EKAFKAPRODUCERCONFIG(op) \
	op(EKafkaProducerConfig::BOOTSTRAP_SERVERS) \
	op(EKafkaProducerConfig::CLIENT_ID) \
	op(EKafkaProducerConfig::ACKS) \
	op(EKafkaProducerConfig::QUEUE_BUFFERING_MAX_MESSAGES) \
	op(EKafkaProducerConfig::QUEUE_BUFFERING_MAX_KBYTES) \
	op(EKafkaProducerConfig::LINGER_MS) \
	op(EKafkaProducerConfig::BATCH_NUM_MESSAGES) \
	op(EKafkaProducerConfig::BATCH_SIZE) \
	op(EKafkaProducerConfig::MESSAGE_MAX_BYTES) \
	op(EKafkaProducerConfig::MESSAGE_TIMEOUT_MS) \
	op(EKafkaProducerConfig::REQUEST_TIMEOUT_MS) \
	op(EKafkaProducerConfig::PARTITIONER) \
	op(EKafkaProducerConfig::MAX_IN_FLIGHT) \
	op(EKafkaProducerConfig::ENABLE_IDEMPOTENCE) \
	op(EKafkaProducerConfig::TRANSACTIONAL_ID) \
	op(EKafkaProducerConfig::TRANSACTION_TIMEOUT_MS) \
	op(EKafkaProducerConfig::SECURITY_PROTOCOL) \
	op(EKafkaProducerConfig::SASL_KERBEROS_KINIT_CMD) \
	op(EKafkaProducerConfig::SASL_KERBEROS_SERVICE_NAME) \
	op(EKafkaProducerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION) \
	op(EKafkaProducerConfig::LOG_LEVEL) 

enum class EKafkaProducerConfig : uint8;
template<> struct TIsUEnumClass<EKafkaProducerConfig> { enum { Value = true }; };
template<> KAFKAPRODUCER_API UEnum* StaticEnum<EKafkaProducerConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
