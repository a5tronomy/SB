#pragma once
#include "CoreMinimal.h"
#include "ESBSummonActorSpawnLocationType.generated.h"

UENUM()
enum ESBSummonActorSpawnLocationType {
    SummonActorSpawnLocationType_BasedOnOwnerActor,
    SummonActorSpawnLocationType_BasedOnTargetActor,
    SummonActorSpawnLocationType_SpawnPoint,
    SummonActorSpawnLocationType_SpawnAreaCloseToTarget,
    SummonActorSpawnLocationType_SpawnAreaRandomLocation,
    SummonActorSpawnLocationType_EffectLocation,
};

