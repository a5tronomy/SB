#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventResetZoneNotice.generated.h"

USTRUCT()
struct FSBUIActionEventResetZoneNotice : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventResetZoneNotice();
};

