#pragma once
#include "CoreMinimal.h"
#include "SBKawaiiPhysicsResetInfo.generated.h"

USTRUCT()
struct FSBKawaiiPhysicsResetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float CurrentAlpha;
    
    UPROPERTY(Transient)
    float TargetAlpha;
    
    UPROPERTY(Transient)
    float FadeInTime;
    
    UPROPERTY(Transient)
    float WaitingTime;
    
    UPROPERTY(Transient)
    float FadeOutTime;
    
    UPROPERTY(Transient)
    float CurrentTime;
    
    UPROPERTY(Transient)
    bool bNeedReset;
    
    SB_API FSBKawaiiPhysicsResetInfo();
};

