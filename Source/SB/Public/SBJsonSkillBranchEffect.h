#pragma once
#include "CoreMinimal.h"
#include "SBJsonSkillBranchEffect.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonSkillBranchEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName Effect;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillActiveStepAlias;
    
    SB_API FSBJsonSkillBranchEffect();
};

