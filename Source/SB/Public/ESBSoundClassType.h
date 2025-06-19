#pragma once
#include "CoreMinimal.h"
#include "ESBSoundClassType.generated.h"

UENUM()
enum class ESBSoundClassType {
    None,
    DialogVoice,
    ActionVoice,
    PCFootstepSound,
    MonFootstepSound,
    Num,
};

