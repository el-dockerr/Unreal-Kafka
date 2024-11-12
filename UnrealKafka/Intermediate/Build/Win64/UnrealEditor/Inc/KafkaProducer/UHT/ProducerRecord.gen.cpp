// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaProducer/Public/ProducerRecord.h"
#include "KafkaProducer/Public/RecordHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProducerRecord() {}

// Begin Cross Module References
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FProducerRecord();
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FRecordHeader();
UPackage* Z_Construct_UPackage__Script_KafkaProducer();
// End Cross Module References

// Begin ScriptStruct FProducerRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProducerRecord;
class UScriptStruct* FProducerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProducerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProducerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProducerRecord, (UObject*)Z_Construct_UPackage__Script_KafkaProducer(), TEXT("ProducerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ProducerRecord.OuterSingleton;
}
template<> KAFKAPRODUCER_API UScriptStruct* StaticStruct<FProducerRecord>()
{
	return FProducerRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProducerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Kafka Consumer Record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Topic to push to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Partition to push to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Record headers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Record Key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Record Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerRecord.h" },
		{ "ShortToolTip", "Unique record id to identify this record on callback" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Partition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProducerRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Partition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partition_MetaData), NewProp_Partition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Headers), Z_Construct_UScriptStruct_FRecordHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) }; // 1227841014
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerRecord, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProducerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Partition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerRecord_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProducerRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaProducer,
	nullptr,
	&NewStructOps,
	"ProducerRecord",
	Z_Construct_UScriptStruct_FProducerRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerRecord_Statics::PropPointers),
	sizeof(FProducerRecord),
	alignof(FProducerRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProducerRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProducerRecord()
{
	if (!Z_Registration_Info_UScriptStruct_ProducerRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProducerRecord.InnerSingleton, Z_Construct_UScriptStruct_FProducerRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProducerRecord.InnerSingleton;
}
// End ScriptStruct FProducerRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerRecord_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProducerRecord::StaticStruct, Z_Construct_UScriptStruct_FProducerRecord_Statics::NewStructOps, TEXT("ProducerRecord"), &Z_Registration_Info_UScriptStruct_ProducerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProducerRecord), 3128312907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerRecord_h_2038727398(TEXT("/Script/KafkaProducer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerRecord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerRecord_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
