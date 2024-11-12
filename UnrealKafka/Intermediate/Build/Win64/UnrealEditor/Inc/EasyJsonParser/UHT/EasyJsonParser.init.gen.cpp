// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyJsonParser_init() {}
	EASYJSONPARSER_API UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature();
	EASYJSONPARSER_API UFunction* Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyJsonParser;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyJsonParser()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyJsonParser.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromFile_Result__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyJsonParser_EasyJsonAsyncLoadFromString_Result__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyJsonParser",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0E25EA27,
				0xAA21672D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyJsonParser.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyJsonParser.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyJsonParser(Z_Construct_UPackage__Script_EasyJsonParser, TEXT("/Script/EasyJsonParser"), Z_Registration_Info_UPackage__Script_EasyJsonParser, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0E25EA27, 0xAA21672D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
