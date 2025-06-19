#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_TimeScale.generated.h"

USTRUCT()
struct FSBJsonEffectAction_TimeScale {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float TotalTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimeScale;
    
    SB_API FSBJsonEffectAction_TimeScale();
};

