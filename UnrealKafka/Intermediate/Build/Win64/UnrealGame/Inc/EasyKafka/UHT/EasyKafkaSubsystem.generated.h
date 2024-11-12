// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyKafkaSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EKafkaAdminConfig : uint8; 
enum class EKafkaConsumerConfig : uint8; 
enum class EKafkaLogLevel : uint8;
enum class EKafkaProducerConfig : uint8; 
enum class ETopicConfig : uint8; 
struct FAdminRequestResult;
struct FConsumerCallback;
struct FConsumerRecord;
struct FListTopicsResult;
struct FProducerCallback;
struct FProducerRecord;
struct FTopicPartitionOffset;
#ifdef EASYKAFKA_EasyKafkaSubsystem_generated_h
#error "EasyKafkaSubsystem.generated.h already included, missing '#pragma once' in EasyKafkaSubsystem.h"
#endif
#define EASYKAFKA_EasyKafkaSubsystem_generated_h

#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_35_DELEGATE \
static void FConsumerError_DelegateWrapper(const FMulticastScriptDelegate& ConsumerError, const FString& Error);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_36_DELEGATE \
static void FConsumingStopped_DelegateWrapper(const FMulticastScriptDelegate& ConsumingStopped);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_37_DELEGATE \
static void FOnCommit_DelegateWrapper(const FMulticastScriptDelegate& OnCommit, FConsumerCallback const& CommitCallback);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_38_DELEGATE \
static void FOnNewMessage_DelegateWrapper(const FMulticastScriptDelegate& OnNewMessage, TArray<FConsumerRecord> const& Messages);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_86_DELEGATE \
static void FOnProduce_DelegateWrapper(const FMulticastScriptDelegate& OnProduce, FProducerCallback const& ProduceCallback);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execListTopics); \
	DECLARE_FUNCTION(execDeleteRecords); \
	DECLARE_FUNCTION(execDeleteTopics); \
	DECLARE_FUNCTION(execCreateTopics); \
	DECLARE_FUNCTION(execCreateAdminStr); \
	DECLARE_FUNCTION(execCreateAdmin); \
	DECLARE_FUNCTION(execCreateAdminDefault); \
	DECLARE_FUNCTION(execPurgeMessages); \
	DECLARE_FUNCTION(execFlushProducer); \
	DECLARE_FUNCTION(execProduceRecordsStruct); \
	DECLARE_FUNCTION(execProduceRecordStruct); \
	DECLARE_FUNCTION(execProduceRecords); \
	DECLARE_FUNCTION(execProduceRecord); \
	DECLARE_FUNCTION(execCreateProducer); \
	DECLARE_FUNCTION(execCreateProducerStr); \
	DECLARE_FUNCTION(execCreateProducerDefault); \
	DECLARE_FUNCTION(execSetGroupId); \
	DECLARE_FUNCTION(execGetSubscription); \
	DECLARE_FUNCTION(execResumeConsuming); \
	DECLARE_FUNCTION(execPauseConsuming); \
	DECLARE_FUNCTION(execStopConsuming); \
	DECLARE_FUNCTION(execStartConsuming); \
	DECLARE_FUNCTION(execCommitAsync); \
	DECLARE_FUNCTION(execCommit); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execCreateConsumerSslPem); \
	DECLARE_FUNCTION(execCreateConsumerStr); \
	DECLARE_FUNCTION(execCreateConsumer); \
	DECLARE_FUNCTION(execCreateConsumerDefault);


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyKafkaSubsystem(); \
	friend struct Z_Construct_UClass_UEasyKafkaSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEasyKafkaSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyKafka"), NO_API) \
	DECLARE_SERIALIZER(UEasyKafkaSubsystem)


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyKafkaSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEasyKafkaSubsystem(UEasyKafkaSubsystem&&); \
	UEasyKafkaSubsystem(const UEasyKafkaSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyKafkaSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyKafkaSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEasyKafkaSubsystem) \
	NO_API virtual ~UEasyKafkaSubsystem();


#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_20_PROLOG
#define FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYKAFKA_API UClass* StaticClass<class UEasyKafkaSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swen_kalski_source_repos_NewRepo_UnrealKafka_HostProject_Plugins_UnrealKafka_Source_EasyKafka_Public_EasyKafkaSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
