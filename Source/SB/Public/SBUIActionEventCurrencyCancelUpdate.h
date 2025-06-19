#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventCurrencyCancelUpdate.generated.h"

USTRUCT()
struct FSBUIActionEventCurrencyCancelUpdate : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventCurrencyCancelUpdate();
};

