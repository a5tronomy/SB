#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionSwipeShortCutType.generated.h"

UENUM()
enum class ESBGameOptionSwipeShortCutType : uint8 {
    None,
    GameMenu,
    Scan,
    Hint,
    PhotoMode,
    GameMenuMap,
    GameMenuQuestJournal,
    GameMenuSkill,
    GameMenuInventory,
};

