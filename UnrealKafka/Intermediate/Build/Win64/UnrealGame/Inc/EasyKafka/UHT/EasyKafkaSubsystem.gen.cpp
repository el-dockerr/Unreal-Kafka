// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyKafka/Public/EasyKafkaSubsystem.h"
#include "KafkaAdmin/Public/AdminRequestResult.h"
#include "KafkaAdmin/Public/ListTopicsResult.h"
#include "KafkaAdmin/Public/TopicPartitionOffset.h"
#include "KafkaConsumer/Public/ConsumerCallback.h"
#include "KafkaConsumer/Public/ConsumerRecord.h"
#include "KafkaProducer/Public/ProducerCallback.h"
#include "KafkaProducer/Public/ProducerRecord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyKafkaSubsystem() {}

// Begin Cross Module References
EASYKAFKA_API UClass* Z_Construct_UClass_UEasyKafkaSubsystem();
EASYKAFKA_API UClass* Z_Construct_UClass_UEasyKafkaSubsystem_NoRegister();
EASYKAFKA_API UEnum* Z_Construct_UEnum_EasyKafka_EKafkaLogLevel();
EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature();
EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature();
EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature();
EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature();
EASYKAFKA_API UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
KAFKAADMIN_API UEnum* Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig();
KAFKAADMIN_API UEnum* Z_Construct_UEnum_KafkaAdmin_ETopicConfig();
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRequestResult();
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FListTopicsResult();
KAFKAADMIN_API UScriptStruct* Z_Construct_UScriptStruct_FTopicPartitionOffset();
KAFKACONSUMER_API UEnum* Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig();
KAFKACONSUMER_API UScriptStruct* Z_Construct_UScriptStruct_FConsumerCallback();
KAFKACONSUMER_API UScriptStruct* Z_Construct_UScriptStruct_FConsumerRecord();
KAFKAPRODUCER_API UEnum* Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig();
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FProducerCallback();
KAFKAPRODUCER_API UScriptStruct* Z_Construct_UScriptStruct_FProducerRecord();
UPackage* Z_Construct_UPackage__Script_EasyKafka();
// End Cross Module References

