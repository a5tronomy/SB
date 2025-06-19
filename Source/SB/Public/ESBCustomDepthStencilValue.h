#pragma once
#include "CoreMinimal.h"
#include "ESBCustomDepthStencilValue.generated.h"

UENUM()
enum class ESBCustomDepthStencilValue : int32 {
    None,
    Enemy,
    Item,
    Interaction_WallBlock,
    Interaction,
    Ally,
    Env,
    EnvDisable,
    Enemy_Stealth = 9,
    PC,
    Drone = 12,
};

