#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDUnlockItemUtil.generated.h"

USTRUCT()
struct FSBUIActionEventHUDUnlockItemUtil : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDUnlockItemUtil();
};

