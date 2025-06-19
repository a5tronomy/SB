#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffect.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName Alias;
    
    UPROPERTY(EditAnywhere, Transient)
    float Time;
    
    UPROPERTY(EditAnywhere, Transient)
    float CalculationValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float StartDelayTime;
    
    SB_API FSBJsonEffect();
};

