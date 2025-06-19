#pragma once
#include "CoreMinimal.h"
#include "ESBSoundEventSystemType.generated.h"

UENUM()
enum class ESBSoundEventSystemType {
    None,
    MainBGM,
    AmbientBGM,
    AmbientSound,
    BGMState,
    SoundClass,
    Num,
};

