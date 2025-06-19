#pragma once
#include "CoreMinimal.h"
#include "ESBMovementTarget.generated.h"

UENUM()
enum ESBMovementTarget {
    MovementTarget_World,
    MovementTarget_MainActor,
    MovementTarget_OtherActor,
};

