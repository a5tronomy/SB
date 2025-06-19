#pragma once
#include "CoreMinimal.h"
#include "ESBCollisionShape.generated.h"

UENUM()
enum ESBCollisionShape {
    ESBCollisionShape_Line,
    ESBCollisionShape_Box,
    ESBCollisionShape_Sphere,
    ESBCollisionShape_Capsule,
};

