# Unreal 5.x Kafka subsystem

UEKafka is a Kafka/Redpanda client sub-system for unreal engine. It supports producing and consuming records through blueprint and C++.

# Supported Platforms

 - Windows x86_64
 - Linux x86_64
 - Linux ARM64

# C++ Modules Link

Link the plugin modules to your project through `<YourModule>.build.cs`:

```cs
CppStandard = CppStandardVersion.Cpp17;//avoid using boost
if(Target.Platform == UnrealTargetPlatform.HoloLens || Target.Platform == UnrealTargetPlatform.Win64)
	bUseRTTI = true;

 PrivateDependencyModuleNames.AddRange( new string[]
{
    "UEKafka",
    "KafkaLib",
    "KafkaConsumer",
    "KafkaProducer",
    "KafkaAdmin"
});
```

# Kafka Consumer Basic Usage

**PAY ATTENTION TO THE BLOCKING METHODS.**
## C++

Create Consumer with default configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();
UEKafka->GetConsumer()->CreateConsumer(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, (int)EKafkaLogLevel::ERR);
```

Create Consumer with configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();

TMap<EKafkaConsumerConfig, FString> KafkaConfiguration =
{
	{EKafkaConsumerConfig::CLIENT_ID,"34235"},
	{EKafkaConsumerConfig::SOCKET_TIMEOUT_MS,"10000"}
};
UEKafka->GetConsumer()->CreateConsumer(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, KafkaConfiguration, (int)EKafkaLogLevel::ERR);
```

Consume messages:

```cpp
UEKafka->GetConsumer()->OnNewMessage().AddLambda([](const TArray<FConsumerRecord>& Messages)
{
	for (FConsumerRecord Message : Messages)
	{
		UE_LOG(LogTemp, Display, TEXT("New Message %s \n"), *Message.Value);//process messages
	}
});

UEKafka->GetConsumer()->Subscribe(
{
	"topic",
	"topic1",
	"topic2"
});

UEKafka->GetConsumer()->StartConsuming();
```
**ATTENTION: MAKE SURE TO COMMIT FROM THE CONSUMER RUNNABLE THREAD BEFORE PROCESSING RECORDS IF YOU DISABLED AUTOCOMMIT.**

## Blueprint


# Kafka Producer Basic Usage

**PAY ATTENTION TO THE BLOCKING METHODS.**
## C++

Create Producer with default configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();
UEKafka->GetProducer()->CreateProducer(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, (int)EKafkaLogLevel::ERR);
```

Create Producer with configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();

TMap<EKafkaProducerConfig, FString> KafkaConfiguration =
{
	{EKafkaProducerConfig::MESSAGE_TIMEOUT_MS,"5000"},
	{EKafkaProducerConfig::REQUEST_TIMEOUT_MS,"5000"}
};
UEKafka->GetProducer()->CreateProducer(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, KafkaConfiguration, (int)EKafkaLogLevel::ERR);
```

on record produced/failed to produce callback

```cpp
UEKafka->GetProducer()->OnProduce().AddLambda([](const FProducerCallback& Callback)
{

	if (Callback.bError)
	{
		UE_LOG(LogTemp, Error, TEXT("Error producing recordId: %d \nError Message: %s\n"), Callback.RecordMetadata.RecordId, *Callback.ErrorMessage);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("RecordId: %d produced.\n"), Callback.RecordMetadata.RecordId);
	}
});
```
produce record async

```cpp
UEKafka->GetProducer()->ProduceRecord('<TOPIC>', '<"RECORD_VALUE>');

/*
More control over your record
Such as headers,Id...
*/

FProducerRecord record;
record.Key = "key";
record.Topic = "topic";
record.Value = "value";
record.Id = 2312;//Unique id to identify this record OnProduce callback;
record.Headers = FRecordHeader(
{ 
	{"KeyOne","ValueOne"},
	{"KeyTwo","ValueTwo"}
});

UEKafka->GetProducer()->ProduceRecord(record);
```

# Kafka Admin Basic Usage

**ALL THE METHODS ARE BLOCKING, ASYNC TO BE ADDED.**
## C++
Create Admin with default configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();
UEKafka->GetAdmin()->CreateAdmin(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, (int)EKafkaLogLevel::ERR);
```
Create Admin with configuration:

```cpp
#include "UEKafkaSubsystem.h"

TSharedPtr<FUEKafkaModule> UEKafka = GEngine->GetEngineSubsystem<UUEKafkaSubsystem>()->GetUEKafka();

TMap<EKafkaAdminConfig, FString> KafkaConfiguration =
{
	{EKafkaAdminConfig::SOCKET_TIMEOUT_MS,"10000"}
};
UEKafka->GetAdmin()->CreateAdmin(`<BOOTSTRAP_SERVERS_COMMA_SEPARATED>`, `<USERNAME>`, `<TOKEN/PASSWORD>`, KafkaConfiguration, (int)EKafkaLogLevel::ERR);
```
Simple Admin request example:

```cpp
const TArray<FString> TopicsToDelete = { "Topic1Name", "Topic2Name" };
FAdminRequestResult Result = UEKafka->GetAdmin()->DeleteTopics(TopicsToDelete);

if (Result.bError)
{
	UE_LOG(LogTemp, Error, TEXT("Error deleting topics:  %s\n"), *Result.ErrorMessage);
}
```


## Find it helpful?

Give us a ⭐️!

# License

Licensed under BSD 2-Clause [License](LICENSE.txt).

```
Copyright (c) 2024, El Dockerr - Camaleao Studio.
```