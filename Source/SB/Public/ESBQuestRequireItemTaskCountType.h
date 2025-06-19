#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRequireItemTaskCountType.generated.h"

UENUM()
enum class ESBQuestRequireItemTaskCountType : uint8 {
    InventoryAndObtain,
    OnlyInventory,
    OnlyObtain,
};

