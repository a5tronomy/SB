#pragma once
#include "CoreMinimal.h"
#include "ESBCameraSlopeMoveType.generated.h"

UENUM()
enum ESBCameraSlopeMoveType {
    ESBCameraSlopeMove_None,
    ESBCameraSlopeMove_CamDownPlayerDown,
    ESBCameraSlopeMove_CamDownPlayerUp,
    ESBCameraSlopeMove_CamUpPlayerDown,
    ESBCameraSlopeMove_CamUpPlayerUp,
};

