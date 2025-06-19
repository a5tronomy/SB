#pragma once
#include "CoreMinimal.h"
#include "ESBSoundRelativeAxis.generated.h"

UENUM()
namespace ESBSoundRelativeAxis {
    enum Type {
        Default,
        World,
        Socket,
        Actor,
        HitDirection,
        WeaponDirection,
    };
}

