#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHintShow.generated.h"

USTRUCT()
struct FSBUIActionEventHintShow : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHintShow();
};

