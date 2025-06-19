#pragma once
#include "CoreMinimal.h"
#include "ESBFishingModeType.h"
#include "SBJsonEffectAction_FishingMode.generated.h"

USTRUCT()
struct FSBJsonEffectAction_FishingMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBFishingModeType> FishingModeType;
    
    SB_API FSBJsonEffectAction_FishingMode();
};

