// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaConsumer/Public/KafkaConsumerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaConsumerConfig() {}

// Begin Cross Module References
KAFKACONSUMER_API UEnum* Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig();
UPackage* Z_Construct_UPackage__Script_KafkaConsumer();
// End Cross Module References

// Begin Enum EKafkaConsumerConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKafkaConsumerConfig;
static UEnum* EKafkaConsumerConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKafkaConsumerConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKafkaConsumerConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig, (UObject*)Z_Construct_UPackage__Script_KafkaConsumer(), TEXT("EKafkaConsumerConfig"));
	}
	return Z_Registration_Info_UEnum_EKafkaConsumerConfig.OuterSingleton;
}
template<> KAFKACONSUMER_API UEnum* StaticEnum<EKafkaConsumerConfig>()
{
	return EKafkaConsumerConfig_StaticEnum();
}
struct Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AUTO_OFFSET_RESET.Name", "EKafkaConsumerConfig::AUTO_OFFSET_RESET" },
		{ "AUTO_OFFSET_RESET.ToolTip", "Available options: latest, earliest." },
		{ "BlueprintType", "true" },
		{ "BOOTSTRAP_SERVERS.Name", "EKafkaConsumerConfig::BOOTSTRAP_SERVERS" },
		{ "BOOTSTRAP_SERVERS.ToolTip", "host:port pairs of brokers splitted ,." },
		{ "CLIENT_ID.Name", "EKafkaConsumerConfig::CLIENT_ID" },
		{ "CLIENT_ID.ToolTip", "Client identifier." },
		{ "ENABLE_AUTO_COMMIT.Name", "EKafkaConsumerConfig::ENABLE_AUTO_COMMIT" },
		{ "ENABLE_AUTO_COMMIT.ToolTip", "Automatically commits previously polled offsets on each `poll` operation." },
		{ "ENABLE_PARTITION_EOF.Name", "EKafkaConsumerConfig::ENABLE_PARTITION_EOF" },
		{ "ENABLE_PARTITION_EOF.ToolTip", "Emit RD_KAFKA_RESP_ERR_PARTITION_EOF event whenever the consumer reaches the end of a partition." },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.Name", "EKafkaConsumerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION" },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.ToolTip", " Enable SSL certificate verification of the broker." },
		{ "GROUP_ID.Name", "EKafkaConsumerConfig::GROUP_ID" },
		{ "GROUP_ID.ToolTip", "Group identifier." },
		{ "ISOLATION_LEVEL.Name", "EKafkaConsumerConfig::ISOLATION_LEVEL" },
		{ "ISOLATION_LEVEL.ToolTip", "Control how to read messages written transactionally." },
		{ "LOG_LEVEL.Name", "EKafkaConsumerConfig::LOG_LEVEL" },
		{ "LOG_LEVEL.ToolTip", " Rdkafka log level." },
		{ "MAX_POLL_RECORDS.Name", "EKafkaConsumerConfig::MAX_POLL_RECORDS" },
		{ "MAX_POLL_RECORDS.ToolTip", "maximum number of records poll() will return." },
		{ "ModuleRelativePath", "Public/KafkaConsumerConfig.h" },
		{ "PARTITION_ASSIGNMENT_STRATEGY.Name", "EKafkaConsumerConfig::PARTITION_ASSIGNMENT_STRATEGY" },
		{ "PARTITION_ASSIGNMENT_STRATEGY.ToolTip", "The name of one or more partition assignment strategies." },
		{ "QUEUED_MIN_MESSAGES.Name", "EKafkaConsumerConfig::QUEUED_MIN_MESSAGES" },
		{ "QUEUED_MIN_MESSAGES.ToolTip", "Minimum number of messages per topic/partition tries to maintain in the local consumer queue." },
		{ "SASL_KERBEROS_KINIT_CMD.Name", "EKafkaConsumerConfig::SASL_KERBEROS_KINIT_CMD" },
		{ "SASL_KERBEROS_KINIT_CMD.ToolTip", "Shell command to refresh or acquire the client's Kerberos ticket." },
		{ "SASL_KERBEROS_SERVICE_NAME.Name", "EKafkaConsumerConfig::SASL_KERBEROS_SERVICE_NAME" },
		{ "SASL_KERBEROS_SERVICE_NAME.ToolTip", "The client's Kerberos principal name." },
		{ "SECURITY_PROTOCOL.Name", "EKafkaConsumerConfig::SECURITY_PROTOCOL" },
		{ "SECURITY_PROTOCOL.ToolTip", "Protocol used to communicate with brokers." },
		{ "SESSION_TIMEOUT_MS.Name", "EKafkaConsumerConfig::SESSION_TIMEOUT_MS" },
		{ "SESSION_TIMEOUT_MS.ToolTip", "Client group session and failure detection timeout." },
		{ "SOCKET_TIMEOUT_MS.Name", "EKafkaConsumerConfig::SOCKET_TIMEOUT_MS" },
		{ "SOCKET_TIMEOUT_MS.ToolTip", "Timeout for network requests." },
		{ "ToolTip", "Kafka Client Configurations" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKafkaConsumerConfig::BOOTSTRAP_SERVERS", (int64)EKafkaConsumerConfig::BOOTSTRAP_SERVERS },
		{ "EKafkaConsumerConfig::GROUP_ID", (int64)EKafkaConsumerConfig::GROUP_ID },
		{ "EKafkaConsumerConfig::CLIENT_ID", (int64)EKafkaConsumerConfig::CLIENT_ID },
		{ "EKafkaConsumerConfig::ENABLE_AUTO_COMMIT", (int64)EKafkaConsumerConfig::ENABLE_AUTO_COMMIT },
		{ "EKafkaConsumerConfig::AUTO_OFFSET_RESET", (int64)EKafkaConsumerConfig::AUTO_OFFSET_RESET },
		{ "EKafkaConsumerConfig::ENABLE_PARTITION_EOF", (int64)EKafkaConsumerConfig::ENABLE_PARTITION_EOF },
		{ "EKafkaConsumerConfig::MAX_POLL_RECORDS", (int64)EKafkaConsumerConfig::MAX_POLL_RECORDS },
		{ "EKafkaConsumerConfig::QUEUED_MIN_MESSAGES", (int64)EKafkaConsumerConfig::QUEUED_MIN_MESSAGES },
		{ "EKafkaConsumerConfig::SESSION_TIMEOUT_MS", (int64)EKafkaConsumerConfig::SESSION_TIMEOUT_MS },
		{ "EKafkaConsumerConfig::SOCKET_TIMEOUT_MS", (int64)EKafkaConsumerConfig::SOCKET_TIMEOUT_MS },
		{ "EKafkaConsumerConfig::ISOLATION_LEVEL", (int64)EKafkaConsumerConfig::ISOLATION_LEVEL },
		{ "EKafkaConsumerConfig::PARTITION_ASSIGNMENT_STRATEGY", (int64)EKafkaConsumerConfig::PARTITION_ASSIGNMENT_STRATEGY },
		{ "EKafkaConsumerConfig::SECURITY_PROTOCOL", (int64)EKafkaConsumerConfig::SECURITY_PROTOCOL },
		{ "EKafkaConsumerConfig::SASL_KERBEROS_KINIT_CMD", (int64)EKafkaConsumerConfig::SASL_KERBEROS_KINIT_CMD },
		{ "EKafkaConsumerConfig::SASL_KERBEROS_SERVICE_NAME", (int64)EKafkaConsumerConfig::SASL_KERBEROS_SERVICE_NAME },
		{ "EKafkaConsumerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION", (int64)EKafkaConsumerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION },
		{ "EKafkaConsumerConfig::LOG_LEVEL", (int64)EKafkaConsumerConfig::LOG_LEVEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KafkaConsumer,
	nullptr,
	"EKafkaConsumerConfig",
	"EKafkaConsumerConfig",
	Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig()
{
	if (!Z_Registration_Info_UEnum_EKafkaConsumerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKafkaConsumerConfig.InnerSingleton, Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKafkaConsumerConfig.InnerSingleton;
}
// End Enum EKafkaConsumerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_KafkaConsumerConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKafkaConsumerConfig_StaticEnum, TEXT("EKafkaConsumerConfig"), &Z_Registration_Info_UEnum_EKafkaConsumerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 130576548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_KafkaConsumerConfig_h_2052702321(TEXT("/Script/KafkaConsumer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_KafkaConsumerConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_KafkaConsumerConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
