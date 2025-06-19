#pragma once
#include "CoreMinimal.h"
#include "ESBSoundOcclusionActorShapeType.generated.h"

UENUM()
enum class ESBSoundOcclusionActorShapeType : uint8 {
    Box,
    Sphere,
    Capsule,
};

