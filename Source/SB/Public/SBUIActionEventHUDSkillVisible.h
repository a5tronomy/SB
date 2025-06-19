#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDSkillVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDSkillVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Visible;
    
    SB_API FSBUIActionEventHUDSkillVisible();
};

