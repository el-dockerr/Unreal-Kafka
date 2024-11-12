// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonParseManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonParseManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonObject_NoRegister();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonParseManager();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonParseManager_NoRegister();
EASYJSONPARSER_API UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Class UEasyJsonParseManager Function LoadFromFile
struct Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics
{
	struct EasyJsonParseManager_eventLoadFromFile_Parms
	{
		FString FilePath;
		bool IsAblolute;
		EEasyJsonParserErrorCode Result;
		UEasyJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser" },
		{ "Comment", "/**\n\x09 * load Json file\n\x09 * @param FilePath - Json file path\n\x09 * @param IsAblolute - true:FilePath is absolute path, false:Relative path from \"Content\"\n\x09 * @return Json object\n\x09 */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/EasyJsonParseManager.h" },
		{ "ToolTip", "load Json file\n@param FilePath - Json file path\n@param IsAblolute - true:FilePath is absolute path, false:Relative path from \"Content\"\n@return Json object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_IsAblolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAblolute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_IsAblolute_SetBit(void* Obj)
{
	((EasyJsonParseManager_eventLoadFromFile_Parms*)Obj)->IsAblolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_IsAblolute = { "IsAblolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonParseManager_eventLoadFromFile_Parms), &Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_IsAblolute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromFile_Parms, Result), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode, METADATA_PARAMS(0, nullptr) }; // 1767759825
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromFile_Parms, ReturnValue), Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_IsAblolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonParseManager, nullptr, "LoadFromFile", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::EasyJsonParseManager_eventLoadFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::EasyJsonParseManager_eventLoadFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonParseManager::execLoadFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_IsAblolute);
	P_GET_ENUM_REF(EEasyJsonParserErrorCode,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEasyJsonObject**)Z_Param__Result=UEasyJsonParseManager::LoadFromFile(Z_Param_FilePath,Z_Param_IsAblolute,(EEasyJsonParserErrorCode&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEasyJsonParseManager Function LoadFromFile

// Begin Class UEasyJsonParseManager Function LoadFromString
struct Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics
{
	struct EasyJsonParseManager_eventLoadFromString_Parms
	{
		FString JsonString;
		EEasyJsonParserErrorCode Result;
		UEasyJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser" },
		{ "Comment", "/**\n\x09 * load Json string\n\x09 * @param JsonString - Json file path\n\x09 * @return Json object\n\x09 */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/EasyJsonParseManager.h" },
		{ "ToolTip", "load Json string\n@param JsonString - Json file path\n@return Json object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromString_Parms, Result), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserErrorCode, METADATA_PARAMS(0, nullptr) }; // 1767759825
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonParseManager_eventLoadFromString_Parms, ReturnValue), Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonParseManager, nullptr, "LoadFromString", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::EasyJsonParseManager_eventLoadFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::EasyJsonParseManager_eventLoadFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonParseManager::execLoadFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_ENUM_REF(EEasyJsonParserErrorCode,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEasyJsonObject**)Z_Param__Result=UEasyJsonParseManager::LoadFromString(Z_Param_JsonString,(EEasyJsonParserErrorCode&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEasyJsonParseManager Function LoadFromString

// Begin Class UEasyJsonParseManager
void UEasyJsonParseManager::StaticRegisterNativesUEasyJsonParseManager()
{
	UClass* Class = UEasyJsonParseManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadFromFile", &UEasyJsonParseManager::execLoadFromFile },
		{ "LoadFromString", &UEasyJsonParseManager::execLoadFromString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyJsonParseManager);
UClass* Z_Construct_UClass_UEasyJsonParseManager_NoRegister()
{
	return UEasyJsonParseManager::StaticClass();
}
struct Z_Construct_UClass_UEasyJsonParseManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EasyJsonParseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EasyJsonParseManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyJsonParseManager_LoadFromFile, "LoadFromFile" }, // 1096739792
		{ &Z_Construct_UFunction_UEasyJsonParseManager_LoadFromString, "LoadFromString" }, // 128253316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyJsonParseManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEasyJsonParseManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyJsonParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonParseManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyJsonParseManager_Statics::ClassParams = {
	&UEasyJsonParseManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonParseManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyJsonParseManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyJsonParseManager()
{
	if (!Z_Registration_Info_UClass_UEasyJsonParseManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyJsonParseManager.OuterSingleton, Z_Construct_UClass_UEasyJsonParseManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyJsonParseManager.OuterSingleton;
}
template<> EASYJSONPARSER_API UClass* StaticClass<UEasyJsonParseManager>()
{
	return UEasyJsonParseManager::StaticClass();
}
UEasyJsonParseManager::UEasyJsonParseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyJsonParseManager);
UEasyJsonParseManager::~UEasyJsonParseManager() {}
// End Class UEasyJsonParseManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyJsonParseManager, UEasyJsonParseManager::StaticClass, TEXT("UEasyJsonParseManager"), &Z_Registration_Info_UClass_UEasyJsonParseManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyJsonParseManager), 3269647306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_1658409265(TEXT("/Script/EasyJsonParser"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonParseManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
