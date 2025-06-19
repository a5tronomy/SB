#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTrainingRoomVisible.generated.h"

USTRUCT()
struct FSBUIActionEventTrainingRoomVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventTrainingRoomVisible();
};

