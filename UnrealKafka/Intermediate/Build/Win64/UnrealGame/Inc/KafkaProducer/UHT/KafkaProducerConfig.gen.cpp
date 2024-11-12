// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaProducer/Public/KafkaProducerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaProducerConfig() {}

// Begin Cross Module References
KAFKAPRODUCER_API UEnum* Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig();
UPackage* Z_Construct_UPackage__Script_KafkaProducer();
// End Cross Module References

// Begin Enum EKafkaProducerConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKafkaProducerConfig;
static UEnum* EKafkaProducerConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKafkaProducerConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKafkaProducerConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig, (UObject*)Z_Construct_UPackage__Script_KafkaProducer(), TEXT("EKafkaProducerConfig"));
	}
	return Z_Registration_Info_UEnum_EKafkaProducerConfig.OuterSingleton;
}
template<> KAFKAPRODUCER_API UEnum* StaticEnum<EKafkaProducerConfig>()
{
	return EKafkaProducerConfig_StaticEnum();
}
struct Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACKS.Name", "EKafkaProducerConfig::ACKS" },
		{ "ACKS.ToolTip", "how many partition replicas must receive the record before the producer can consider the write successful." },
		{ "BATCH_NUM_MESSAGES.Name", "EKafkaProducerConfig::BATCH_NUM_MESSAGES" },
		{ "BATCH_NUM_MESSAGES.ToolTip", "Maximum number of messages batched in one messageSet. The total MessageSet size is also limited by MESSAGE_MAX_BYTES." },
		{ "BATCH_SIZE.Name", "EKafkaProducerConfig::BATCH_SIZE" },
		{ "BATCH_SIZE.ToolTip", "Maximum size (in bytes) of all messages batched in one MessageSet (including protocol framing overhead)." },
		{ "BlueprintType", "true" },
		{ "BOOTSTRAP_SERVERS.Name", "EKafkaProducerConfig::BOOTSTRAP_SERVERS" },
		{ "BOOTSTRAP_SERVERS.ToolTip", "host:port pairs of brokers splitted ,." },
		{ "CLIENT_ID.Name", "EKafkaProducerConfig::CLIENT_ID" },
		{ "CLIENT_ID.ToolTip", "messages sent from the client ID." },
		{ "ENABLE_IDEMPOTENCE.Name", "EKafkaProducerConfig::ENABLE_IDEMPOTENCE" },
		{ "ENABLE_IDEMPOTENCE.ToolTip", "When set to `true`, the producer will ensure that messages are succefully sent exactly once and in the original order." },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.Name", "EKafkaProducerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION" },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.ToolTip", " Enable SSL certificate verification of the broker." },
		{ "LINGER_MS.Name", "EKafkaProducerConfig::LINGER_MS" },
		{ "LINGER_MS.ToolTip", "Delay in milliseconds to wait for messages in the producer queue, to accumulate before constructing messages batches to transmit to brokers." },
		{ "LOG_LEVEL.Name", "EKafkaProducerConfig::LOG_LEVEL" },
		{ "LOG_LEVEL.ToolTip", " Rdkafka log level." },
		{ "MAX_IN_FLIGHT.Name", "EKafkaProducerConfig::MAX_IN_FLIGHT" },
		{ "MAX_IN_FLIGHT.ToolTip", "Maximum number of in-flight requests per broker connection." },
		{ "MESSAGE_MAX_BYTES.Name", "EKafkaProducerConfig::MESSAGE_MAX_BYTES" },
		{ "MESSAGE_MAX_BYTES.ToolTip", "Maximum Kafka protocol request message size." },
		{ "MESSAGE_TIMEOUT_MS.Name", "EKafkaProducerConfig::MESSAGE_TIMEOUT_MS" },
		{ "MESSAGE_TIMEOUT_MS.ToolTip", "limits the time a produced message waits for successful delivery." },
		{ "ModuleRelativePath", "Public/KafkaProducerConfig.h" },
		{ "PARTITIONER.Name", "EKafkaProducerConfig::PARTITIONER" },
		{ "PARTITIONER.ToolTip", "The default partitioner for a ProducerRecord (with no partition assigned)." },
		{ "QUEUE_BUFFERING_MAX_KBYTES.Name", "EKafkaProducerConfig::QUEUE_BUFFERING_MAX_KBYTES" },
		{ "QUEUE_BUFFERING_MAX_KBYTES.ToolTip", "Maximum total message size sum allowed on the producer queue." },
		{ "QUEUE_BUFFERING_MAX_MESSAGES.Name", "EKafkaProducerConfig::QUEUE_BUFFERING_MAX_MESSAGES" },
		{ "QUEUE_BUFFERING_MAX_MESSAGES.ToolTip", "Maximum number of messages allowed on the producer queue." },
		{ "REQUEST_TIMEOUT_MS.Name", "EKafkaProducerConfig::REQUEST_TIMEOUT_MS" },
		{ "REQUEST_TIMEOUT_MS.ToolTip", "This value is only enforced by the brokers and relies on `ACKS` being non-zero." },
		{ "SASL_KERBEROS_KINIT_CMD.Name", "EKafkaProducerConfig::SASL_KERBEROS_KINIT_CMD" },
		{ "SASL_KERBEROS_KINIT_CMD.ToolTip", "Shell command to refresh or acquire the client's Kerberos ticket." },
		{ "SASL_KERBEROS_SERVICE_NAME.Name", "EKafkaProducerConfig::SASL_KERBEROS_SERVICE_NAME" },
		{ "SASL_KERBEROS_SERVICE_NAME.ToolTip", " The client's Kerberos principal name." },
		{ "SECURITY_PROTOCOL.Name", "EKafkaProducerConfig::SECURITY_PROTOCOL" },
		{ "SECURITY_PROTOCOL.ToolTip", "Protocol used to communicate with brokers." },
		{ "ToolTip", "Kafka Client Configurations" },
		{ "TRANSACTION_TIMEOUT_MS.Name", "EKafkaProducerConfig::TRANSACTION_TIMEOUT_MS" },
		{ "TRANSACTION_TIMEOUT_MS.ToolTip", "Th maximus amount of time in milliseconds that the transaction coordinator will wait for a trnsaction status update from the producer before proactively ablrting the ongoing transaction." },
		{ "TRANSACTIONAL_ID.Name", "EKafkaProducerConfig::TRANSACTIONAL_ID" },
		{ "TRANSACTIONAL_ID.ToolTip", "It's used to identify the same transactional producer instance across process restarts." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKafkaProducerConfig::BOOTSTRAP_SERVERS", (int64)EKafkaProducerConfig::BOOTSTRAP_SERVERS },
		{ "EKafkaProducerConfig::CLIENT_ID", (int64)EKafkaProducerConfig::CLIENT_ID },
		{ "EKafkaProducerConfig::ACKS", (int64)EKafkaProducerConfig::ACKS },
		{ "EKafkaProducerConfig::QUEUE_BUFFERING_MAX_MESSAGES", (int64)EKafkaProducerConfig::QUEUE_BUFFERING_MAX_MESSAGES },
		{ "EKafkaProducerConfig::QUEUE_BUFFERING_MAX_KBYTES", (int64)EKafkaProducerConfig::QUEUE_BUFFERING_MAX_KBYTES },
		{ "EKafkaProducerConfig::LINGER_MS", (int64)EKafkaProducerConfig::LINGER_MS },
		{ "EKafkaProducerConfig::BATCH_NUM_MESSAGES", (int64)EKafkaProducerConfig::BATCH_NUM_MESSAGES },
		{ "EKafkaProducerConfig::BATCH_SIZE", (int64)EKafkaProducerConfig::BATCH_SIZE },
		{ "EKafkaProducerConfig::MESSAGE_MAX_BYTES", (int64)EKafkaProducerConfig::MESSAGE_MAX_BYTES },
		{ "EKafkaProducerConfig::MESSAGE_TIMEOUT_MS", (int64)EKafkaProducerConfig::MESSAGE_TIMEOUT_MS },
		{ "EKafkaProducerConfig::REQUEST_TIMEOUT_MS", (int64)EKafkaProducerConfig::REQUEST_TIMEOUT_MS },
		{ "EKafkaProducerConfig::PARTITIONER", (int64)EKafkaProducerConfig::PARTITIONER },
		{ "EKafkaProducerConfig::MAX_IN_FLIGHT", (int64)EKafkaProducerConfig::MAX_IN_FLIGHT },
		{ "EKafkaProducerConfig::ENABLE_IDEMPOTENCE", (int64)EKafkaProducerConfig::ENABLE_IDEMPOTENCE },
		{ "EKafkaProducerConfig::TRANSACTIONAL_ID", (int64)EKafkaProducerConfig::TRANSACTIONAL_ID },
		{ "EKafkaProducerConfig::TRANSACTION_TIMEOUT_MS", (int64)EKafkaProducerConfig::TRANSACTION_TIMEOUT_MS },
		{ "EKafkaProducerConfig::SECURITY_PROTOCOL", (int64)EKafkaProducerConfig::SECURITY_PROTOCOL },
		{ "EKafkaProducerConfig::SASL_KERBEROS_KINIT_CMD", (int64)EKafkaProducerConfig::SASL_KERBEROS_KINIT_CMD },
		{ "EKafkaProducerConfig::SASL_KERBEROS_SERVICE_NAME", (int64)EKafkaProducerConfig::SASL_KERBEROS_SERVICE_NAME },
		{ "EKafkaProducerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION", (int64)EKafkaProducerConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION },
		{ "EKafkaProducerConfig::LOG_LEVEL", (int64)EKafkaProducerConfig::LOG_LEVEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KafkaProducer,
	nullptr,
	"EKafkaProducerConfig",
	"EKafkaProducerConfig",
	Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig()
{
	if (!Z_Registration_Info_UEnum_EKafkaProducerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKafkaProducerConfig.InnerSingleton, Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKafkaProducerConfig.InnerSingleton;
}
// End Enum EKafkaProducerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_KafkaProducerConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKafkaProducerConfig_StaticEnum, TEXT("EKafkaProducerConfig"), &Z_Registration_Info_UEnum_EKafkaProducerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1670915648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_KafkaProducerConfig_h_3599983393(TEXT("/Script/KafkaProducer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_KafkaProducerConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_KafkaProducerConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
