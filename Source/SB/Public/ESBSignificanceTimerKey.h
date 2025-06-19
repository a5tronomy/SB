#pragma once
#include "CoreMinimal.h"
#include "ESBSignificanceTimerKey.generated.h"

UENUM()
enum class ESBSignificanceTimerKey {
    None,
    SkipTick,
    IgnoreOptimization,
    ActiveTimeAfterInteraction,
    MovementComponentAfterGrabFinished,
    MovementComponentAfterLandOnFloor,
    CompleteShowStage,
    CustomTickInterval,
    SBActorTickInterval,
};

