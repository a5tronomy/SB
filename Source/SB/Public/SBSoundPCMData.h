#pragma once
#include "CoreMinimal.h"
#include "SBSoundPCMData.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundPCMData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Data;
    
    UPROPERTY()
    uint32 SampleRate;
    
    UPROPERTY()
    uint16 NumChannels;
    
    SB_API FSBSoundPCMData();
};

