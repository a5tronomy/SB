#pragma once
#include "CoreMinimal.h"
#include "ESBActorSpeedType.generated.h"

UENUM()
enum ESBActorSpeedType {
    ESBActorSpeedType_None,
    ESBActorSpeedType_Run,
    ESBActorSpeedType_Walk,
    ESBActorSpeedType_LockOnRun,
    ESBActorSpeedType_LockOnWalk,
    ESBActorSpeedType_JoggingRun,
    ESBActorSpeedType_RotateAnglePerSecond,
};

