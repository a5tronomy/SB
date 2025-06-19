#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDSkillDashVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDSkillDashVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Visible;
    
    SB_API FSBUIActionEventHUDSkillDashVisible();
};

