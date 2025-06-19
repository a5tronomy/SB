#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventUnlockBurst.generated.h"

USTRUCT()
struct FSBUIActionEventUnlockBurst : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TestInt;
    
    UPROPERTY()
    float TestFloat;
    
    SB_API FSBUIActionEventUnlockBurst();
};

