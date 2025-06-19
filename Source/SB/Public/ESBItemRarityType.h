#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.generated.h"

UENUM()
enum ESBItemRarityType {
    ESBItemRarityType_None,
    ESBItemRarityType_Common,
    ESBItemRarityType_Uncommon,
    ESBItemRarityType_Rare,
    ESBItemRarityType_Epic,
    ESBItemRarityType_Legendary,
};

