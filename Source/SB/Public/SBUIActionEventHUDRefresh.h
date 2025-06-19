#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDRefresh.generated.h"

USTRUCT()
struct FSBUIActionEventHUDRefresh : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDRefresh();
};

