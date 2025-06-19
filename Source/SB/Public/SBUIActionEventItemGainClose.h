#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventItemGainClose.generated.h"

USTRUCT()
struct FSBUIActionEventItemGainClose : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventItemGainClose();
};

