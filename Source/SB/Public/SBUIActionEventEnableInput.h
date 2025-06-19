#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventEnableInput.generated.h"

USTRUCT()
struct FSBUIActionEventEnableInput : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnableInput;
    
    UPROPERTY()
    float DelayTime;
    
    SB_API FSBUIActionEventEnableInput();
};

