#pragma once
#include "CoreMinimal.h"
#include "ESBSoundVolumeControlType.generated.h"

UENUM()
enum class ESBSoundVolumeControlType : uint8 {
    None,
    System,
    User,
    Loading,
    Timer,
    Num,
};

