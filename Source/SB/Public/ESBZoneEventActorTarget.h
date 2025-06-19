#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.generated.h"

UENUM()
enum ESBZoneEventActorTarget {
    ZoneEvent_ActorTargetToPlayer,
    ZoneEvent_ActorTargetToTag,
    ZoneEvent_ActorTargetToEventor,
    ZoneEvent_ActorTargetToTagContain,
};

