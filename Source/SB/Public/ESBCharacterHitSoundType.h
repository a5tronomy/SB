#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterHitSoundType.generated.h"

UENUM()
enum ESBCharacterHitSoundType {
    ESBHitSound_Common,
    ESBHitSound_Down,
    ESBHitSound_Groggy,
    ESBHitSound_Air,
    ESBHitSound_Critical,
    ESBHitSound_Finish,
};

