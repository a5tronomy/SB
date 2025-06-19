#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_AdditiveSkillCommandCoolTime.generated.h"

USTRUCT()
struct FSBJsonEffectAction_AdditiveSkillCommandCoolTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString Command;
    
    UPROPERTY(EditAnywhere, Transient)
    float Value;
    
    SB_API FSBJsonEffectAction_AdditiveSkillCommandCoolTime();
};

