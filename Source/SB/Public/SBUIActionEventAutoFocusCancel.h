#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventAutoFocusCancel.generated.h"

USTRUCT()
struct FSBUIActionEventAutoFocusCancel : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventAutoFocusCancel();
};

