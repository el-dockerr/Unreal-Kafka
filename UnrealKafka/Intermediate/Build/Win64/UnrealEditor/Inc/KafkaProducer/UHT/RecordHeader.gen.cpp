// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaProducer/Public/RecordHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordHeader() {}

// Begin Cross Module References
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FRecordHeader();
UPackage* Z_Construct_UPackage__Script_KafkaProducer();
// End Cross Module References

// Begin ScriptStruct FRecordHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordHeader;
class UScriptStruct* FRecordHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordHeader, (UObject*)Z_Construct_UPackage__Script_KafkaProducer(), TEXT("RecordHeader"));
	}
	return Z_Registration_Info_UScriptStruct_RecordHeader.OuterSingleton;
}
template<> KAFKAPRODUCER_API UScriptStruct* StaticStruct<FRecordHeader>()
{
	return FRecordHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RecordHeader.h" },
		{ "ShortToolTip", "Kafka producer record Header" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntHeaders_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordHeader.h" },
		{ "ShortToolTip", "List of key value int headers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrHeaders_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordHeader.h" },
		{ "ShortToolTip", "List of key value string headers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntHeaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntHeaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IntHeaders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StrHeaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StrHeaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StrHeaders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders_ValueProp = { "IntHeaders", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders_Key_KeyProp = { "IntHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders = { "IntHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordHeader, IntHeaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntHeaders_MetaData), NewProp_IntHeaders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders_ValueProp = { "StrHeaders", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders_Key_KeyProp = { "StrHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders = { "StrHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordHeader, StrHeaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrHeaders_MetaData), NewProp_StrHeaders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_IntHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordHeader_Statics::NewProp_StrHeaders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaProducer,
	nullptr,
	&NewStructOps,
	"RecordHeader",
	Z_Construct_UScriptStruct_FRecordHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordHeader_Statics::PropPointers),
	sizeof(FRecordHeader),
	alignof(FRecordHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordHeader()
{
	if (!Z_Registration_Info_UScriptStruct_RecordHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordHeader.InnerSingleton, Z_Construct_UScriptStruct_FRecordHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordHeader.InnerSingleton;
}
// End ScriptStruct FRecordHeader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordHeader_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecordHeader::StaticStruct, Z_Construct_UScriptStruct_FRecordHeader_Statics::NewStructOps, TEXT("RecordHeader"), &Z_Registration_Info_UScriptStruct_RecordHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordHeader), 1227841014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordHeader_h_2793097740(TEXT("/Script/KafkaProducer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordHeader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordHeader_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
