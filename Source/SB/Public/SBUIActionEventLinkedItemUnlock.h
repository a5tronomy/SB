#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventLinkedItemUnlock.generated.h"

USTRUCT()
struct FSBUIActionEventLinkedItemUnlock : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventLinkedItemUnlock();
};

