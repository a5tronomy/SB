#pragma once
#include "CoreMinimal.h"
#include "SBZoneEnvTargetStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvTargetStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ToStateTagNameList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> TransitSequenceList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> TransitActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> AttachTagName;
    
    SB_API FSBZoneEnvTargetStateInfo();
};

