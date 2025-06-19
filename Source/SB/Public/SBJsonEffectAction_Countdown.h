#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_Countdown.generated.h"

USTRUCT()
struct FSBJsonEffectAction_Countdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float UIVisibleShowTime;
    
    SB_API FSBJsonEffectAction_Countdown();
};

