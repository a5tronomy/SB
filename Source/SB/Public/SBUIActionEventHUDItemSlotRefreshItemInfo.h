#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDItemSlotRefreshItemInfo.generated.h"

USTRUCT()
struct FSBUIActionEventHUDItemSlotRefreshItemInfo : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDItemSlotRefreshItemInfo();
};

