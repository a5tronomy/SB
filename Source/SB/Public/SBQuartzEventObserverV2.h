#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "SBQuartzEventObserverV2.generated.h"

UCLASS()
class USBQuartzEventObserverV2 : public UObject {
    GENERATED_BODY()
public:
    USBQuartzEventObserverV2();

private:
    UFUNCTION()
    void ExecuteQuartzCommandEvent(EQuartzCommandDelegateSubType EventType, FName Name);
    
    UFUNCTION()
    void ExecuteMetronomeEvent(FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);
    
};