// Begin Delegate FConsumerError
struct Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics
{
	struct EasyKafkaSubsystem_eventConsumerError_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09              Consumer Note\n\x09""Don't use manual commit unless you go single thread\n\x09Instead of using Events\n\x09Otherwise you might end up reading the message twice.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Consumer Note\nDon't use manual commit unless you go single thread\nInstead of using Events\nOtherwise you might end up reading the message twice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventConsumerError_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ConsumerError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::EasyKafkaSubsystem_eventConsumerError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::EasyKafkaSubsystem_eventConsumerError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEasyKafkaSubsystem::FConsumerError_DelegateWrapper(const FMulticastScriptDelegate& ConsumerError, const FString& Error)
{
	struct EasyKafkaSubsystem_eventConsumerError_Parms
	{
		FString Error;
	};
	EasyKafkaSubsystem_eventConsumerError_Parms Parms;
	Parms.Error=Error;
	ConsumerError.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FConsumerError

// Begin Delegate FConsumingStopped
struct Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ConsumingStopped__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEasyKafkaSubsystem::FConsumingStopped_DelegateWrapper(const FMulticastScriptDelegate& ConsumingStopped)
{
	ConsumingStopped.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FConsumingStopped

// Begin Delegate FOnCommit
struct Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics
{
	struct EasyKafkaSubsystem_eventOnCommit_Parms
	{
		FConsumerCallback CommitCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommitCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::NewProp_CommitCallback = { "CommitCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventOnCommit_Parms, CommitCallback), Z_Construct_UScriptStruct_FConsumerCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitCallback_MetaData), NewProp_CommitCallback_MetaData) }; // 2196296089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::NewProp_CommitCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "OnCommit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEasyKafkaSubsystem::FOnCommit_DelegateWrapper(const FMulticastScriptDelegate& OnCommit, FConsumerCallback const& CommitCallback)
{
	struct EasyKafkaSubsystem_eventOnCommit_Parms
	{
		FConsumerCallback CommitCallback;
	};
	EasyKafkaSubsystem_eventOnCommit_Parms Parms;
	Parms.CommitCallback=CommitCallback;
	OnCommit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCommit

// Begin Delegate FOnNewMessage
struct Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics
{
	struct EasyKafkaSubsystem_eventOnNewMessage_Parms
	{
		TArray<FConsumerRecord> Messages;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConsumerRecord, METADATA_PARAMS(0, nullptr) }; // 308551498
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventOnNewMessage_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 308551498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::NewProp_Messages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "OnNewMessage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnNewMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnNewMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEasyKafkaSubsystem::FOnNewMessage_DelegateWrapper(const FMulticastScriptDelegate& OnNewMessage, TArray<FConsumerRecord> const& Messages)
{
	struct EasyKafkaSubsystem_eventOnNewMessage_Parms
	{
		TArray<FConsumerRecord> Messages;
	};
	EasyKafkaSubsystem_eventOnNewMessage_Parms Parms;
	Parms.Messages=Messages;
	OnNewMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNewMessage

// Begin Delegate FOnProduce
struct Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics
{
	struct EasyKafkaSubsystem_eventOnProduce_Parms
	{
		FProducerCallback ProduceCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProduceCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProduceCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::NewProp_ProduceCallback = { "ProduceCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventOnProduce_Parms, ProduceCallback), Z_Construct_UScriptStruct_FProducerCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProduceCallback_MetaData), NewProp_ProduceCallback_MetaData) }; // 2129135374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::NewProp_ProduceCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "OnProduce__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnProduce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::EasyKafkaSubsystem_eventOnProduce_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEasyKafkaSubsystem::FOnProduce_DelegateWrapper(const FMulticastScriptDelegate& OnProduce, FProducerCallback const& ProduceCallback)
{
	struct EasyKafkaSubsystem_eventOnProduce_Parms
	{
		FProducerCallback ProduceCallback;
	};
	EasyKafkaSubsystem_eventOnProduce_Parms Parms;
	Parms.ProduceCallback=ProduceCallback;
	OnProduce.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnProduce

// Begin Class UEasyKafkaSubsystem Function Commit
struct Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics
{
	struct EasyKafkaSubsystem_eventCommit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Commit" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Commit offsets synchronous.warning Blocking.might consume same record multiple times." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EasyKafkaSubsystem_eventCommit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyKafkaSubsystem_eventCommit_Parms), &Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "Commit", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::EasyKafkaSubsystem_eventCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::EasyKafkaSubsystem_eventCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_Commit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_Commit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCommit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Commit();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function Commit

// Begin Class UEasyKafkaSubsystem Function CommitAsync
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Commit Async" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CommitAsync", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCommitAsync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitAsync();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CommitAsync

// Begin Class UEasyKafkaSubsystem Function CreateAdmin
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics
{
	struct EasyKafkaSubsystem_eventCreateAdmin_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<EKafkaAdminConfig,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Admin Client" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Admin Client. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Configuration_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdmin_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdmin_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdmin_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KafkaAdmin_EKafkaAdminConfig, METADATA_PARAMS(0, nullptr) }; // 4018040998
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdmin_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4018040998
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdmin_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateAdmin", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::EasyKafkaSubsystem_eventCreateAdmin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::EasyKafkaSubsystem_eventCreateAdmin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateAdmin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(EKafkaAdminConfig,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAdmin(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateAdmin

// Begin Class UEasyKafkaSubsystem Function CreateAdminDefault
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics
{
	struct EasyKafkaSubsystem_eventCreateAdminDefault_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Admin Client" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Admin Client. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminDefault_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminDefault_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminDefault_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminDefault_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateAdminDefault", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::EasyKafkaSubsystem_eventCreateAdminDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::EasyKafkaSubsystem_eventCreateAdminDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateAdminDefault)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAdminDefault(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateAdminDefault

// Begin Class UEasyKafkaSubsystem Function CreateAdminStr
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics
{
	struct EasyKafkaSubsystem_eventCreateAdminStr_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<FString,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Admin Client" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Admin Client. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminStr_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminStr_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminStr_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminStr_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateAdminStr_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateAdminStr", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::EasyKafkaSubsystem_eventCreateAdminStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::EasyKafkaSubsystem_eventCreateAdminStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateAdminStr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(FString,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAdminStr(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateAdminStr

// Begin Class UEasyKafkaSubsystem Function CreateConsumer
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics
{
	struct EasyKafkaSubsystem_eventCreateConsumer_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<EKafkaConsumerConfig,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Consumer" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Consumer. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Configuration_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumer_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumer_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumer_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KafkaConsumer_EKafkaConsumerConfig, METADATA_PARAMS(0, nullptr) }; // 130576548
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumer_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 130576548
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumer_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateConsumer", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::EasyKafkaSubsystem_eventCreateConsumer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::EasyKafkaSubsystem_eventCreateConsumer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateConsumer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(EKafkaConsumerConfig,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateConsumer(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateConsumer

// Begin Class UEasyKafkaSubsystem Function CreateConsumerDefault
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics
{
	struct EasyKafkaSubsystem_eventCreateConsumerDefault_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Simple Consumer" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Consumer with user/password. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerDefault_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerDefault_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerDefault_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerDefault_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateConsumerDefault", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::EasyKafkaSubsystem_eventCreateConsumerDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::EasyKafkaSubsystem_eventCreateConsumerDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateConsumerDefault)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateConsumerDefault(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateConsumerDefault

// Begin Class UEasyKafkaSubsystem Function CreateConsumerSslPem
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics
{
	struct EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms
	{
		FString Servers;
		FString CertificateChain;
		FString KeyStoreKey;
		FString KeyPassword;
		FString TruststoreCertificate;
		TMap<FString,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Consumer with SSL PEM" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Consumer with SSL and PEM certificates. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CertificateChain;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyStoreKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyPassword;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TruststoreCertificate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_CertificateChain = { "CertificateChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, CertificateChain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KeyStoreKey = { "KeyStoreKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, KeyStoreKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KeyPassword = { "KeyPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, KeyPassword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_TruststoreCertificate = { "TruststoreCertificate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, TruststoreCertificate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_CertificateChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KeyStoreKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KeyPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_TruststoreCertificate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateConsumerSslPem", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::EasyKafkaSubsystem_eventCreateConsumerSslPem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateConsumerSslPem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_CertificateChain);
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyStoreKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyPassword);
	P_GET_PROPERTY(FStrProperty,Z_Param_TruststoreCertificate);
	P_GET_TMAP(FString,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateConsumerSslPem(Z_Param_Servers,Z_Param_CertificateChain,Z_Param_KeyStoreKey,Z_Param_KeyPassword,Z_Param_TruststoreCertificate,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateConsumerSslPem

// Begin Class UEasyKafkaSubsystem Function CreateConsumerStr
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics
{
	struct EasyKafkaSubsystem_eventCreateConsumerStr_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<FString,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Consumer" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka Consumer. Call it once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerStr_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerStr_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerStr_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerStr_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateConsumerStr_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateConsumerStr", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::EasyKafkaSubsystem_eventCreateConsumerStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::EasyKafkaSubsystem_eventCreateConsumerStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateConsumerStr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(FString,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateConsumerStr(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateConsumerStr

// Begin Class UEasyKafkaSubsystem Function CreateProducer
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics
{
	struct EasyKafkaSubsystem_eventCreateProducer_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<EKafkaProducerConfig,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Producer" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka producer. Call once!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Configuration_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducer_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducer_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducer_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KafkaProducer_EKafkaProducerConfig, METADATA_PARAMS(0, nullptr) }; // 1670915648
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducer_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1670915648
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducer_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateProducer", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::EasyKafkaSubsystem_eventCreateProducer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::EasyKafkaSubsystem_eventCreateProducer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateProducer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(EKafkaProducerConfig,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateProducer(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateProducer

// Begin Class UEasyKafkaSubsystem Function CreateProducerDefault
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics
{
	struct EasyKafkaSubsystem_eventCreateProducerDefault_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Producer" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka producer. Call once!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerDefault_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerDefault_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerDefault_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerDefault_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateProducerDefault", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::EasyKafkaSubsystem_eventCreateProducerDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::EasyKafkaSubsystem_eventCreateProducerDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateProducerDefault)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateProducerDefault(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateProducerDefault

// Begin Class UEasyKafkaSubsystem Function CreateProducerStr
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics
{
	struct EasyKafkaSubsystem_eventCreateProducerStr_Parms
	{
		FString Servers;
		FString UserName;
		FString Password;
		TMap<FString,FString> Configuration;
		EKafkaLogLevel KafkaLogLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "CPP_Default_KafkaLogLevel", "ERR" },
		{ "DisplayName", "Create Producer" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a kafka producer. Call once!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KafkaLogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KafkaLogLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerStr_Parms, Servers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerStr_Parms, UserName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerStr_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerStr_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_KafkaLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_KafkaLogLevel = { "KafkaLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateProducerStr_Parms, KafkaLogLevel), Z_Construct_UEnum_EasyKafka_EKafkaLogLevel, METADATA_PARAMS(0, nullptr) }; // 2422956938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Servers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_KafkaLogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::NewProp_KafkaLogLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateProducerStr", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::EasyKafkaSubsystem_eventCreateProducerStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::EasyKafkaSubsystem_eventCreateProducerStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateProducerStr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Servers);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_TMAP(FString,FString,Z_Param_Configuration);
	P_GET_ENUM(EKafkaLogLevel,Z_Param_KafkaLogLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateProducerStr(Z_Param_Servers,Z_Param_UserName,Z_Param_Password,Z_Param_Configuration,EKafkaLogLevel(Z_Param_KafkaLogLevel));
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateProducerStr

// Begin Class UEasyKafkaSubsystem Function CreateTopics
struct Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics
{
	struct EasyKafkaSubsystem_eventCreateTopics_Parms
	{
		TArray<FString> Topics;
		int32 NumPartitions;
		int32 ReplicationFactor;
		TMap<ETopicConfig,FString> Configuration;
		int32 Timeout;
		FAdminRequestResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_Timeout", "3000" },
		{ "DisplayName", "Create Topics" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Create a batch of topics with given configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Topics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPartitions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationFactor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Configuration_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Configuration_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Topics_Inner = { "Topics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Topics = { "Topics", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, Topics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topics_MetaData), NewProp_Topics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_NumPartitions = { "NumPartitions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, NumPartitions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_ReplicationFactor = { "ReplicationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, ReplicationFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_ValueProp = { "Configuration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_Key_KeyProp = { "Configuration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KafkaAdmin_ETopicConfig, METADATA_PARAMS(0, nullptr) }; // 1328958552
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, Configuration), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1328958552
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventCreateTopics_Parms, ReturnValue), Z_Construct_UScriptStruct_FAdminRequestResult, METADATA_PARAMS(0, nullptr) }; // 3645494797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Topics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Topics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_NumPartitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_ReplicationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "CreateTopics", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::EasyKafkaSubsystem_eventCreateTopics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::EasyKafkaSubsystem_eventCreateTopics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execCreateTopics)
{
	P_GET_TARRAY(FString,Z_Param_Topics);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPartitions);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReplicationFactor);
	P_GET_TMAP(ETopicConfig,FString,Z_Param_Configuration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAdminRequestResult*)Z_Param__Result=P_THIS->CreateTopics(Z_Param_Topics,Z_Param_NumPartitions,Z_Param_ReplicationFactor,Z_Param_Configuration,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function CreateTopics

// Begin Class UEasyKafkaSubsystem Function DeleteRecords
struct Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics
{
	struct EasyKafkaSubsystem_eventDeleteRecords_Parms
	{
		TArray<FTopicPartitionOffset> TopicPartitionOffsets;
		int32 Timeout;
		FAdminRequestResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_Timeout", "3000" },
		{ "DisplayName", "Delete Records" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Delete a batch of records." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicPartitionOffsets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopicPartitionOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TopicPartitionOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_TopicPartitionOffsets_Inner = { "TopicPartitionOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopicPartitionOffset, METADATA_PARAMS(0, nullptr) }; // 4248171852
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_TopicPartitionOffsets = { "TopicPartitionOffsets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteRecords_Parms, TopicPartitionOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicPartitionOffsets_MetaData), NewProp_TopicPartitionOffsets_MetaData) }; // 4248171852
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteRecords_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteRecords_Parms, ReturnValue), Z_Construct_UScriptStruct_FAdminRequestResult, METADATA_PARAMS(0, nullptr) }; // 3645494797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_TopicPartitionOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_TopicPartitionOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "DeleteRecords", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::EasyKafkaSubsystem_eventDeleteRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::EasyKafkaSubsystem_eventDeleteRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execDeleteRecords)
{
	P_GET_TARRAY(FTopicPartitionOffset,Z_Param_TopicPartitionOffsets);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAdminRequestResult*)Z_Param__Result=P_THIS->DeleteRecords(Z_Param_TopicPartitionOffsets,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function DeleteRecords

// Begin Class UEasyKafkaSubsystem Function DeleteTopics
struct Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics
{
	struct EasyKafkaSubsystem_eventDeleteTopics_Parms
	{
		TArray<FString> Topics;
		int32 Timeout;
		FAdminRequestResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_Timeout", "3000" },
		{ "DisplayName", "Delete Topics" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Delete a batch of topics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Topics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Topics_Inner = { "Topics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Topics = { "Topics", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteTopics_Parms, Topics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topics_MetaData), NewProp_Topics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteTopics_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventDeleteTopics_Parms, ReturnValue), Z_Construct_UScriptStruct_FAdminRequestResult, METADATA_PARAMS(0, nullptr) }; // 3645494797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Topics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Topics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "DeleteTopics", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::EasyKafkaSubsystem_eventDeleteTopics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::EasyKafkaSubsystem_eventDeleteTopics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execDeleteTopics)
{
	P_GET_TARRAY(FString,Z_Param_Topics);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAdminRequestResult*)Z_Param__Result=P_THIS->DeleteTopics(Z_Param_Topics,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function DeleteTopics

// Begin Class UEasyKafkaSubsystem Function FlushProducer
struct Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "Flush Producer" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Block until the previously sent messages have been delivered. Don't call on game thread." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "FlushProducer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execFlushProducer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushProducer();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function FlushProducer

// Begin Class UEasyKafkaSubsystem Function GetSubscription
struct Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics
{
	struct EasyKafkaSubsystem_eventGetSubscription_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Get Subscription" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Get all subscription topics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventGetSubscription_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "GetSubscription", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::EasyKafkaSubsystem_eventGetSubscription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::EasyKafkaSubsystem_eventGetSubscription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execGetSubscription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSubscription();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function GetSubscription

// Begin Class UEasyKafkaSubsystem Function ListTopics
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics
{
	struct EasyKafkaSubsystem_eventListTopics_Parms
	{
		int32 Timeout;
		FListTopicsResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Admin" },
		{ "CPP_Default_Timeout", "3000" },
		{ "DisplayName", "List Topics" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "List all the topics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventListTopics_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventListTopics_Parms, ReturnValue), Z_Construct_UScriptStruct_FListTopicsResult, METADATA_PARAMS(0, nullptr) }; // 1134013578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ListTopics", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::EasyKafkaSubsystem_eventListTopics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::EasyKafkaSubsystem_eventListTopics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execListTopics)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FListTopicsResult*)Z_Param__Result=P_THIS->ListTopics(Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ListTopics

// Begin Class UEasyKafkaSubsystem Function PauseConsuming
struct Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Pause Consuming" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Pause consuming records until ContinueConsuming is called." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "PauseConsuming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execPauseConsuming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseConsuming();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function PauseConsuming

// Begin Class UEasyKafkaSubsystem Function ProduceRecord
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics
{
	struct EasyKafkaSubsystem_eventProduceRecord_Parms
	{
		FString Topic;
		FString Value;
		int64 Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "CPP_Default_Id", "-1" },
		{ "DisplayName", "Produce Record" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Produce Single record" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecord_Parms, Topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecord_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecord_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ProduceRecord", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::EasyKafkaSubsystem_eventProduceRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::EasyKafkaSubsystem_eventProduceRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execProduceRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Topic);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY(FInt64Property,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProduceRecord(Z_Param_Topic,Z_Param_Value,Z_Param_Id);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ProduceRecord

// Begin Class UEasyKafkaSubsystem Function ProduceRecords
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics
{
	struct EasyKafkaSubsystem_eventProduceRecords_Parms
	{
		FString Topic;
		TMap<FString,int64> ValueIdPair;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "Produce Records" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Produce multiple records." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ValueIdPair_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueIdPair_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValueIdPair;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecords_Parms, Topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair_ValueProp = { "ValueIdPair", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair_Key_KeyProp = { "ValueIdPair_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair = { "ValueIdPair", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecords_Parms, ValueIdPair), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::NewProp_ValueIdPair,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ProduceRecords", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::EasyKafkaSubsystem_eventProduceRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::EasyKafkaSubsystem_eventProduceRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execProduceRecords)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Topic);
	P_GET_TMAP(FString,int64,Z_Param_ValueIdPair);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProduceRecords(Z_Param_Topic,Z_Param_ValueIdPair);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ProduceRecords

// Begin Class UEasyKafkaSubsystem Function ProduceRecordsStruct
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics
{
	struct EasyKafkaSubsystem_eventProduceRecordsStruct_Parms
	{
		TArray<FProducerRecord> Records;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "Produce Records" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Produce multiple records." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProducerRecord, METADATA_PARAMS(0, nullptr) }; // 3128312907
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecordsStruct_Parms, Records), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3128312907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::NewProp_Records_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::NewProp_Records,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ProduceRecordsStruct", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::EasyKafkaSubsystem_eventProduceRecordsStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::EasyKafkaSubsystem_eventProduceRecordsStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execProduceRecordsStruct)
{
	P_GET_TARRAY(FProducerRecord,Z_Param_Records);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProduceRecordsStruct(Z_Param_Records);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ProduceRecordsStruct

// Begin Class UEasyKafkaSubsystem Function ProduceRecordStruct
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics
{
	struct EasyKafkaSubsystem_eventProduceRecordStruct_Parms
	{
		FProducerRecord Record;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "Produce Record" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Produce Single record" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Record;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventProduceRecordStruct_Parms, Record), Z_Construct_UScriptStruct_FProducerRecord, METADATA_PARAMS(0, nullptr) }; // 3128312907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::NewProp_Record,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ProduceRecordStruct", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::EasyKafkaSubsystem_eventProduceRecordStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::EasyKafkaSubsystem_eventProduceRecordStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execProduceRecordStruct)
{
	P_GET_STRUCT(FProducerRecord,Z_Param_Record);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProduceRecordStruct(Z_Param_Record);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ProduceRecordStruct

// Begin Class UEasyKafkaSubsystem Function PurgeMessages
struct Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "Purge Messages" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Purge messages currently handled by producer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "PurgeMessages", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execPurgeMessages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PurgeMessages();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function PurgeMessages

// Begin Class UEasyKafkaSubsystem Function ResumeConsuming
struct Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Resume Consuming" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Resume consuming records after pause." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "ResumeConsuming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execResumeConsuming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeConsuming();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function ResumeConsuming

// Begin Class UEasyKafkaSubsystem Function SetGroupId
struct Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics
{
	struct EasyKafkaSubsystem_eventSetGroupId_Parms
	{
		FString GroupId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "SetGoupId" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Set group Id of this consumer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventSetGroupId_Parms, GroupId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::NewProp_GroupId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "SetGroupId", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::EasyKafkaSubsystem_eventSetGroupId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::EasyKafkaSubsystem_eventSetGroupId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execSetGroupId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroupId(Z_Param_GroupId);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function SetGroupId

// Begin Class UEasyKafkaSubsystem Function StartConsuming
struct Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics
{
	struct EasyKafkaSubsystem_eventStartConsuming_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Start Consuming" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Start Consuming async." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventStartConsuming_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "StartConsuming", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::EasyKafkaSubsystem_eventStartConsuming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::EasyKafkaSubsystem_eventStartConsuming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execStartConsuming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StartConsuming();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function StartConsuming

// Begin Class UEasyKafkaSubsystem Function StopConsuming
struct Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "Stop Consuming" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Stop Consuming async, OnStop callback called." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "StopConsuming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execStopConsuming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopConsuming();
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function StopConsuming

// Begin Class UEasyKafkaSubsystem Function Subscribe
struct Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics
{
	struct EasyKafkaSubsystem_eventSubscribe_Parms
	{
		TArray<FString> Topics;
		int32 Timeout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_Timeout", "1000" },
		{ "DisplayName", "Subscribe" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Subscribe to topics" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Topics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Topics_Inner = { "Topics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Topics = { "Topics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventSubscribe_Parms, Topics), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventSubscribe_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Topics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Topics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::NewProp_Timeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "Subscribe", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::EasyKafkaSubsystem_eventSubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::EasyKafkaSubsystem_eventSubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execSubscribe)
{
	P_GET_TARRAY(FString,Z_Param_Topics);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Subscribe(Z_Param_Topics,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function Subscribe

// Begin Class UEasyKafkaSubsystem Function Unsubscribe
struct Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics
{
	struct EasyKafkaSubsystem_eventUnsubscribe_Parms
	{
		int32 Timeout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "CPP_Default_Timeout", "1000" },
		{ "DisplayName", "Unsubscribe" },
		{ "Keywords", "EasyKafka sample test testing" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "Unsubscribe from all topics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyKafkaSubsystem_eventUnsubscribe_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::NewProp_Timeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyKafkaSubsystem, nullptr, "Unsubscribe", nullptr, nullptr, Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::EasyKafkaSubsystem_eventUnsubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::EasyKafkaSubsystem_eventUnsubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyKafkaSubsystem::execUnsubscribe)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unsubscribe(Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class UEasyKafkaSubsystem Function Unsubscribe

// Begin Class UEasyKafkaSubsystem
void UEasyKafkaSubsystem::StaticRegisterNativesUEasyKafkaSubsystem()
{
	UClass* Class = UEasyKafkaSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Commit", &UEasyKafkaSubsystem::execCommit },
		{ "CommitAsync", &UEasyKafkaSubsystem::execCommitAsync },
		{ "CreateAdmin", &UEasyKafkaSubsystem::execCreateAdmin },
		{ "CreateAdminDefault", &UEasyKafkaSubsystem::execCreateAdminDefault },
		{ "CreateAdminStr", &UEasyKafkaSubsystem::execCreateAdminStr },
		{ "CreateConsumer", &UEasyKafkaSubsystem::execCreateConsumer },
		{ "CreateConsumerDefault", &UEasyKafkaSubsystem::execCreateConsumerDefault },
		{ "CreateConsumerSslPem", &UEasyKafkaSubsystem::execCreateConsumerSslPem },
		{ "CreateConsumerStr", &UEasyKafkaSubsystem::execCreateConsumerStr },
		{ "CreateProducer", &UEasyKafkaSubsystem::execCreateProducer },
		{ "CreateProducerDefault", &UEasyKafkaSubsystem::execCreateProducerDefault },
		{ "CreateProducerStr", &UEasyKafkaSubsystem::execCreateProducerStr },
		{ "CreateTopics", &UEasyKafkaSubsystem::execCreateTopics },
		{ "DeleteRecords", &UEasyKafkaSubsystem::execDeleteRecords },
		{ "DeleteTopics", &UEasyKafkaSubsystem::execDeleteTopics },
		{ "FlushProducer", &UEasyKafkaSubsystem::execFlushProducer },
		{ "GetSubscription", &UEasyKafkaSubsystem::execGetSubscription },
		{ "ListTopics", &UEasyKafkaSubsystem::execListTopics },
		{ "PauseConsuming", &UEasyKafkaSubsystem::execPauseConsuming },
		{ "ProduceRecord", &UEasyKafkaSubsystem::execProduceRecord },
		{ "ProduceRecords", &UEasyKafkaSubsystem::execProduceRecords },
		{ "ProduceRecordsStruct", &UEasyKafkaSubsystem::execProduceRecordsStruct },
		{ "ProduceRecordStruct", &UEasyKafkaSubsystem::execProduceRecordStruct },
		{ "PurgeMessages", &UEasyKafkaSubsystem::execPurgeMessages },
		{ "ResumeConsuming", &UEasyKafkaSubsystem::execResumeConsuming },
		{ "SetGroupId", &UEasyKafkaSubsystem::execSetGroupId },
		{ "StartConsuming", &UEasyKafkaSubsystem::execStartConsuming },
		{ "StopConsuming", &UEasyKafkaSubsystem::execStopConsuming },
		{ "Subscribe", &UEasyKafkaSubsystem::execSubscribe },
		{ "Unsubscribe", &UEasyKafkaSubsystem::execUnsubscribe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyKafkaSubsystem);
UClass* Z_Construct_UClass_UEasyKafkaSubsystem_NoRegister()
{
	return UEasyKafkaSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEasyKafkaSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EasyKafkaSubsystem.h" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConsumerError_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "OnConsumerError" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "On consumer error callback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConsumingStopped_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "OnConsumeStopped" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "On Stop consuming callback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCommit_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "OnCommit" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "On Commit async callback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewMessage_MetaData[] = {
		{ "Category", "EasyKafka|Consumer" },
		{ "DisplayName", "OnNewMessage" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "On new messages consumed callback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageProduced_MetaData[] = {
		{ "Category", "EasyKafka|Producer" },
		{ "DisplayName", "OnMessageProduced" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/EasyKafkaSubsystem.h" },
		{ "ToolTip", "OnMessage produced callback.(failed/succeded)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsumerError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsumingStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCommit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageProduced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_Commit, "Commit" }, // 3367950346
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CommitAsync, "CommitAsync" }, // 749767589
		{ &Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature, "ConsumerError__DelegateSignature" }, // 900444556
		{ &Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature, "ConsumingStopped__DelegateSignature" }, // 1204094810
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdmin, "CreateAdmin" }, // 303476717
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminDefault, "CreateAdminDefault" }, // 4290780913
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateAdminStr, "CreateAdminStr" }, // 3048355290
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumer, "CreateConsumer" }, // 3736063767
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerDefault, "CreateConsumerDefault" }, // 3951249576
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerSslPem, "CreateConsumerSslPem" }, // 2317842594
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateConsumerStr, "CreateConsumerStr" }, // 3682129646
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducer, "CreateProducer" }, // 1652041000
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerDefault, "CreateProducerDefault" }, // 3296804794
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateProducerStr, "CreateProducerStr" }, // 631642897
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_CreateTopics, "CreateTopics" }, // 4065635699
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteRecords, "DeleteRecords" }, // 573353807
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_DeleteTopics, "DeleteTopics" }, // 3703223921
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_FlushProducer, "FlushProducer" }, // 660333685
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_GetSubscription, "GetSubscription" }, // 676285761
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ListTopics, "ListTopics" }, // 5470153
		{ &Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature, "OnCommit__DelegateSignature" }, // 3085199383
		{ &Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature, "OnNewMessage__DelegateSignature" }, // 1498070354
		{ &Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature, "OnProduce__DelegateSignature" }, // 4175569617
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_PauseConsuming, "PauseConsuming" }, // 2773554840
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecord, "ProduceRecord" }, // 4180556706
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecords, "ProduceRecords" }, // 2054713475
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordsStruct, "ProduceRecordsStruct" }, // 3294052390
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ProduceRecordStruct, "ProduceRecordStruct" }, // 1476942619
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_PurgeMessages, "PurgeMessages" }, // 2544568405
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_ResumeConsuming, "ResumeConsuming" }, // 2013474468
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_SetGroupId, "SetGroupId" }, // 1636758134
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_StartConsuming, "StartConsuming" }, // 1011262370
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_StopConsuming, "StopConsuming" }, // 4064167727
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_Subscribe, "Subscribe" }, // 4141610322
		{ &Z_Construct_UFunction_UEasyKafkaSubsystem_Unsubscribe, "Unsubscribe" }, // 4217282685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyKafkaSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnConsumerError = { "OnConsumerError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyKafkaSubsystem, OnConsumerError), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumerError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConsumerError_MetaData), NewProp_OnConsumerError_MetaData) }; // 900444556
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnConsumingStopped = { "OnConsumingStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyKafkaSubsystem, OnConsumingStopped), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_ConsumingStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConsumingStopped_MetaData), NewProp_OnConsumingStopped_MetaData) }; // 1204094810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnCommit = { "OnCommit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyKafkaSubsystem, OnCommit), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnCommit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCommit_MetaData), NewProp_OnCommit_MetaData) }; // 3085199383
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnNewMessage = { "OnNewMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyKafkaSubsystem, OnNewMessage), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnNewMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewMessage_MetaData), NewProp_OnNewMessage_MetaData) }; // 1498070354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnMessageProduced = { "OnMessageProduced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyKafkaSubsystem, OnMessageProduced), Z_Construct_UDelegateFunction_UEasyKafkaSubsystem_OnProduce__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageProduced_MetaData), NewProp_OnMessageProduced_MetaData) }; // 4175569617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyKafkaSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnConsumerError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnConsumingStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnNewMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyKafkaSubsystem_Statics::NewProp_OnMessageProduced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyKafkaSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyKafkaSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyKafka,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyKafkaSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyKafkaSubsystem_Statics::ClassParams = {
	&UEasyKafkaSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEasyKafkaSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyKafkaSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyKafkaSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyKafkaSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyKafkaSubsystem()
{
	if (!Z_Registration_Info_UClass_UEasyKafkaSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyKafkaSubsystem.OuterSingleton, Z_Construct_UClass_UEasyKafkaSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyKafkaSubsystem.OuterSingleton;
}
template<> EASYKAFKA_API UClass* StaticClass<UEasyKafkaSubsystem>()
{
	return UEasyKafkaSubsystem::StaticClass();
}
UEasyKafkaSubsystem::UEasyKafkaSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyKafkaSubsystem);
UEasyKafkaSubsystem::~UEasyKafkaSubsystem() {}
// End Class UEasyKafkaSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyKafkaSubsystem, UEasyKafkaSubsystem::StaticClass, TEXT("UEasyKafkaSubsystem"), &Z_Registration_Info_UClass_UEasyKafkaSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyKafkaSubsystem), 1023802741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_723492113(TEXT("/Script/EasyKafka"),
	Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
