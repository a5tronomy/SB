#pragma once
#include "CoreMinimal.h"
#include "PreMotionSampleData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPreMotionSampleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequenceBase* AnimSequence;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float PrevBlendWeight;
    
    SBANIMATION_API FPreMotionSampleData();
};

