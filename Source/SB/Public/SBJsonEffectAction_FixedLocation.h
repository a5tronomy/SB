#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_FixedLocation.generated.h"

USTRUCT()
struct FSBJsonEffectAction_FixedLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bOnGround;
    
    SB_API FSBJsonEffectAction_FixedLocation();
};

