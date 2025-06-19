#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventWarpComplete.generated.h"

USTRUCT()
struct FSBUIActionEventWarpComplete : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventWarpComplete();
};

