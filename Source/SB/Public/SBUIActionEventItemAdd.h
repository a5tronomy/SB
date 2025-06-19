#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventItemAdd.generated.h"

USTRUCT()
struct FSBUIActionEventItemAdd : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventItemAdd();
};

