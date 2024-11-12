// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonValue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonValue();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Class UEasyJsonValue Function GetBoolValue
struct Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics
{
	struct EasyJsonValue_eventGetBoolValue_Parms
	{
		bool DefaultValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|GetValue" },
		{ "CPP_Default_DefaultValue", "false" },
		{ "ModuleRelativePath", "Public/EasyJsonValue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((EasyJsonValue_eventGetBoolValue_Parms*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonValue_eventGetBoolValue_Parms), &Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EasyJsonValue_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonValue_eventGetBoolValue_Parms), &Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonValue, nullptr, "GetBoolValue", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::EasyJsonValue_eventGetBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::EasyJsonValue_eventGetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonValue_GetBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonValue_GetBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonValue::execGetBoolValue)
{
	P_GET_UBOOL(Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolValue(Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonValue Function GetBoolValue

// Begin Class UEasyJsonValue Function GetFloatValue
struct Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics
{
	struct EasyJsonValue_eventGetFloatValue_Parms
	{
		float DefaultValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|GetValue" },
		{ "CPP_Default_DefaultValue", "0.000000" },
		{ "ModuleRelativePath", "Public/EasyJsonValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetFloatValue_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonValue, nullptr, "GetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::EasyJsonValue_eventGetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::EasyJsonValue_eventGetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonValue_GetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonValue_GetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonValue::execGetFloatValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonValue Function GetFloatValue

// Begin Class UEasyJsonValue Function GetIntValue
struct Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics
{
	struct EasyJsonValue_eventGetIntValue_Parms
	{
		int32 DefaultValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|GetValue" },
		{ "CPP_Default_DefaultValue", "0" },
		{ "ModuleRelativePath", "Public/EasyJsonValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetIntValue_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonValue, nullptr, "GetIntValue", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::EasyJsonValue_eventGetIntValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::EasyJsonValue_eventGetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonValue_GetIntValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonValue_GetIntValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonValue::execGetIntValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntValue(Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonValue Function GetIntValue

// Begin Class UEasyJsonValue Function GetStringValue
struct Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics
{
	struct EasyJsonValue_eventGetStringValue_Parms
	{
		FString DefaultValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|GetValue" },
		{ "CPP_Default_DefaultValue", "" },
		{ "ModuleRelativePath", "Public/EasyJsonValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetStringValue_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonValue_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonValue, nullptr, "GetStringValue", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::EasyJsonValue_eventGetStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::EasyJsonValue_eventGetStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonValue_GetStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonValue_GetStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonValue::execGetStringValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringValue(Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonValue Function GetStringValue

// Begin Class UEasyJsonValue
void UEasyJsonValue::StaticRegisterNativesUEasyJsonValue()
{
	UClass* Class = UEasyJsonValue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoolValue", &UEasyJsonValue::execGetBoolValue },
		{ "GetFloatValue", &UEasyJsonValue::execGetFloatValue },
		{ "GetIntValue", &UEasyJsonValue::execGetIntValue },
		{ "GetStringValue", &UEasyJsonValue::execGetStringValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyJsonValue);
UClass* Z_Construct_UClass_UEasyJsonValue_NoRegister()
{
	return UEasyJsonValue::StaticClass();
}
struct Z_Construct_UClass_UEasyJsonValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EasyJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EasyJsonValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyJsonValue_GetBoolValue, "GetBoolValue" }, // 4110596173
		{ &Z_Construct_UFunction_UEasyJsonValue_GetFloatValue, "GetFloatValue" }, // 4191689988
		{ &Z_Construct_UFunction_UEasyJsonValue_GetIntValue, "GetIntValue" }, // 683847330
		{ &Z_Construct_UFunction_UEasyJsonValue_GetStringValue, "GetStringValue" }, // 3550149932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyJsonValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEasyJsonValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyJsonParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyJsonValue_Statics::ClassParams = {
	&UEasyJsonValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyJsonValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyJsonValue()
{
	if (!Z_Registration_Info_UClass_UEasyJsonValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyJsonValue.OuterSingleton, Z_Construct_UClass_UEasyJsonValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyJsonValue.OuterSingleton;
}
template<> EASYJSONPARSER_API UClass* StaticClass<UEasyJsonValue>()
{
	return UEasyJsonValue::StaticClass();
}
UEasyJsonValue::UEasyJsonValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyJsonValue);
UEasyJsonValue::~UEasyJsonValue() {}
// End Class UEasyJsonValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyJsonValue, UEasyJsonValue::StaticClass, TEXT("UEasyJsonValue"), &Z_Registration_Info_UClass_UEasyJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyJsonValue), 269412991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_2760272800(TEXT("/Script/EasyJsonParser"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
