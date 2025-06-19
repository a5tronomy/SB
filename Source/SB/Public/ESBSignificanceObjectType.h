#pragma once
#include "CoreMinimal.h"
#include "ESBSignificanceObjectType.generated.h"

UENUM()
enum class ESBSignificanceObjectType {
    None,
    Character,
    ZoneEnvActor,
    ZoneEventActor,
    LaserComponent,
    DestructibleComponent,
    OptimizationActor,
    SBItem,
    Max,
};

