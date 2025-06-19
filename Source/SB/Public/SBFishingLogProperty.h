#pragma once
#include "CoreMinimal.h"
#include "SBFishingLogProperty.generated.h"

USTRUCT()
struct FSBFishingLogProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    uint32 CatchCount;
    
    UPROPERTY()
    float MaxWeightRecord;
    
    SB_API FSBFishingLogProperty();
};

