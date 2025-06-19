#pragma once
#include "CoreMinimal.h"
#include "ESBSoundStatLogType.generated.h"

UENUM()
enum ESBSoundStatLogType {
    ESBSoundStatLogType_None,
    ESBSoundStatLogType_Sounds,
    ESBSoundStatLogType_Wave,
    ESBSoundStatLogType_Cue = 4,
    ESBSoundStatLogType_Vibration = 8,
    ESBSoundStatLogType_ForceFeedback = 16,
};

