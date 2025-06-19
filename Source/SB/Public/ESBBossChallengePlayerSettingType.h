#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengePlayerSettingType.generated.h"

UENUM()
enum ESBBossChallengePlayerSettingType {
    ESBBossChallengePlayerSettingType_None,
    ESBBossChallengePlayerSettingType_LastPlaySlot,
    ESBBossChallengePlayerSettingType_PresetMaximum,
    ESBBossChallengePlayerSettingType_PresetMaximumNGPlus,
    ESBBossChallengePlayerSettingType_PresetMinimum,
};

