#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTrainingRoomJump.generated.h"

USTRUCT()
struct FSBUIActionEventTrainingRoomJump : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventTrainingRoomJump();
};

