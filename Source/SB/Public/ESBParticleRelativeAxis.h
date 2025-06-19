#pragma once
#include "CoreMinimal.h"
#include "ESBParticleRelativeAxis.generated.h"

UENUM()
namespace ESBParticleRelativeAxis {
    enum Type {
        Default,
        World,
        Socket,
        Actor,
        HitDirection,
        WeaponDirection,
    };
}

