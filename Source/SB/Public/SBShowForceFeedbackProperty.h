#pragma once
#include "CoreMinimal.h"
#include "SBShowForceFeedbackProperty.generated.h"

class UForceFeedbackAttenuation;

USTRUCT(BlueprintType)
struct FSBShowForceFeedbackProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UForceFeedbackAttenuation* AttenuationOverride;
    
    SB_API FSBShowForceFeedbackProperty();
};

