#pragma once
#include "CoreMinimal.h"
#include "ESBUILoadingScreenTag.generated.h"

UENUM()
enum class ESBUILoadingScreenTag : uint8 {
    None,
    LevelSequence,
    Shop,
    StudioActor,
    PhotoMode,
    Load,
};

