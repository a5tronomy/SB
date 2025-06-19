#pragma once
#include "CoreMinimal.h"
#include "ESBEffectVolumeResetType.generated.h"

UENUM()
enum ESBEffectVolumeResetType {
    ESBEffectVolumeReset_None,
    ESBEffectVolumeReset_ActorDead,
    ESBEffectVolumeReset_ChangeEnvState,
    ESBEffectVolumeReset_Trigger,
};

