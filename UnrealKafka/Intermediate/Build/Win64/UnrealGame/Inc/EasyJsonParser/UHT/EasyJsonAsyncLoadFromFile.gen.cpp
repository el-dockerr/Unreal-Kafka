// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonAsyncLoadFromFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonAsyncLoadFromFile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromFile();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_NoRegister();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonObject_NoRegister();
EASYJSONPARSER_API UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Delegate FEasyJsonAsyncLoadFromFile_Result
struct Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics
{
	struct _Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms
	{
		UEasyJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms, JsonObject), Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyJsonParser, nullptr, "EasyJsonAsyncLoadFromFile_Result__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEasyJsonAsyncLoadFromFile_Result_DelegateWrapper(const FMulticastScriptDelegate& EasyJsonAsyncLoadFromFile_Result, UEasyJsonObject* JsonObject)
{
	struct _Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms
	{
		UEasyJsonObject* JsonObject;
	};
	_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromFile_Result_Parms Parms;
	Parms.JsonObject=JsonObject;
	EasyJsonAsyncLoadFromFile_Result.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEasyJsonAsyncLoadFromFile_Result

// Begin Class UEasyJsonAsyncLoadFromFile Function AsyncLoadFromFile
struct Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics
{
	struct EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms
	{
		UObject* WorldContextObject;
		FString FilePath;
		bool IsAblolute;
		UEasyJsonAsyncLoadFromFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyJsonParser" },
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_IsAblolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAblolute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_IsAblolute_SetBit(void* Obj)
{
	((EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms*)Obj)->IsAblolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_IsAblolute = { "IsAblolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms), &Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_IsAblolute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms, ReturnValue), Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_IsAblolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonAsyncLoadFromFile, nullptr, "AsyncLoadFromFile", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::EasyJsonAsyncLoadFromFile_eventAsyncLoadFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonAsyncLoadFromFile::execAsyncLoadFromFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_IsAblolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEasyJsonAsyncLoadFromFile**)Z_Param__Result=UEasyJsonAsyncLoadFromFile::AsyncLoadFromFile(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_IsAblolute);
	P_NATIVE_END;
}
// End Class UEasyJsonAsyncLoadFromFile Function AsyncLoadFromFile

// Begin Class UEasyJsonAsyncLoadFromFile
void UEasyJsonAsyncLoadFromFile::StaticRegisterNativesUEasyJsonAsyncLoadFromFile()
{
	UClass* Class = UEasyJsonAsyncLoadFromFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadFromFile", &UEasyJsonAsyncLoadFromFile::execAsyncLoadFromFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyJsonAsyncLoadFromFile);
UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_NoRegister()
{
	return UEasyJsonAsyncLoadFromFile::StaticClass();
}
struct Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EasyJsonAsyncLoadFromFile.h" },
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Successed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__JsonFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__IsAblolute_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Successed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
	static const UECodeGen_Private::FStrPropertyParams NewProp__JsonFile;
	static void NewProp__IsAblolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__IsAblolute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyJsonAsyncLoadFromFile_AsyncLoadFromFile, "AsyncLoadFromFile" }, // 351211172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyJsonAsyncLoadFromFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromFile, Successed), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Successed_MetaData), NewProp_Successed_MetaData) }; // 2861738694
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromFile, Failed), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) }; // 2861738694
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__JsonFile = { "_JsonFile", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromFile, _JsonFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__JsonFile_MetaData), NewProp__JsonFile_MetaData) };
void Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__IsAblolute_SetBit(void* Obj)
{
	((UEasyJsonAsyncLoadFromFile*)Obj)->_IsAblolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__IsAblolute = { "_IsAblolute", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyJsonAsyncLoadFromFile), &Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__IsAblolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__IsAblolute_MetaData), NewProp__IsAblolute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp_Successed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp_Failed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__JsonFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::NewProp__IsAblolute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyJsonParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::ClassParams = {
	&UEasyJsonAsyncLoadFromFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromFile()
{
	if (!Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromFile.OuterSingleton, Z_Construct_UClass_UEasyJsonAsyncLoadFromFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromFile.OuterSingleton;
}
template<> EASYJSONPARSER_API UClass* StaticClass<UEasyJsonAsyncLoadFromFile>()
{
	return UEasyJsonAsyncLoadFromFile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyJsonAsyncLoadFromFile);
UEasyJsonAsyncLoadFromFile::~UEasyJsonAsyncLoadFromFile() {}
// End Class UEasyJsonAsyncLoadFromFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyJsonAsyncLoadFromFile, UEasyJsonAsyncLoadFromFile::StaticClass, TEXT("UEasyJsonAsyncLoadFromFile"), &Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyJsonAsyncLoadFromFile), 256690222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_1631198394(TEXT("/Script/EasyJsonParser"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
