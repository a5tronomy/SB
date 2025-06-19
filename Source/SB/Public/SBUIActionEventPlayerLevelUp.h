#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventPlayerLevelUp.generated.h"

USTRUCT()
struct FSBUIActionEventPlayerLevelUp : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventPlayerLevelUp();
};

