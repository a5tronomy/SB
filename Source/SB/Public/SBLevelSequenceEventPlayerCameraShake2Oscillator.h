#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventPlayerCameraShake2Oscillator.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventPlayerCameraShake2Oscillator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    SB_API FSBLevelSequenceEventPlayerCameraShake2Oscillator();
};

