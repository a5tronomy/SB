#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterLevelType.generated.h"

UENUM()
enum ESBCharacterLevelType {
    ESBCharacterLevelType_None,
    ESBCharacterLevelType_Body,
    ESBCharacterLevelType_Beta,
    ESBCharacterLevelType_RechargeablePotion,
    ESBCharacterLevelType_Weapon,
    ESBCharacterLevelType_GearSlot,
    ESBCharacterLevelType_ProtectorSlot,
};

