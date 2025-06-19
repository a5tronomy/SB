#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "SBQuartzEventObserver.generated.h"

UCLASS()
class USBQuartzEventObserver : public UObject {
    GENERATED_BODY()
public:
    USBQuartzEventObserver();

private:
    UFUNCTION()
    void ExecuteQuartzCommandEvent(EQuartzCommandDelegateSubType EventType, FName Name);
    
    UFUNCTION()
    void ExecuteMetronomeEvent(FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);
    
};

