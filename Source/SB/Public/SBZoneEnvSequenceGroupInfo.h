#pragma once
#include "CoreMinimal.h"
#include "ESBSequencePlayTransformType.h"
#include "SBZoneEnvToTargetStateInfo.h"
#include "SBZoneEnvSequenceGroupInfo.generated.h"

class ULevelSequence;
class USBTheaterData;

USTRUCT(BlueprintType)
struct FSBZoneEnvSequenceGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY()
    TSoftObjectPtr<USBTheaterData> TransitOut_TheaterData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> TransitOut_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    FString TransitOut_PlayTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TransitOut_AttachTagNames;
    
    UPROPERTY()
    TSoftObjectPtr<USBTheaterData> Active_TheaterData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Active_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    FString Active_PlayTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Active_AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Loop_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    FString Loop_PlayTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Loop_AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    bool bDontStopLoopSequenceAtDestory;
    
    UPROPERTY(EditAnywhere)
    bool bWhenChangeStaeLoopSequenceStop;
    
    UPROPERTY()
    bool UseTemplateTransform;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformType> PlayTransformOwnerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvToTargetStateInfo> ToTargetStateInfoList;
    
    SB_API FSBZoneEnvSequenceGroupInfo();
};

