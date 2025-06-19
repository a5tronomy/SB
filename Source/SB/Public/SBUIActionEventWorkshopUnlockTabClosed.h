#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventWorkshopUnlockTabClosed.generated.h"

USTRUCT()
struct FSBUIActionEventWorkshopUnlockTabClosed : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventWorkshopUnlockTabClosed();
};

