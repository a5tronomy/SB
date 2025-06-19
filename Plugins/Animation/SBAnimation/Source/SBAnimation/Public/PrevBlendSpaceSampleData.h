#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "PrevBlendSpaceSampleData.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FPrevBlendSpaceSampleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlendSpaceBase* BlendSpace;
    
    UPROPERTY()
    TArray<FBlendSampleData> SampleData;
    
    UPROPERTY()
    float PrevBlendWeight;
    
    SBANIMATION_API FPrevBlendSpaceSampleData();
};

