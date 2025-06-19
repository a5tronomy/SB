#pragma once
#include "CoreMinimal.h"
#include "ESBFixedRotationAxisType.generated.h"

UENUM()
enum ESBFixedRotationAxisType {
    ESBFixedRotAxis_None,
    ESBFixedRotAxis_Yaw,
    ESBFixedRotAxis_Pitch,
    ESBFixedRotAxis_Roll,
    ESBFixedRotAxis_LookAt,
};

