#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_ActionAssist.generated.h"

USTRUCT()
struct FSBJsonEffectAction_ActionAssist {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float ActiveTime;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillCommandName1;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillCommandName2;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillCommandName3;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillCommandName4;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SkillCommandName5;
    
    SB_API FSBJsonEffectAction_ActionAssist();
};

