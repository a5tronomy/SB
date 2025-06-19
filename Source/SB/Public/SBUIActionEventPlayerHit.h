#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventPlayerHit.generated.h"

USTRUCT()
struct FSBUIActionEventPlayerHit : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventPlayerHit();
};

