#pragma once
#include "CoreMinimal.h"
#include "ESBFishingCameraModeType.generated.h"

UENUM()
enum ESBFishingCameraModeType {
    ESBFishingCameraModeType_Default,
    ESBFishingCameraModeType_Aim,
    ESBFishingCameraModeType_Waiting,
    ESBFishingCameraModeType_Fighting,
    ESBFishingCameraModeType_LiftUpReady,
    ESBFishingCameraModeType_LiftUp,
};

