// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyKafka_init() {}
	EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature();
	EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature();
	EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature();
	EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature();
	EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyKafka;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyKafka()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyKafka.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyKafka",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC26C1BBE,
				0x2E650F9B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyKafka.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyKafka.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyKafka(Z_Construct_UPackage__Script_EasyKafka, TEXT("/Script/EasyKafka"), Z_Registration_Info_UPackage__Script_EasyKafka, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC26C1BBE, 0x2E650F9B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
