#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventSetDeadUIDelayTime.generated.h"

USTRUCT()
struct FSBUIActionEventSetDeadUIDelayTime : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DelayTime;
    
    SB_API FSBUIActionEventSetDeadUIDelayTime();
};

