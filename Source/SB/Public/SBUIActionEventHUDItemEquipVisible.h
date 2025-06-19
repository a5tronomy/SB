#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDItemEquipVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDItemEquipVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventHUDItemEquipVisible();
};

