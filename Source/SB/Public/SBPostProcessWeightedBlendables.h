#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SBPostProcessWeightedBlendables.generated.h"

USTRUCT(BlueprintType)
struct FSBPostProcessWeightedBlendables {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FWeightedBlendables WeightedBlendables;
    
    UPROPERTY(Transient)
    float Weight;
    
    SB_API FSBPostProcessWeightedBlendables();
};

