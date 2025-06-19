#pragma once
#include "CoreMinimal.h"
#include "ESBActorStance.generated.h"

UENUM()
enum ESBActorStance {
    ActorStance_None,
    ActorStance_Peaceful,
    ActorStance_Battle,
    ActorStance_Groggy,
    ActorStance_Down,
    ActorStance_Dead,
    ActorStance_Airborne,
    ActorStance_Num,
};

