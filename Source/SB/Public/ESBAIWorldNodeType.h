#pragma once
#include "CoreMinimal.h"
#include "ESBAIWorldNodeType.generated.h"

UENUM()
enum class ESBAIWorldNodeType : uint8 {
    Road,
    Behavior,
    BehaviorPosition,
    SubBehavior,
    InteractionPosition,
    Root_BehaviorPosition,
    Root_SubBehavior,
};

