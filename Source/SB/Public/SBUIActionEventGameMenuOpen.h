#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventGameMenuOpen.generated.h"

USTRUCT()
struct FSBUIActionEventGameMenuOpen : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventGameMenuOpen();
};

