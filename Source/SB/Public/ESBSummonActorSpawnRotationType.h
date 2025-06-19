#pragma once
#include "CoreMinimal.h"
#include "ESBSummonActorSpawnRotationType.generated.h"

UENUM()
enum ESBSummonActorSpawnRotationType {
    SummonActorSpawnRotationType_Default,
    SummonActorSpawnRotationType_ConstructorActorToSpawnLocation,
    SummonActorSpawnRotationType_MainActorToSpawnLocation,
};

