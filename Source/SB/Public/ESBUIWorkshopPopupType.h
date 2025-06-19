#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorkshopPopupType.generated.h"

UENUM()
enum class ESBUIWorkshopPopupType : uint8 {
    None,
    CraftResult,
    EveEnhanceResult_RechargeablePotion,
    EveEnhanceResult_ExtendedTumbler,
    EveEnhanceResult_Weapon,
    EveEnhanceResult_GearSlot,
};

