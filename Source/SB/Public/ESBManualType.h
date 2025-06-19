#pragma once
#include "CoreMinimal.h"
#include "ESBManualType.generated.h"

UENUM()
enum ESBManualType {
    ESBManualType_None,
    ESBManualType_Combat,
    ESBManualType_Skill,
    ESBManualType_Ranged,
    ESBManualType_Item,
    ESBManualType_Expedition,
    ESBManualType_Combo,
};

