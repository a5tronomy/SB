#pragma once
#include "CoreMinimal.h"
#include "SBFixedTargetRotationAnimInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSBFixedTargetRotationAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* AnimSequence_L;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* AnimSequence_R;
    
    UPROPERTY(EditAnywhere)
    float BelowDegree;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    SB_API FSBFixedTargetRotationAnimInfo();
};

