#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_AdditiveSkillCoolTime.generated.h"

USTRUCT()
struct FSBJsonEffectAction_AdditiveSkillCoolTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString SkillAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    float Value;
    
    SB_API FSBJsonEffectAction_AdditiveSkillCoolTime();
};

