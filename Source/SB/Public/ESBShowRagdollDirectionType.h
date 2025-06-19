#pragma once
#include "CoreMinimal.h"
#include "ESBShowRagdollDirectionType.generated.h"

UENUM()
namespace ESBShowRagdollDirectionType {
    enum Type {
        Static,
        HitDirection,
        TargetToSelf,
        HitLocationToSelf,
        Velocity,
        StaticLocal,
    };
}

