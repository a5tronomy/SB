#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengePresetType.generated.h"

UENUM()
enum class ESBBossChallengePresetType : uint8 {
    LastSaveSlot,
    Maximum,
    MaximumWithNewGamePlus,
    Minimum,
};

