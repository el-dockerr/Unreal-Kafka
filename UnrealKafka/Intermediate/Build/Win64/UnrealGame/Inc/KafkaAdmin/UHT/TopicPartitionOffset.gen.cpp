// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaAdmin/Public/TopicPartitionOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopicPartitionOffset() {}

// Begin Cross Module References
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FTopicPartitionOffset();
UPackage* Z_Construct_UPackage__Script_KafkaAdmin();
// End Cross Module References

// Begin ScriptStruct FTopicPartitionOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TopicPartitionOffset;
class UScriptStruct* FTopicPartitionOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TopicPartitionOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TopicPartitionOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTopicPartitionOffset, (UObject*)Z_Construct_UPackage__Script_KafkaAdmin(), TEXT("TopicPartitionOffset"));
	}
	return Z_Registration_Info_UScriptStruct_TopicPartitionOffset.OuterSingleton;
}
template<> KAFKAADMIN_API UScriptStruct* StaticStruct<FTopicPartitionOffset>()
{
	return FTopicPartitionOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TopicPartitionOffset.h" },
		{ "ShortToolTip", "Topic Partition pair" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/TopicPartitionOffset.h" },
		{ "ShortToolTip", "Topic string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/TopicPartitionOffset.h" },
		{ "ShortToolTip", "Partition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/TopicPartitionOffset.h" },
		{ "ShortToolTip", "Offset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Partition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTopicPartitionOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTopicPartitionOffset, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTopicPartitionOffset, Partition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partition_MetaData), NewProp_Partition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTopicPartitionOffset, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Partition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaAdmin,
	nullptr,
	&NewStructOps,
	"TopicPartitionOffset",
	Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::PropPointers),
	sizeof(FTopicPartitionOffset),
	alignof(FTopicPartitionOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTopicPartitionOffset()
{
	if (!Z_Registration_Info_UScriptStruct_TopicPartitionOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TopicPartitionOffset.InnerSingleton, Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TopicPartitionOffset.InnerSingleton;
}
// End ScriptStruct FTopicPartitionOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicPartitionOffset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTopicPartitionOffset::StaticStruct, Z_Construct_UScriptStruct_FTopicPartitionOffset_Statics::NewStructOps, TEXT("TopicPartitionOffset"), &Z_Registration_Info_UScriptStruct_TopicPartitionOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTopicPartitionOffset), 4248171852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicPartitionOffset_h_3807333434(TEXT("/Script/KafkaAdmin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicPartitionOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_TopicPartitionOffset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
