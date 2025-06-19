#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDDroneGuideAction.generated.h"

USTRUCT()
struct FSBUIActionEventHUDDroneGuideAction : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bStart;
    
    SB_API FSBUIActionEventHUDDroneGuideAction();
};

