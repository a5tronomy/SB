#pragma once
#include "CoreMinimal.h"
#include "ESBSoundParamType.generated.h"

UENUM()
enum class ESBSoundParamType : uint8 {
    None,
    BossHPRate,
    SBVelocityX,
    SBVelocityY,
    SlidingSlipTurnRate,
    SlopeSlidingTurnRate,
    ChangeBattleBGMElapsedTime,
    ChangeDefaultBGMElapsedTime,
    TopDownRopeMoveRate,
    Num,
};

