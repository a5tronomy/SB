#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventSaveState.generated.h"

USTRUCT()
struct FSBUIActionEventSaveState : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventSaveState();
};

