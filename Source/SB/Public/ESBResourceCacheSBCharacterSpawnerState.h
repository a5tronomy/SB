#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheSBCharacterSpawnerState.generated.h"

UENUM()
enum class ESBResourceCacheSBCharacterSpawnerState {
    ESBResourceCacheSBCharacterSpawnerState_Idle,
    ESBResourceCacheSBCharacterSpawnerState_Spawnning,
    ESBResourceCacheSBCharacterSpawnerState_Pooling,
    ESBResourceCacheSBCharacterSpawnerState_Finished,
};

