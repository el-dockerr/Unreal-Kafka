// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaAdmin/Public/KafkaAdminConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaAdminConfig() {}

// Begin Cross Module References
KAFKAADMIN_API UEnum* Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig();
UPackage* Z_Construct_UPackage__Script_KafkaAdmin();
// End Cross Module References

// Begin Enum EKafkaAdminConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKafkaAdminConfig;
static UEnum* EKafkaAdminConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKafkaAdminConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKafkaAdminConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig, (UObject*)Z_Construct_UPackage__Script_KafkaAdmin(), TEXT("EKafkaAdminConfig"));
	}
	return Z_Registration_Info_UEnum_EKafkaAdminConfig.OuterSingleton;
}
template<> KAFKAADMIN_API UEnum* StaticEnum<EKafkaAdminConfig>()
{
	return EKafkaAdminConfig_StaticEnum();
}
struct Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOOTSTRAP_SERVERS.Name", "EKafkaAdminConfig::BOOTSTRAP_SERVERS" },
		{ "BOOTSTRAP_SERVERS.ToolTip", "host:port pairs of brokers splitted ,." },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.Name", "EKafkaAdminConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION" },
		{ "ENABLE_SSL_CERTIFICATE_VERIFICATION.ToolTip", " Enable SSL certificate verification of the broker." },
		{ "LOG_LEVEL.Name", "EKafkaAdminConfig::LOG_LEVEL" },
		{ "LOG_LEVEL.ToolTip", " Rdkafka log level." },
		{ "ModuleRelativePath", "Public/KafkaAdminConfig.h" },
		{ "SASL_KERBEROS_KINIT_CMD.Name", "EKafkaAdminConfig::SASL_KERBEROS_KINIT_CMD" },
		{ "SASL_KERBEROS_KINIT_CMD.ToolTip", "Shell command to refresh or acquire the client's Kerberos ticket." },
		{ "SASL_KERBEROS_SERVICE_NAME.Name", "EKafkaAdminConfig::SASL_KERBEROS_SERVICE_NAME" },
		{ "SASL_KERBEROS_SERVICE_NAME.ToolTip", "The client's Kerberos principal name." },
		{ "SECURITY_PROTOCOL.Name", "EKafkaAdminConfig::SECURITY_PROTOCOL" },
		{ "SECURITY_PROTOCOL.ToolTip", "Protocol used to communicate with brokers." },
		{ "SOCKET_TIMEOUT_MS.Name", "EKafkaAdminConfig::SOCKET_TIMEOUT_MS" },
		{ "SOCKET_TIMEOUT_MS.ToolTip", "Timeout for network requests." },
		{ "ToolTip", "Kafka Admin Configurations" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKafkaAdminConfig::BOOTSTRAP_SERVERS", (int64)EKafkaAdminConfig::BOOTSTRAP_SERVERS },
		{ "EKafkaAdminConfig::SOCKET_TIMEOUT_MS", (int64)EKafkaAdminConfig::SOCKET_TIMEOUT_MS },
		{ "EKafkaAdminConfig::SECURITY_PROTOCOL", (int64)EKafkaAdminConfig::SECURITY_PROTOCOL },
		{ "EKafkaAdminConfig::SASL_KERBEROS_KINIT_CMD", (int64)EKafkaAdminConfig::SASL_KERBEROS_KINIT_CMD },
		{ "EKafkaAdminConfig::SASL_KERBEROS_SERVICE_NAME", (int64)EKafkaAdminConfig::SASL_KERBEROS_SERVICE_NAME },
		{ "EKafkaAdminConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION", (int64)EKafkaAdminConfig::ENABLE_SSL_CERTIFICATE_VERIFICATION },
		{ "EKafkaAdminConfig::LOG_LEVEL", (int64)EKafkaAdminConfig::LOG_LEVEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KafkaAdmin,
	nullptr,
	"EKafkaAdminConfig",
	"EKafkaAdminConfig",
	Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig()
{
	if (!Z_Registration_Info_UEnum_EKafkaAdminConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKafkaAdminConfig.InnerSingleton, Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKafkaAdminConfig.InnerSingleton;
}
// End Enum EKafkaAdminConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_KafkaAdminConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKafkaAdminConfig_StaticEnum, TEXT("EKafkaAdminConfig"), &Z_Registration_Info_UEnum_EKafkaAdminConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4018040998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_KafkaAdminConfig_h_3180599783(TEXT("/Script/KafkaAdmin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_KafkaAdminConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_KafkaAdminConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
