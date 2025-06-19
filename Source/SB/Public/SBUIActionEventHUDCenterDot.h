#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDCenterDot.generated.h"

USTRUCT()
struct FSBUIActionEventHUDCenterDot : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Visible;
    
    SB_API FSBUIActionEventHUDCenterDot();
};

