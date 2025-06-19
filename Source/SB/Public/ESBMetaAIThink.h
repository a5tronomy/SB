#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIThink.generated.h"

UENUM()
enum class ESBMetaAIThink : uint8 {
    None,
    MoveAround,
    FollowGroupLeader,
    Behavior,
    SpecialBehavior,
    HideAndSeek,
};

