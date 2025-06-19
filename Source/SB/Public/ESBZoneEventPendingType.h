#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventPendingType.generated.h"

UENUM()
enum ESBZoneEventPendingType {
    ESBZoneEventPendingType_None,
    ESBZoneEventPendingType_LevelStream,
    ESBZoneEventPendingType_BindActors,
    ESBZoneEventPendingType_BindActorsWithLevelStream,
};

