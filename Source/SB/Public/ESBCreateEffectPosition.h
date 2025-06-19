#pragma once
#include "CoreMinimal.h"
#include "ESBCreateEffectPosition.generated.h"

UENUM()
namespace ESBCreateEffectPosition {
    enum Type {
        ConstructorActor,
        MainActor,
        WorldPosition,
    };
}

