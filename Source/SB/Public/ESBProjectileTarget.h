#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileTarget.generated.h"

UENUM()
namespace ESBProjectileTarget {
    enum Type {
        MainActor,
        OtherActor,
        SetLocation,
        StartToDestDirection,
        SkillTargetLocation,
        InputTransform,
    };
}

