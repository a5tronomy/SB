#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDClearInput.generated.h"

USTRUCT()
struct FSBUIActionEventHUDClearInput : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDClearInput();
};

