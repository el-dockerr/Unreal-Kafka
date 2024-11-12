// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonAsyncLoadFromString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonAsyncLoadFromString() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromString();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromString_NoRegister();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonObject_NoRegister();
EASYJSONPARSER_API UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Delegate FEasyJsonAsyncLoadFromString_Result
struct Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics
{
	struct _Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms
	{
		UEasyJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms, JsonObject), Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyJsonParser, nullptr, "EasyJsonAsyncLoadFromString_Result__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEasyJsonAsyncLoadFromString_Result_DelegateWrapper(const FMulticastScriptDelegate& EasyJsonAsyncLoadFromString_Result, UEasyJsonObject* JsonObject)
{
	struct _Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms
	{
		UEasyJsonObject* JsonObject;
	};
	_Script_EasyJsonParser_eventEasyJsonAsyncLoadFromString_Result_Parms Parms;
	Parms.JsonObject=JsonObject;
	EasyJsonAsyncLoadFromString_Result.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEasyJsonAsyncLoadFromString_Result

// Begin Class UEasyJsonAsyncLoadFromString Function AsyncLoadFromString
struct Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics
{
	struct EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms
	{
		UObject* WorldContextObject;
		FString JsonString;
		UEasyJsonAsyncLoadFromString* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyJsonParser" },
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms, ReturnValue), Z_Construct_UClass_UEasyJsonAsyncLoadFromString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonAsyncLoadFromString, nullptr, "AsyncLoadFromString", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::EasyJsonAsyncLoadFromString_eventAsyncLoadFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonAsyncLoadFromString::execAsyncLoadFromString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEasyJsonAsyncLoadFromString**)Z_Param__Result=UEasyJsonAsyncLoadFromString::AsyncLoadFromString(Z_Param_WorldContextObject,Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class UEasyJsonAsyncLoadFromString Function AsyncLoadFromString

// Begin Class UEasyJsonAsyncLoadFromString
void UEasyJsonAsyncLoadFromString::StaticRegisterNativesUEasyJsonAsyncLoadFromString()
{
	UClass* Class = UEasyJsonAsyncLoadFromString::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadFromString", &UEasyJsonAsyncLoadFromString::execAsyncLoadFromString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyJsonAsyncLoadFromString);
UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromString_NoRegister()
{
	return UEasyJsonAsyncLoadFromString::StaticClass();
}
struct Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EasyJsonAsyncLoadFromString.h" },
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Successed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__JsonString_MetaData[] = {
		{ "ModuleRelativePath", "Public/EasyJsonAsyncLoadFromString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Successed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
	static const UECodeGen_Private::FStrPropertyParams NewProp__JsonString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyJsonAsyncLoadFromString_AsyncLoadFromString, "AsyncLoadFromString" }, // 2711847283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyJsonAsyncLoadFromString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromString, Successed), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Successed_MetaData), NewProp_Successed_MetaData) }; // 506214705
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromString, Failed), Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) }; // 506214705
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp__JsonString = { "_JsonString", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyJsonAsyncLoadFromString, _JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__JsonString_MetaData), NewProp__JsonString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp_Successed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp_Failed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::NewProp__JsonString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyJsonParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::ClassParams = {
	&UEasyJsonAsyncLoadFromString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyJsonAsyncLoadFromString()
{
	if (!Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromString.OuterSingleton, Z_Construct_UClass_UEasyJsonAsyncLoadFromString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromString.OuterSingleton;
}
template<> EASYJSONPARSER_API UClass* StaticClass<UEasyJsonAsyncLoadFromString>()
{
	return UEasyJsonAsyncLoadFromString::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyJsonAsyncLoadFromString);
UEasyJsonAsyncLoadFromString::~UEasyJsonAsyncLoadFromString() {}
// End Class UEasyJsonAsyncLoadFromString

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyJsonAsyncLoadFromString, UEasyJsonAsyncLoadFromString::StaticClass, TEXT("UEasyJsonAsyncLoadFromString"), &Z_Registration_Info_UClass_UEasyJsonAsyncLoadFromString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyJsonAsyncLoadFromString), 4008596115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_433247908(TEXT("/Script/EasyJsonParser"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonAsyncLoadFromString_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
