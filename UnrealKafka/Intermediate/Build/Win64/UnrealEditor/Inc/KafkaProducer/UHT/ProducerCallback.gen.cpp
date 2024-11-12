// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaProducer/Public/ProducerCallback.h"
#include "KafkaProducer/Public/RecordMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProducerCallback() {}

// Begin Cross Module References
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FProducerCallback();
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FRecordMetadata();
UPackage* Z_Construct_UPackage__Script_KafkaProducer();
// End Cross Module References

// Begin ScriptStruct FProducerCallback
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProducerCallback;
class UScriptStruct* FProducerCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProducerCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProducerCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProducerCallback, (UObject*)Z_Construct_UPackage__Script_KafkaProducer(), TEXT("ProducerCallback"));
	}
	return Z_Registration_Info_UScriptStruct_ProducerCallback.OuterSingleton;
}
template<> KAFKAPRODUCER_API UScriptStruct* StaticStruct<FProducerCallback>()
{
	return FProducerCallback::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProducerCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProducerCallback.h" },
		{ "ShortToolTip", "Consumer Error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerCallback.h" },
		{ "ShortToolTip", "Error message string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bError_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerCallback.h" },
		{ "ShortToolTip", "is there an error?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordMetadata_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "ModuleRelativePath", "Public/ProducerCallback.h" },
		{ "ShortToolTip", "Record metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static void NewProp_bError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProducerCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerCallback, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
void Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_bError_SetBit(void* Obj)
{
	((FProducerCallback*)Obj)->bError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProducerCallback), &Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_bError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bError_MetaData), NewProp_bError_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_RecordMetadata = { "RecordMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProducerCallback, RecordMetadata), Z_Construct_UScriptStruct_FRecordMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordMetadata_MetaData), NewProp_RecordMetadata_MetaData) }; // 1474879162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProducerCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_bError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProducerCallback_Statics::NewProp_RecordMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProducerCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaProducer,
	nullptr,
	&NewStructOps,
	"ProducerCallback",
	Z_Construct_UScriptStruct_FProducerCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerCallback_Statics::PropPointers),
	sizeof(FProducerCallback),
	alignof(FProducerCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProducerCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProducerCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProducerCallback()
{
	if (!Z_Registration_Info_UScriptStruct_ProducerCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProducerCallback.InnerSingleton, Z_Construct_UScriptStruct_FProducerCallback_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProducerCallback.InnerSingleton;
}
// End ScriptStruct FProducerCallback

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerCallback_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProducerCallback::StaticStruct, Z_Construct_UScriptStruct_FProducerCallback_Statics::NewStructOps, TEXT("ProducerCallback"), &Z_Registration_Info_UScriptStruct_ProducerCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProducerCallback), 2129135374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerCallback_h_2077011919(TEXT("/Script/KafkaProducer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerCallback_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaProducer_Public_ProducerCallback_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
