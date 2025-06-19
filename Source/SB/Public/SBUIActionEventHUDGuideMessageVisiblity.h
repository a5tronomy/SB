#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDGuideMessageVisiblity.generated.h"

USTRUCT()
struct FSBUIActionEventHUDGuideMessageVisiblity : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bVisible;
    
    SB_API FSBUIActionEventHUDGuideMessageVisiblity();
};

