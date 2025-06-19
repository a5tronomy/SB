#pragma once
#include "CoreMinimal.h"
#include "FSBAnimNode_GroundCollisionBoneAxis.generated.h"

UENUM()
namespace FSBAnimNode_GroundCollisionBoneAxis {
    enum Type {
        XYZ,
        ZXY,
        YZX,
    };
}

