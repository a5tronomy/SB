#pragma once
#include "CoreMinimal.h"
#include "SBAliasEffect.h"
#include "SBJsonEffectAlias.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonEffectAlias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEffect Alias;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float CalculationValue;
    
    UPROPERTY(EditAnywhere)
    float StartDelayTime;
    
    SB_API FSBJsonEffectAlias();
};

