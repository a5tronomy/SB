#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorCaster.generated.h"

UENUM()
enum ESBZoneEventActorCaster {
    ESBZoneEventActorCaster_None,
    ESBZoneEventActorCaster_ActorTargetToPlayer,
    ESBZoneEventActorCaster_ActorTargetToTag,
};

