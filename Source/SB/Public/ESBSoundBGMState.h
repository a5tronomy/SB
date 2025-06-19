#pragma once
#include "CoreMinimal.h"
#include "ESBSoundBGMState.generated.h"

UENUM()
enum class ESBSoundBGMState {
    None,
    Default,
    Battle,
    EventBattle,
    BattleFinish,
};

