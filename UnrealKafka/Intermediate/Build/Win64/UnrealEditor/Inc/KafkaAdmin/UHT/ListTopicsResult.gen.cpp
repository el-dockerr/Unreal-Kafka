// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaAdmin/Public/ListTopicsResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListTopicsResult() {}

// Begin Cross Module References
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FListTopicsResult();
UPackage* Z_Construct_UPackage__Script_KafkaAdmin();
// End Cross Module References

// Begin ScriptStruct FListTopicsResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ListTopicsResult;
class UScriptStruct* FListTopicsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ListTopicsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ListTopicsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FListTopicsResult, (UObject*)Z_Construct_UPackage__Script_KafkaAdmin(), TEXT("ListTopicsResult"));
	}
	return Z_Registration_Info_UScriptStruct_ListTopicsResult.OuterSingleton;
}
template<> KAFKAADMIN_API UScriptStruct* StaticStruct<FListTopicsResult>()
{
	return FListTopicsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FListTopicsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ListTopicsResult.h" },
		{ "ShortToolTip", "Admin client request result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/ListTopicsResult.h" },
		{ "ShortToolTip", "Error message string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bError_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/ListTopicsResult.h" },
		{ "ShortToolTip", "is there an error?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topics_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/ListTopicsResult.h" },
		{ "ShortToolTip", "List of topics" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static void NewProp_bError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Topics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FListTopicsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FListTopicsResult, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
void Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_bError_SetBit(void* Obj)
{
	((FListTopicsResult*)Obj)->bError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FListTopicsResult), &Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_bError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bError_MetaData), NewProp_bError_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_Topics_Inner = { "Topics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_Topics = { "Topics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FListTopicsResult, Topics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topics_MetaData), NewProp_Topics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FListTopicsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_bError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_Topics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewProp_Topics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListTopicsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FListTopicsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaAdmin,
	nullptr,
	&NewStructOps,
	"ListTopicsResult",
	Z_Construct_UScriptStruct_FListTopicsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListTopicsResult_Statics::PropPointers),
	sizeof(FListTopicsResult),
	alignof(FListTopicsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListTopicsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FListTopicsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FListTopicsResult()
{
	if (!Z_Registration_Info_UScriptStruct_ListTopicsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ListTopicsResult.InnerSingleton, Z_Construct_UScriptStruct_FListTopicsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ListTopicsResult.InnerSingleton;
}
// End ScriptStruct FListTopicsResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_ListTopicsResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FListTopicsResult::StaticStruct, Z_Construct_UScriptStruct_FListTopicsResult_Statics::NewStructOps, TEXT("ListTopicsResult"), &Z_Registration_Info_UScriptStruct_ListTopicsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FListTopicsResult), 1134013578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_ListTopicsResult_h_2225970448(TEXT("/Script/KafkaAdmin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_ListTopicsResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_ListTopicsResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
