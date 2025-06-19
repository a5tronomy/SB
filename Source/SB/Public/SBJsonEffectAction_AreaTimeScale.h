#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_AreaTimeScale.generated.h"

USTRUCT()
struct FSBJsonEffectAction_AreaTimeScale {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimeScaleValue;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bApplyProjectile;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bApplyWorldObject;
    
    UPROPERTY(EditAnywhere, Transient)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bWithPauseNikkeStage;
    
    SB_API FSBJsonEffectAction_AreaTimeScale();
};

