#pragma once
#include "CoreMinimal.h"
#include "SBAnimNotifyStateForceFeedbackProperty.generated.h"

class UForceFeedbackAttenuation;

USTRUCT(BlueprintType)
struct FSBAnimNotifyStateForceFeedbackProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UForceFeedbackAttenuation* AttenuationSettings;
    
    SB_API FSBAnimNotifyStateForceFeedbackProperty();
};

