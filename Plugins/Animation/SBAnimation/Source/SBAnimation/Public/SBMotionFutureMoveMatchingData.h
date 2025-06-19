#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMotionFutureMoveMatchingData.generated.h"

USTRUCT(BlueprintType)
struct FSBMotionFutureMoveMatchingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> NormalizedPositions;
    
    SBANIMATION_API FSBMotionFutureMoveMatchingData();
};

