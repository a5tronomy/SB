#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMotionFutureMoveMatchingData.h"
#include "SBMotionFutureStepData.h"
#include "SBMotionFutureData.generated.h"

USTRUCT(BlueprintType)
struct FSBMotionFutureData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBMotionFutureStepData> Steps;
    
    UPROPERTY()
    FVector EndVelocityInCS;
    
    UPROPERTY()
    FVector EndDirection;
    
    UPROPERTY()
    float EndVelocitySize;
    
    UPROPERTY()
    FSBMotionFutureMoveMatchingData MoveMatchingData;
    
    SBANIMATION_API FSBMotionFutureData();
};

