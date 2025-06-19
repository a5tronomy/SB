#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventManualUnlock.generated.h"

USTRUCT()
struct FSBUIActionEventManualUnlock : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventManualUnlock();
};

