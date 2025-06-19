#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIBehavior.generated.h"

UENUM()
enum class ESBMetaAIBehavior : uint8 {
    None,
    Wait,
    Walk,
    Behavior,
    SpecialBehavior,
    InteractionWithPlayer,
    Follow,
    ReadyInteractionGraph,
    HideAndSeek,
    HideAndSeekWait,
};

