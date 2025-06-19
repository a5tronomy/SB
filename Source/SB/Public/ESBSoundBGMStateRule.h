#pragma once
#include "CoreMinimal.h"
#include "ESBSoundBGMStateRule.generated.h"

UENUM()
enum class ESBSoundBGMStateRule : int8 {
    None,
    Auto,
    ForceDefault,
    ForceBattle,
    ForceEventBattle,
    RequestFinishSound,
    AutoWithResetEvent,
};

