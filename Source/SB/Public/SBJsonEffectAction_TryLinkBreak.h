#pragma once
#include "CoreMinimal.h"
#include "ESBSkillCommandState.h"
#include "SBJsonEffectAction_TryLinkBreak.generated.h"

USTRUCT()
struct FSBJsonEffectAction_TryLinkBreak {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBSkillCommandState> Command;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 InputCount;
    
    SB_API FSBJsonEffectAction_TryLinkBreak();
};

