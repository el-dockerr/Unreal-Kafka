// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaConsumer/Public/ConsumerCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsumerCallback() {}

// Begin Cross Module References
KAFKACONSUMER_API UScriptStruct* Z_Construct_UScriptStruct_FConsumerCallback();
UPackage* Z_Construct_UPackage__Script_KafkaConsumer();
// End Cross Module References

// Begin ScriptStruct FConsumerCallback
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConsumerCallback;
class UScriptStruct* FConsumerCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConsumerCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConsumerCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsumerCallback, (UObject*)Z_Construct_UPackage__Script_KafkaConsumer(), TEXT("ConsumerCallback"));
	}
	return Z_Registration_Info_UScriptStruct_ConsumerCallback.OuterSingleton;
}
template<> KAFKACONSUMER_API UScriptStruct* StaticStruct<FConsumerCallback>()
{
	return FConsumerCallback::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConsumerCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConsumerCallback.h" },
		{ "ShortToolTip", "Consumer Error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerCallback.h" },
		{ "ShortToolTip", "Error message string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bError_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerCallback.h" },
		{ "ShortToolTip", "is there an error?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicPartitionOffsets_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "ModuleRelativePath", "Public/ConsumerCallback.h" },
		{ "ShortToolTip", "Offsets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static void NewProp_bError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TopicPartitionOffsets_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicPartitionOffsets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TopicPartitionOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsumerCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerCallback, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
void Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_bError_SetBit(void* Obj)
{
	((FConsumerCallback*)Obj)->bError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConsumerCallback), &Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_bError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bError_MetaData), NewProp_bError_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets_ValueProp = { "TopicPartitionOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets_Key_KeyProp = { "TopicPartitionOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets = { "TopicPartitionOffsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumerCallback, TopicPartitionOffsets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicPartitionOffsets_MetaData), NewProp_TopicPartitionOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsumerCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_bError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewProp_TopicPartitionOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsumerCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaConsumer,
	nullptr,
	&NewStructOps,
	"ConsumerCallback",
	Z_Construct_UScriptStruct_FConsumerCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerCallback_Statics::PropPointers),
	sizeof(FConsumerCallback),
	alignof(FConsumerCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsumerCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConsumerCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConsumerCallback()
{
	if (!Z_Registration_Info_UScriptStruct_ConsumerCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConsumerCallback.InnerSingleton, Z_Construct_UScriptStruct_FConsumerCallback_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConsumerCallback.InnerSingleton;
}
// End ScriptStruct FConsumerCallback

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerCallback_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConsumerCallback::StaticStruct, Z_Construct_UScriptStruct_FConsumerCallback_Statics::NewStructOps, TEXT("ConsumerCallback"), &Z_Registration_Info_UScriptStruct_ConsumerCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsumerCallback), 2196296089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerCallback_h_3826261434(TEXT("/Script/KafkaConsumer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerCallback_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaConsumer_Public_ConsumerCallback_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
