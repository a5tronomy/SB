#pragma once
#include "CoreMinimal.h"
#include "ESBUISavePageType.generated.h"

UENUM()
enum class ESBUISavePageType : uint8 {
    None,
    NewGame,
    NewGamePlus,
    LoadGame,
    OverwriteGame,
    LoadTestMap,
};

