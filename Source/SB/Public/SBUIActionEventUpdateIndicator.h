#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventUpdateIndicator.generated.h"

USTRUCT()
struct FSBUIActionEventUpdateIndicator : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName IndicatorType;
    
    UPROPERTY()
    int32 IndicatorLockChannel;
    
    SB_API FSBUIActionEventUpdateIndicator();
};

