#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMotionFutureStepData.generated.h"

USTRUCT(BlueprintType)
struct FSBMotionFutureStepData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DelayTime;
    
    UPROPERTY()
    FTransform MotionTM;
    
    SBANIMATION_API FSBMotionFutureStepData();
};

