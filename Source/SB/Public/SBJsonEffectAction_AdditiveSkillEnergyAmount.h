#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_AdditiveSkillEnergyAmount.generated.h"

USTRUCT()
struct FSBJsonEffectAction_AdditiveSkillEnergyAmount {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString SkillAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    float Value;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bInfinite;
    
    SB_API FSBJsonEffectAction_AdditiveSkillEnergyAmount();
};

