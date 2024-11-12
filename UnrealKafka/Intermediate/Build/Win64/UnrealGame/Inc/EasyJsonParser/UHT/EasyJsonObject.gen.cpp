// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyJsonParser/Public/EasyJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonObject();
EASYJSONPARSER_API UClass* Z_Construct_UClass_UEasyJsonObject_NoRegister();
EASYJSONPARSER_API UEnum* Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound();
UPackage* Z_Construct_UPackage__Script_EasyJsonParser();
// End Cross Module References

// Begin Class UEasyJsonObject Function ReadBool
struct Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics
{
	struct EasyJsonObject_eventReadBool_Parms
	{
		FString AccessString;
		bool DefaultValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "CPP_Default_DefaultValue", "false" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadBool_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
void Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((EasyJsonObject_eventReadBool_Parms*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonObject_eventReadBool_Parms), &Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EasyJsonObject_eventReadBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyJsonObject_eventReadBool_Parms), &Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadBool", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::EasyJsonObject_eventReadBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::EasyJsonObject_eventReadBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_UBOOL(Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_AccessString,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadBool

// Begin Class UEasyJsonObject Function ReadFloat
struct Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics
{
	struct EasyJsonObject_eventReadFloat_Parms
	{
		FString AccessString;
		float DefaultValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "CPP_Default_DefaultValue", "0.000000" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadFloat_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadFloat_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadFloat", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::EasyJsonObject_eventReadFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::EasyJsonObject_eventReadFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_AccessString,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadFloat

// Begin Class UEasyJsonObject Function ReadInt
struct Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics
{
	struct EasyJsonObject_eventReadInt_Parms
	{
		FString AccessString;
		int32 DefaultValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "CPP_Default_DefaultValue", "0" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadInt_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadInt_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadInt", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::EasyJsonObject_eventReadInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::EasyJsonObject_eventReadInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ReadInt(Z_Param_AccessString,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadInt

// Begin Class UEasyJsonObject Function ReadObject
struct Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics
{
	struct EasyJsonObject_eventReadObject_Parms
	{
		FString AccessString;
		EEasyJsonParserFound Result;
		UEasyJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObject_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObject_Parms, Result), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound, METADATA_PARAMS(0, nullptr) }; // 3307900651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObject_Parms, ReturnValue), Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadObject", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::EasyJsonObject_eventReadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::EasyJsonObject_eventReadObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadObject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_ENUM_REF(EEasyJsonParserFound,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEasyJsonObject**)Z_Param__Result=P_THIS->ReadObject(Z_Param_AccessString,(EEasyJsonParserFound&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadObject

// Begin Class UEasyJsonObject Function ReadObjects
struct Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics
{
	struct EasyJsonObject_eventReadObjects_Parms
	{
		FString AccessString;
		EEasyJsonParserFound Result;
		TArray<UEasyJsonObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObjects_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObjects_Parms, Result), Z_Construct_UEnum_EasyJsonParser_EEasyJsonParserFound, METADATA_PARAMS(0, nullptr) }; // 3307900651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEasyJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadObjects", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::EasyJsonObject_eventReadObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::EasyJsonObject_eventReadObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadObjects)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_ENUM_REF(EEasyJsonParserFound,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UEasyJsonObject*>*)Z_Param__Result=P_THIS->ReadObjects(Z_Param_AccessString,(EEasyJsonParserFound&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadObjects

// Begin Class UEasyJsonObject Function ReadString
struct Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics
{
	struct EasyJsonObject_eventReadString_Parms
	{
		FString AccessString;
		FString DefaultValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyJsonParser|ReadValue" },
		{ "CPP_Default_DefaultValue", "" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_AccessString = { "AccessString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadString_Parms, AccessString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessString_MetaData), NewProp_AccessString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadString_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyJsonObject_eventReadString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_AccessString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyJsonObject, nullptr, "ReadString", nullptr, nullptr, Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::EasyJsonObject_eventReadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::EasyJsonObject_eventReadString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyJsonObject_ReadString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyJsonObject_ReadString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyJsonObject::execReadString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessString);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReadString(Z_Param_AccessString,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UEasyJsonObject Function ReadString

// Begin Class UEasyJsonObject
void UEasyJsonObject::StaticRegisterNativesUEasyJsonObject()
{
	UClass* Class = UEasyJsonObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadBool", &UEasyJsonObject::execReadBool },
		{ "ReadFloat", &UEasyJsonObject::execReadFloat },
		{ "ReadInt", &UEasyJsonObject::execReadInt },
		{ "ReadObject", &UEasyJsonObject::execReadObject },
		{ "ReadObjects", &UEasyJsonObject::execReadObjects },
		{ "ReadString", &UEasyJsonObject::execReadString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyJsonObject);
UClass* Z_Construct_UClass_UEasyJsonObject_NoRegister()
{
	return UEasyJsonObject::StaticClass();
}
struct Z_Construct_UClass_UEasyJsonObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EasyJsonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EasyJsonObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadBool, "ReadBool" }, // 996829958
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadFloat, "ReadFloat" }, // 970978134
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadInt, "ReadInt" }, // 3389548617
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadObject, "ReadObject" }, // 3552576439
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadObjects, "ReadObjects" }, // 1676089254
		{ &Z_Construct_UFunction_UEasyJsonObject_ReadString, "ReadString" }, // 2677459135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyJsonObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEasyJsonObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyJsonParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyJsonObject_Statics::ClassParams = {
	&UEasyJsonObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyJsonObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyJsonObject()
{
	if (!Z_Registration_Info_UClass_UEasyJsonObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyJsonObject.OuterSingleton, Z_Construct_UClass_UEasyJsonObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyJsonObject.OuterSingleton;
}
template<> EASYJSONPARSER_API UClass* StaticClass<UEasyJsonObject>()
{
	return UEasyJsonObject::StaticClass();
}
UEasyJsonObject::UEasyJsonObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyJsonObject);
UEasyJsonObject::~UEasyJsonObject() {}
// End Class UEasyJsonObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyJsonObject, UEasyJsonObject::StaticClass, TEXT("UEasyJsonObject"), &Z_Registration_Info_UClass_UEasyJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyJsonObject), 1760164381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_3367439375(TEXT("/Script/EasyJsonParser"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyJsonParser_Public_EasyJsonObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
