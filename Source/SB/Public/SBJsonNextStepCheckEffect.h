#pragma once
#include "CoreMinimal.h"
#include "SBJsonNextStepCheckEffect.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonNextStepCheckEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName Effect;
    
    UPROPERTY(EditAnywhere, Transient)
    FName NextStepAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckTarget;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bHit;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bParry;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bJustParry;
    
    SB_API FSBJsonNextStepCheckEffect();
};

