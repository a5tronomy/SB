#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTutorialTPSMode.generated.h"

USTRUCT()
struct FSBUIActionEventTutorialTPSMode : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bActive;
    
    SB_API FSBUIActionEventTutorialTPSMode();
};

