#pragma once
#include "CoreMinimal.h"
#include "ESBFishingBobberState.generated.h"

UENUM()
enum ESBFishingBobberState {
    ESBFishingBobberState_None,
    ESBFishingBobberState_Casting,
    ESBFishingBobberState_Waiting,
    ESBFishingBobberState_Touch,
    ESBFishingBobberState_Bite,
    ESBFishingBobberState_Fighting,
    ESBFishingBobberState_RunAway,
    ESBFishingBobberState_Pulling,
    ESBFishingBobberState_FinalPulling,
    ESBFishingBobberState_LiftUpReady,
    ESBFishingBobberState_LiftUp,
};

