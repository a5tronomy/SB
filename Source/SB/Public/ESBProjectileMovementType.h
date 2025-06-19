#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileMovementType.generated.h"

UENUM()
namespace ESBProjectileMovementType {
    enum Type {
        Velocity,
        ParabolicMotion,
        GuidedMissile,
    };
}

