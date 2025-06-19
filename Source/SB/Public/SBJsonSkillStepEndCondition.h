#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCheckType.h"
#include "SBJsonSkillStepEndCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonSkillStepEndCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bActive;
    
    UPROPERTY(EditAnywhere, Transient)
    FName NextStepAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsGround;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsSwimming;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bOverlapTargetFilterRadius;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsRuleMoveActive;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsTargetDead;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FName> EffectAliasArray;
    
    SB_API FSBJsonSkillStepEndCondition();
};

