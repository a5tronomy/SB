#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIBehaviorStance.generated.h"

UENUM()
enum class ESBMetaAIBehaviorStance : uint8 {
    Default,
    Stand,
    Sit,
    Crouch,
    Flop,
    Silence,
    RailLean,
    WallLean,
    Sing,
};

