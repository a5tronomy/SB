#pragma once
#include "CoreMinimal.h"
#include "ESBActorLifeState.generated.h"

UENUM()
enum ESBActorLifeState {
    ESBActorLifeState_None,
    ESBActorLifeState_Spawn,
    ESBActorLifeState_Coma,
    ESBActorLifeState_Dead,
    ESBActorLifeState_Despawn,
    ESBActorLifeState_Destroy,
    ESBActorLifeState_Spawning,
};

