#pragma once
#include "CoreMinimal.h"
#include "ESBOnlineStoreType.generated.h"

UENUM()
enum class ESBOnlineStoreType : uint8 {
    None,
    Steam,
    EpicGames,
    PlayStation,
};

