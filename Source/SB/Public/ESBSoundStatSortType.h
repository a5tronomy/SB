#pragma once
#include "CoreMinimal.h"
#include "ESBSoundStatSortType.generated.h"

UENUM()
enum class ESBSoundStatSortType {
    None,
    Volume,
    SoundName,
    SoundPath,
    Distance,
    Priority,
    PlaybackTime,
    PlaybackTimeNonVirtualized,
    ClassName,
};

