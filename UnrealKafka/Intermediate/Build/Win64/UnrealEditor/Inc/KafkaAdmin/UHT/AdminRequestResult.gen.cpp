// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KafkaAdmin/Public/AdminRequestResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRequestResult() {}

// Begin Cross Module References
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRequestResult();
UPackage* Z_Construct_UPackage__Script_KafkaAdmin();
// End Cross Module References

// Begin ScriptStruct FAdminRequestResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdminRequestResult;
class UScriptStruct* FAdminRequestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdminRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdminRequestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRequestResult, (UObject*)Z_Construct_UPackage__Script_KafkaAdmin(), TEXT("AdminRequestResult"));
	}
	return Z_Registration_Info_UScriptStruct_AdminRequestResult.OuterSingleton;
}
template<> KAFKAADMIN_API UScriptStruct* StaticStruct<FAdminRequestResult>()
{
	return FAdminRequestResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAdminRequestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRequestResult.h" },
		{ "ShortToolTip", "Admin client request result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/AdminRequestResult.h" },
		{ "ShortToolTip", "Error message string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bError_MetaData[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "ModuleRelativePath", "Public/AdminRequestResult.h" },
		{ "ShortToolTip", "is there an error?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static void NewProp_bError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRequestResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdminRequestResult, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
void Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_bError_SetBit(void* Obj)
{
	((FAdminRequestResult*)Obj)->bError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAdminRequestResult), &Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_bError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bError_MetaData), NewProp_bError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRequestResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewProp_bError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRequestResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRequestResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KafkaAdmin,
	nullptr,
	&NewStructOps,
	"AdminRequestResult",
	Z_Construct_UScriptStruct_FAdminRequestResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRequestResult_Statics::PropPointers),
	sizeof(FAdminRequestResult),
	alignof(FAdminRequestResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRequestResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAdminRequestResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAdminRequestResult()
{
	if (!Z_Registration_Info_UScriptStruct_AdminRequestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdminRequestResult.InnerSingleton, Z_Construct_UScriptStruct_FAdminRequestResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AdminRequestResult.InnerSingleton;
}
// End ScriptStruct FAdminRequestResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_AdminRequestResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAdminRequestResult::StaticStruct, Z_Construct_UScriptStruct_FAdminRequestResult_Statics::NewStructOps, TEXT("AdminRequestResult"), &Z_Registration_Info_UScriptStruct_AdminRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdminRequestResult), 3645494797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_AdminRequestResult_h_368974837(TEXT("/Script/KafkaAdmin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_AdminRequestResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_KafkaAdmin_Public_AdminRequestResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
