// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaAdmin/Public/TopicConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopicConfig() {}

// Begin Cross Module References
KAFKAADMIN_API UEnum* Z_Construct_UEnum_KafkaAdmin_ETopicConfig();
UPackage* Z_Construct_UPackage__Script_KafkaAdmin();
// End Cross Module References

// Begin Enum ETopicConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETopicConfig;
static UEnum* ETopicConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETopicConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETopicConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KafkaAdmin_ETopicConfig, (UObject*)Z_Construct_UPackage__Script_KafkaAdmin(), TEXT("ETopicConfig"));
	}
	return Z_Registration_Info_UEnum_ETopicConfig.OuterSingleton;
}
template<> KAFKAADMIN_API UEnum* StaticEnum<ETopicConfig>()
{
	return ETopicConfig_StaticEnum();
}
struct Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CLEANUP_POLICY.Name", "ETopicConfig::CLEANUP_POLICY" },
		{ "CLEANUP_POLICY.ToolTip", "valid values [compact, delete]" },
		{ "COMPRESSION_TYPE.Name", "ETopicConfig::COMPRESSION_TYPE" },
		{ "COMPRESSION_TYPE.ToolTip", "valid values [uncompressed, zstd, lz4, snappy, gzip, producer]." },
		{ "DELETE_RETENTION_MS.Name", "ETopicConfig::DELETE_RETENTION_MS" },
		{ "DELETE_RETENTION_MS.ToolTip", "The amount of time to retain delete tombstone markers for log compacted topics." },
		{ "FILE_DELETE_DELAY_MS.Name", "ETopicConfig::FILE_DELETE_DELAY_MS" },
		{ "FILE_DELETE_DELAY_MS.ToolTip", "The time to wait before deleting a file from the filesystem." },
		{ "FLUSH_MESSAGES.Name", "ETopicConfig::FLUSH_MESSAGES" },
		{ "FLUSH_MESSAGES.ToolTip", "This setting allows specifying an interval at which we will force an fsync of data written to the log." },
		{ "FLUSH_MS.Name", "ETopicConfig::FLUSH_MS" },
		{ "FLUSH_MS.ToolTip", "This setting allows specifying a time interval at which we will force an fsync of data written to the log." },
		{ "FOLLOWER_REPLICATION_THROTTLED_REPLICAS.Name", "ETopicConfig::FOLLOWER_REPLICATION_THROTTLED_REPLICAS" },
		{ "FOLLOWER_REPLICATION_THROTTLED_REPLICAS.ToolTip", "A list of replicas for which log replication should be throttled on the follower side. e.g [partitionId]:[brokerId],[partitionId]:[brokerId],..." },
		{ "INDEX_INTERVAL_BYTES.Name", "ETopicConfig::INDEX_INTERVAL_BYTES" },
		{ "INDEX_INTERVAL_BYTES.ToolTip", "This setting controls how frequently Kafka adds an index entry to its offset index." },
		{ "LEADER_REPLICATION_THROTTLED_REPLICAS.Name", "ETopicConfig::LEADER_REPLICATION_THROTTLED_REPLICAS" },
		{ "LEADER_REPLICATION_THROTTLED_REPLICAS.ToolTip", "A list of replicas for which log replication should be throttled on the leader side. e.g [partitionId]:[brokerId],[partitionId]:[brokerId],..." },
		{ "MAX_COMPACTION_LAG_MS.Name", "ETopicConfig::MAX_COMPACTION_LAG_MS" },
		{ "MAX_COMPACTION_LAG_MS.ToolTip", "The maximum time a message will remain ineligible for compaction in the log." },
		{ "MAX_MESSAGE_BYTES.Name", "ETopicConfig::MAX_MESSAGE_BYTES" },
		{ "MAX_MESSAGE_BYTES.ToolTip", "The largest record batch size allowed by Kafka (after compression if compression is enabled)." },
		{ "MESSAGE_DOWNCONVERSION_ENABLE.Name", "ETopicConfig::MESSAGE_DOWNCONVERSION_ENABLE" },
		{ "MESSAGE_DOWNCONVERSION_ENABLE.ToolTip", "This configuration controls whether down-conversion of message formats is enabled to satisfy consume requests. When set to false, broker will not perform down-conversion for consumers expecting an older message format." },
		{ "MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS.Name", "ETopicConfig::MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS" },
		{ "MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS.ToolTip", "The maximum difference allowed between the timestamp when a broker receives a message and the timestamp specified in the message." },
		{ "MESSAGE_TIMESTAMP_TYPE.Name", "ETopicConfig::MESSAGE_TIMESTAMP_TYPE" },
		{ "MESSAGE_TIMESTAMP_TYPE.ToolTip", "Define whether the timestamp in the message is message create time or log append time." },
		{ "MIN_CLEANABLE_DIRTY_RATIO.Name", "ETopicConfig::MIN_CLEANABLE_DIRTY_RATIO" },
		{ "MIN_CLEANABLE_DIRTY_RATIO.ToolTip", "This configuration controls how frequently the log compactor will attempt to clean the log." },
		{ "MIN_COMPACTION_LAG_MS.Name", "ETopicConfig::MIN_COMPACTION_LAG_MS" },
		{ "MIN_COMPACTION_LAG_MS.ToolTip", "Define whether the timestamp in the message is message create time or log append time." },
		{ "MIN_INSYNC_REPLICAS.Name", "ETopicConfig::MIN_INSYNC_REPLICAS" },
		{ "MIN_INSYNC_REPLICAS.ToolTip", "When a producer sets acks to all or - 1, this configuration specifies the minimum number of replicas that must acknowledge a write for the write to be considered successful." },
		{ "ModuleRelativePath", "Public/TopicConfig.h" },
		{ "PREALLOCATE.Name", "ETopicConfig::PREALLOCATE" },
		{ "PREALLOCATE.ToolTip", "True if we should preallocate the file on disk when creating a new log segment." },
		{ "RETENTION_BYTES.Name", "ETopicConfig::RETENTION_BYTES" },
		{ "RETENTION_BYTES.ToolTip", "This configuration controls the maximum size a partition (which consists of log segments) can grow to before we will discard old log segments to free up space if we are using the delete retention policy." },
		{ "RETENTION_MS.Name", "ETopicConfig::RETENTION_MS" },
		{ "RETENTION_MS.ToolTip", "This configuration controls the maximum time we will retain a log before we will discard old log segments to free up space if we are using the delete retention policy." },
		{ "SEGMENT_BYTES.Name", "ETopicConfig::SEGMENT_BYTES" },
		{ "SEGMENT_BYTES.ToolTip", "This configuration controls the segment file size for the log." },
		{ "SEGMENT_INDEX_BYTES.Name", "ETopicConfig::SEGMENT_INDEX_BYTES" },
		{ "SEGMENT_INDEX_BYTES.ToolTip", "This configuration controls the size of the index that maps offsets to file positions." },
		{ "SEGMENT_JITTER_MS.Name", "ETopicConfig::SEGMENT_JITTER_MS" },
		{ "SEGMENT_JITTER_MS.ToolTip", "The maximum random jitter subtracted from the scheduled segment roll time to avoid thundering herds of segment rolling." },
		{ "SEGMENT_MS.Name", "ETopicConfig::SEGMENT_MS" },
		{ "SEGMENT_MS.ToolTip", "This configuration controls the period of time after which Kafka will force the log to roll even if the segment file isn't full to ensure that retention can delete or compact old data." },
		{ "ToolTip", "Topic Configurations" },
		{ "UNCLEAN_LEADER_ELECTION_ENABLE.Name", "ETopicConfig::UNCLEAN_LEADER_ELECTION_ENABLE" },
		{ "UNCLEAN_LEADER_ELECTION_ENABLE.ToolTip", "Indicates whether to enable replicas not in the ISR set to be elected as leader as a last resort, even though doing so may result in data loss." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETopicConfig::CLEANUP_POLICY", (int64)ETopicConfig::CLEANUP_POLICY },
		{ "ETopicConfig::COMPRESSION_TYPE", (int64)ETopicConfig::COMPRESSION_TYPE },
		{ "ETopicConfig::DELETE_RETENTION_MS", (int64)ETopicConfig::DELETE_RETENTION_MS },
		{ "ETopicConfig::FILE_DELETE_DELAY_MS", (int64)ETopicConfig::FILE_DELETE_DELAY_MS },
		{ "ETopicConfig::FLUSH_MESSAGES", (int64)ETopicConfig::FLUSH_MESSAGES },
		{ "ETopicConfig::FLUSH_MS", (int64)ETopicConfig::FLUSH_MS },
		{ "ETopicConfig::FOLLOWER_REPLICATION_THROTTLED_REPLICAS", (int64)ETopicConfig::FOLLOWER_REPLICATION_THROTTLED_REPLICAS },
		{ "ETopicConfig::INDEX_INTERVAL_BYTES", (int64)ETopicConfig::INDEX_INTERVAL_BYTES },
		{ "ETopicConfig::LEADER_REPLICATION_THROTTLED_REPLICAS", (int64)ETopicConfig::LEADER_REPLICATION_THROTTLED_REPLICAS },
		{ "ETopicConfig::MAX_COMPACTION_LAG_MS", (int64)ETopicConfig::MAX_COMPACTION_LAG_MS },
		{ "ETopicConfig::MAX_MESSAGE_BYTES", (int64)ETopicConfig::MAX_MESSAGE_BYTES },
		{ "ETopicConfig::MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS", (int64)ETopicConfig::MESSAGE_TIMESTAMP_DIFFERENCE_MAX_MS },
		{ "ETopicConfig::MESSAGE_TIMESTAMP_TYPE", (int64)ETopicConfig::MESSAGE_TIMESTAMP_TYPE },
		{ "ETopicConfig::MIN_CLEANABLE_DIRTY_RATIO", (int64)ETopicConfig::MIN_CLEANABLE_DIRTY_RATIO },
		{ "ETopicConfig::MIN_COMPACTION_LAG_MS", (int64)ETopicConfig::MIN_COMPACTION_LAG_MS },
		{ "ETopicConfig::MIN_INSYNC_REPLICAS", (int64)ETopicConfig::MIN_INSYNC_REPLICAS },
		{ "ETopicConfig::PREALLOCATE", (int64)ETopicConfig::PREALLOCATE },
		{ "ETopicConfig::RETENTION_BYTES", (int64)ETopicConfig::RETENTION_BYTES },
		{ "ETopicConfig::RETENTION_MS", (int64)ETopicConfig::RETENTION_MS },
		{ "ETopicConfig::SEGMENT_BYTES", (int64)ETopicConfig::SEGMENT_BYTES },
		{ "ETopicConfig::SEGMENT_INDEX_BYTES", (int64)ETopicConfig::SEGMENT_INDEX_BYTES },
		{ "ETopicConfig::SEGMENT_JITTER_MS", (int64)ETopicConfig::SEGMENT_JITTER_MS },
		{ "ETopicConfig::SEGMENT_MS", (int64)ETopicConfig::SEGMENT_MS },
		{ "ETopicConfig::UNCLEAN_LEADER_ELECTION_ENABLE", (int64)ETopicConfig::UNCLEAN_LEADER_ELECTION_ENABLE },
		{ "ETopicConfig::MESSAGE_DOWNCONVERSION_ENABLE", (int64)ETopicConfig::MESSAGE_DOWNCONVERSION_ENABLE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KafkaAdmin,
	nullptr,
	"ETopicConfig",
	"ETopicConfig",
	Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KafkaAdmin_ETopicConfig()
{
	if (!Z_Registration_Info_UEnum_ETopicConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETopicConfig.InnerSingleton, Z_Construct_UEnum_KafkaAdmin_ETopicConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETopicConfig.InnerSingleton;
}
// End Enum ETopicConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETopicConfig_StaticEnum, TEXT("ETopicConfig"), &Z_Registration_Info_UEnum_ETopicConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1328958552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicConfig_h_2788259419(TEXT("/Script/KafkaAdmin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
