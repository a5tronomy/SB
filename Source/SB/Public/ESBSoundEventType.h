#pragma once
#include "CoreMinimal.h"
#include "ESBSoundEventType.generated.h"

UENUM()
enum class ESBSoundEventType {
    GenerateSound = 1,
    PlaySound,
    StopSound,
    AdjustVolume,
    AdjustLPF,
    ChangeBGMTrack,
    ChangeBGMStateRule,
    ModifyTargetedByEnemy,
    ChangeOverrideAttenuation,
    ReserveAmbientSound,
    CancelAmbientSound,
    Pause,
};

