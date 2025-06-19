#pragma once
#include "CoreMinimal.h"
#include "ESBFishingModeType.generated.h"

UENUM()
enum ESBFishingModeType {
    ESBFishingModeType_None,
    ESBFishingModeType_Idle,
    ESBFishingModeType_Aim,
    ESBFishingModeType_TakeBack,
    ESBFishingModeType_Casting,
    ESBFishingModeType_Waiting,
    ESBFishingModeType_Fighting,
    ESBFishingModeType_RunAway,
    ESBFishingModeType_Pulling,
    ESBFishingModeType_FinalPulling,
    ESBFishingModeType_LiftUpReady,
    ESBFishingModeType_LiftUp,
};

