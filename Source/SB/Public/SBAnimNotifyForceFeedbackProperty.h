#pragma once
#include "CoreMinimal.h"
#include "SBAnimNotifyForceFeedbackProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimNotifyForceFeedbackProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    SB_API FSBAnimNotifyForceFeedbackProperty();
};

