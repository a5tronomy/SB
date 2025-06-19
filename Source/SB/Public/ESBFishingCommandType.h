#pragma once
#include "CoreMinimal.h"
#include "ESBFishingCommandType.generated.h"

UENUM()
enum ESBFishingCommandType {
    ESBFishingCommandType_None,
    ESBFishingCommandType_Cancel,
    ESBFishingCommandType_Casting,
    ESBFishingCommandType_Reel,
    ESBFishingCommandType_Attack,
    ESBFishingCommandType_TimingPull,
    ESBFishingCommandType_LiftUp,
};

