#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterMoveAnimBlendMode.generated.h"

UENUM()
enum ESBCharacterMoveAnimBlendMode {
    SBCharacterMoveAnimBlend_MoveDirection,
    SBCharacterMoveAnimBlend_ActorRotation,
    SBCharacterMoveAnimBlend_SprintMoveDirection,
    SBCharacterMoveAnimBlend_SprintActorRotation,
};

