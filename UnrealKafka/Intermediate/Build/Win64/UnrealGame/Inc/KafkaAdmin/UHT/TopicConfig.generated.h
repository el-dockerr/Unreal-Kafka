// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopicConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAFKAADMIN_TopicConfig_generated_h
#error "TopicConfig.generated.h already included, missing '#pragma once' in TopicConfig.h"
#endif
#define KAFKAADMIN_TopicConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicConfig_h


#define FOREACH_ENUM_ETOPICCONFIG(op) \
	op(ETopicConfig::CLEANUP_POLICY) \
	op(ETopicConfig::COMPRESSION_TYPE) \
	op(ETopicConfig::DELETE_RETENTION_MS) \
	op(ETopicConfig::FILE_DELETE_DELAY_MS) \
	op(ETopicConfig::FLUSH_MESSAGES) \
	op(ETopicConfig::FLUSH_MS) \
	op(ETopicConfig::FOLLOWER_REPLICATION_THROTTLED_REPLICAS) \
	op(ETopicConfig::INDEX_INTERVAL_BYTES) \
	op(ETopicConfig::LEADER_REPLICATION_THROTTLED_REPLICAS) \
	op(ETopicConfig::MAX_COMPACTION_LAG_MS) \
	op(ETopicConfig::MAX_MESSAGE_BYTES) \
	op(ETopicConfig::MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS) \
	op(ETopicConfig::MESSAGE_TIMESTAMP_TYPE) \
	op(ETopicConfig::MIN_CLEANABLE_DIRTY_RATIO) \
	op(ETopicConfig::MIN_COMPACTION_LAG_MS) \
	op(ETopicConfig::MIN_INSYNC_REPLICAS) \
	op(ETopicConfig::PREALLOCATE) \
	op(ETopicConfig::RETENTION_BYTES) \
	op(ETopicConfig::RETENTION_MS) \
	op(ETopicConfig::SEGMENT_BYTES) \
	op(ETopicConfig::SEGMENT_INDEX_BYTES) \
	op(ETopicConfig::SEGMENT_JITTER_MS) \
	op(ETopicConfig::SEGMENT_MS) \
	op(ETopicConfig::UNCLEAN_LEADER_ELECTION_ENABLE) \
	op(ETopicConfig::MESSAGE_DOWNCONVERSION_ENABLE) 

enum class ETopicConfig : uint8;
template<> struct TIsUEnumClass<ETopicConfig> { enum { Value = true }; };
template<> KAFKAADMIN_API UEnum* StaticEnum<ETopicConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
