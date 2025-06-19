#pragma once
#include "CoreMinimal.h"
#include "PrevSeqSampleData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPrevSeqSampleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequenceBase* AnimSequence;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float PrevBlendWeight;
    
    SBANIMATION_API FPrevSeqSampleData();
};

