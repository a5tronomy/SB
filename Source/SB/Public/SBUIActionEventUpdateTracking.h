#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventUpdateTracking.generated.h"

USTRUCT()
struct FSBUIActionEventUpdateTracking : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventUpdateTracking();
};

