#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDTPSState.generated.h"

USTRUCT()
struct FSBUIActionEventHUDTPSState : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bVisible;
    
    SB_API FSBUIActionEventHUDTPSState();
};

