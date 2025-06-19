#pragma once
#include "CoreMinimal.h"
#include "DecoratorUsableTime.generated.h"

USTRUCT()
struct FDecoratorUsableTime {
    GENERATED_BODY()
public:
    UPROPERTY()
    float UsableTime;
    
    UPROPERTY()
    float InitialTimeValue;
    
    UPROPERTY()
    float CycleTimeValue;
    
    SB_API FDecoratorUsableTime();
};

