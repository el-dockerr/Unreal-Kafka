// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyKafka/Public/KafkaLogLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaLogLevel() {}

// Begin Cross Module References
EASYKAFKA_API UEnum* Z_Construct_UEnum_EasyKafka_EKafkaLogLevel();
UPackage* Z_Construct_UPackage__Script_EasyKafka();
// End Cross Module References

// Begin Enum EKafkaLogLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKafkaLogLevel;
static UEnum* EKafkaLogLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKafkaLogLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKafkaLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, (UObject*)Z_Construct_UPackage__Script_EasyKafka(), TEXT("EKafkaLogLevel"));
	}
	return Z_Registration_Info_UEnum_EKafkaLogLevel.OuterSingleton;
}
template<> EASYKAFKA_API UEnum* StaticEnum<EKafkaLogLevel>()
{
	return EKafkaLogLevel_StaticEnum();
}
struct Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ALERT.Name", "EKafkaLogLevel::ALERT" },
		{ "ALERT.ToolTip", "ALERT" },
		{ "BlueprintType", "true" },
		{ "CRIT.Name", "EKafkaLogLevel::CRIT" },
		{ "CRIT.ToolTip", "CRIT" },
		{ "DEBUG.Name", "EKafkaLogLevel::DEBUG" },
		{ "DEBUG.ToolTip", "DEBUG" },
		{ "EMERG.Name", "EKafkaLogLevel::EMERG" },
		{ "EMERG.ToolTip", "EMERG" },
		{ "ERR.Name", "EKafkaLogLevel::ERR" },
		{ "ERR.ToolTip", "ERR" },
		{ "INFO.Name", "EKafkaLogLevel::INFO" },
		{ "INFO.ToolTip", "INFO" },
		{ "ModuleRelativePath", "Public/KafkaLogLevel.h" },
		{ "NOTICE.Name", "EKafkaLogLevel::NOTICE" },
		{ "NOTICE.ToolTip", "NOTICE" },
		{ "ToolTip", "Kafka Log Level" },
		{ "WARNING.Name", "EKafkaLogLevel::WARNING" },
		{ "WARNING.ToolTip", "WARNING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKafkaLogLevel::EMERG", (int64)EKafkaLogLevel::EMERG },
		{ "EKafkaLogLevel::ALERT", (int64)EKafkaLogLevel::ALERT },
		{ "EKafkaLogLevel::CRIT", (int64)EKafkaLogLevel::CRIT },
		{ "EKafkaLogLevel::ERR", (int64)EKafkaLogLevel::ERR },
		{ "EKafkaLogLevel::WARNING", (int64)EKafkaLogLevel::WARNING },
		{ "EKafkaLogLevel::NOTICE", (int64)EKafkaLogLevel::NOTICE },
		{ "EKafkaLogLevel::INFO", (int64)EKafkaLogLevel::INFO },
		{ "EKafkaLogLevel::DEBUG", (int64)EKafkaLogLevel::DEBUG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyKafka,
	nullptr,
	"EKafkaLogLevel",
	"EKafkaLogLevel",
	Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyKafka_EKafkaLogLevel()
{
	if (!Z_Registration_Info_UEnum_EKafkaLogLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKafkaLogLevel.InnerSingleton, Z_Construct_UEnum_EasyKafka_EKafkaLogLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKafkaLogLevel.InnerSingleton;
}
// End Enum EKafkaLogLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_KafkaLogLevel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKafkaLogLevel_StaticEnum, TEXT("EKafkaLogLevel"), &Z_Registration_Info_UEnum_EKafkaLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2422956938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_KafkaLogLevel_h_1271487049(TEXT("/Script/EasyKafka"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_KafkaLogLevel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_KafkaLogLevel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
