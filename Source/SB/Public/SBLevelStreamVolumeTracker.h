#pragma once
#include "CoreMinimal.h"
#include "SBLevelStreamVolumeTracker.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelStreamVolumeTracker {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FName, bool> LevelStatus;
    
    UPROPERTY(Transient)
    TMap<FString, bool> VolumeStatus;
    
    SB_API FSBLevelStreamVolumeTracker();
};

