#pragma once
#include "CoreMinimal.h"
#include "ESBQuestWarpType.generated.h"

UENUM()
enum class ESBQuestWarpType : uint8 {
    None,
    ToLocation,
    ToSpawnPoint,
    ToZoneCamp,
    ToRequestBoard,
};

