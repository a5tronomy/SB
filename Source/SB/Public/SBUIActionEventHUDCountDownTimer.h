#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDCountDownTimer.generated.h"

USTRUCT()
struct FSBUIActionEventHUDCountDownTimer : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bActivate;
    
    UPROPERTY()
    uint32 EffectGUID;
    
    UPROPERTY()
    float UIVisibleShowTime;
    
    UPROPERTY()
    float UIVisibleTotalTime;
    
    SB_API FSBUIActionEventHUDCountDownTimer();
};

