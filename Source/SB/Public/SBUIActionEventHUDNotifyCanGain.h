#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDNotifyCanGain.generated.h"

USTRUCT()
struct FSBUIActionEventHUDNotifyCanGain : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDNotifyCanGain();
};

