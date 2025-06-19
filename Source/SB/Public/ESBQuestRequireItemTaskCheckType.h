#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRequireItemTaskCheckType.generated.h"

UENUM()
enum class ESBQuestRequireItemTaskCheckType : uint8 {
    ItemAlias = 1,
    ItemCategory,
    ItemCategoryTag,
};

