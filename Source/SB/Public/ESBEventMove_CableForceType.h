#pragma once
#include "CoreMinimal.h"
#include "ESBEventMove_CableForceType.generated.h"

UENUM()
enum ESBEventMove_CableForceType {
    CableForce_None,
    CableForce_X,
    CableForce_Y,
    CableForce_Z,
    CableForce_CharacterDir,
};

