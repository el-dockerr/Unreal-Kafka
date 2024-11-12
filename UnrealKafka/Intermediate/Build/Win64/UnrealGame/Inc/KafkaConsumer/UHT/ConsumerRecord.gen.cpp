// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaConsumer/Public/ConsumerRecord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsumerRecord() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
KAFKACONSUMER_API UScriptStruct* Z_Construct_UScriptStruct_FConsumerRecord();
UPackage* Z_Construct_UPackage__Script_KafkaConsumer();
// End Cross Module References

// Begin ScriptStruct FConsumerRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConsumerRecord;
class UScriptStruct* FConsumerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConsumerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConsumerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsumerRecord, (UObject*)Z_Construct_UPackage__Script_KafkaConsumer(), TEXT("ConsumerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ConsumerRecord.OuterSingleton;
}
template<> KAFKACONSUMER_API UScriptStruct* StaticStruct<FConsumerRecord>()
{
	return FConsumerRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConsumerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Kafka Consumer Record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Topic from where the record consumed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Partition from where the record consumed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Record offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Consuming timestamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Record headers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Record key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerRecord.h" },
		{ "ShortToolTip", "Record value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Partition;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsumerRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Partition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partition_MetaData), NewProp_Partition_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerRecord, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsumerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Partition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsumerRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaConsumer,
	nullptr,
	&NewStructOps,
	"ConsumerRecord",
	Z_Construct_UScriptStruct_FConsumerRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerRecord_Statics::PropPointers),
	sizeof(FConsumerRecord),
	alignof(FConsumerRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConsumerRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConsumerRecord()
{
	if (!Z_Registration_Info_UScriptStruct_ConsumerRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConsumerRecord.InnerSingleton, Z_Construct_UScriptStruct_FConsumerRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConsumerRecord.InnerSingleton;
}
// End ScriptStruct FConsumerRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerRecord_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConsumerRecord::StaticStruct, Z_Construct_UScriptStruct_FConsumerRecord_Statics::NewStructOps, TEXT("ConsumerRecord"), &Z_Registration_Info_UScriptStruct_ConsumerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsumerRecord), 308551498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerRecord_h_1808867330(TEXT("/Script/KafkaConsumer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerRecord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerRecord_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
