// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaProducer/Public/RecordMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordMetadata() {}

// Begin Cross Module References
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FRecordMetadata();
UPackage* Z_Construct_UPackage__Script_KafkaProducer();
// End Cross Module References

// Begin ScriptStruct FRecordMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordMetadata;
class UScriptStruct* FRecordMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordMetadata, (UObject*)Z_Construct_UPackage__Script_KafkaProducer(), TEXT("RecordMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RecordMetadata.OuterSingleton;
}
template<> KAFKAPRODUCER_API UScriptStruct* StaticStruct<FRecordMetadata>()
{
	return FRecordMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RecordMetadata.h" },
		{ "ShortToolTip", "Kafka producer record Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordId_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/RecordMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Partition;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordMetadata, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordMetadata, Partition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partition_MetaData), NewProp_Partition_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordMetadata, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordMetadata, RecordId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordId_MetaData), NewProp_RecordId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Partition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewProp_RecordId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaProducer,
	nullptr,
	&NewStructOps,
	"RecordMetadata",
	Z_Construct_UScriptStruct_FRecordMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordMetadata_Statics::PropPointers),
	sizeof(FRecordMetadata),
	alignof(FRecordMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RecordMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRecordMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordMetadata.InnerSingleton;
}
// End ScriptStruct FRecordMetadata

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordMetadata_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecordMetadata::StaticStruct, Z_Construct_UScriptStruct_FRecordMetadata_Statics::NewStructOps, TEXT("RecordMetadata"), &Z_Registration_Info_UScriptStruct_RecordMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordMetadata), 1474879162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordMetadata_h_2983642743(TEXT("/Script/KafkaProducer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_RecordMetadata_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
