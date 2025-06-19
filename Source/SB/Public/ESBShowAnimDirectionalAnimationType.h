#pragma once
#include "CoreMinimal.h"
#include "ESBShowAnimDirectionalAnimationType.generated.h"

UENUM()
namespace ESBShowAnimDirectionalAnimationType {
    enum Type {
        Velocity,
        InverseHitDirection,
        HitDirection,
        VelocityInSwimming,
        SkillAttackDirection,
        EventDirection,
        CameraDirection,
    };
}

