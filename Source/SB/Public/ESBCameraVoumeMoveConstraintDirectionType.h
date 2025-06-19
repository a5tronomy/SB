#pragma once
#include "CoreMinimal.h"
#include "ESBCameraVoumeMoveConstraintDirectionType.generated.h"

UENUM()
enum ESBCameraVoumeMoveConstraintDirectionType {
    ESBCameraVoumeMoveConstraintDirectionType_NotControl,
    ESBCameraVoumeMoveConstraintDirectionType_Vector,
    ESBCameraVoumeMoveConstraintDirectionType_ActorPoint,
    ESBCameraVoumeMoveConstraintDirectionType_TargetLocation,
};

