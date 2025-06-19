#pragma once
#include "CoreMinimal.h"
#include "ESBCollisionShapeCheckType.generated.h"

UENUM()
enum ESBCollisionShapeCheckType {
    ESBCollisionShapeCheckType_MeleeAttack,
    ESBCollisionShapeCheckType_RangeAttack,
    ESBCollisionShapeCheckType_None,
};

