// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonParserEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonParserEnums() {}

// Begin Cross Module References
EASYJSONPARSER_API UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode();
EASYJSONPARSER_API UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Enum EEasyJsonParserErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasyJsonParserErrorCode;
static UEnum* EEasyJsonParserErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode, (UObject*)Z_Construct_UPackage__Script_EasyJsonParser(), TEXT("EEasyJsonParserErrorCode"));
	}
	return Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.OuterSingleton;
}
template<> EASYJSONPARSER_API UEnum* StaticEnum<EEasyJsonParserErrorCode>()
{
	return EEasyJsonParserErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EEasyJsonParserErrorCode::Failed" },
		{ "ModuleRelativePath", "Public/EasyJsonParserEnums.h" },
		{ "Successed.Name", "EEasyJsonParserErrorCode::Successed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEasyJsonParserErrorCode::Successed", (int64)EEasyJsonParserErrorCode::Successed },
		{ "EEasyJsonParserErrorCode::Failed", (int64)EEasyJsonParserErrorCode::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyJsonParser,
	nullptr,
	"EEasyJsonParserErrorCode",
	"EEasyJsonParserErrorCode",
	Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode()
{
	if (!Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.InnerSingleton, Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEasyJsonParserErrorCode.InnerSingleton;
}
// End Enum EEasyJsonParserErrorCode

// Begin Enum EEasyJsonParserFound
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasyJsonParserFound;
static UEnum* EEasyJsonParserFound_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEasyJsonParserFound.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEasyJsonParserFound.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound, (UObject*)Z_Construct_UPackage__Script_EasyJsonParser(), TEXT("EEasyJsonParserFound"));
	}
	return Z_Registration_Info_UEnum_EEasyJsonParserFound.OuterSingleton;
}
template<> EASYJSONPARSER_API UEnum* StaticEnum<EEasyJsonParserFound>()
{
	return EEasyJsonParserFound_StaticEnum();
}
struct Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Found.Name", "EEasyJsonParserFound::Found" },
		{ "ModuleRelativePath", "Public/EasyJsonParserEnums.h" },
		{ "NotFound.Name", "EEasyJsonParserFound::NotFound" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEasyJsonParserFound::Found", (int64)EEasyJsonParserFound::Found },
		{ "EEasyJsonParserFound::NotFound", (int64)EEasyJsonParserFound::NotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyJsonParser,
	nullptr,
	"EEasyJsonParserFound",
	"EEasyJsonParserFound",
	Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound()
{
	if (!Z_Registration_Info_UEnum_EEasyJsonParserFound.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasyJsonParserFound.InnerSingleton, Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEasyJsonParserFound.InnerSingleton;
}
// End Enum EEasyJsonParserFound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParserEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEasyJsonParserErrorCode_StaticEnum, TEXT("EEasyJsonParserErrorCode"), &Z_Registration_Info_UEnum_EEasyJsonParserErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1767759825U) },
		{ EEasyJsonParserFound_StaticEnum, TEXT("EEasyJsonParserFound"), &Z_Registration_Info_UEnum_EEasyJsonParserFound, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3307900651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParserEnums_h_3073958064(TEXT("/Script/EasyJsonParser"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParserEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParserEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
