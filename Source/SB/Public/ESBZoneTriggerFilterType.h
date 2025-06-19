#pragma once
#include "CoreMinimal.h"
#include "ESBZoneTriggerFilterType.generated.h"

UENUM()
enum ESBZoneTriggerFilterType {
    ESBTriggerFilter_None,
    ESBTriggerFilter_BattleState,
    ESBTriggerFilter_BattleStateByEnemyNpc,
    ESBTriggerFilter_IsSwiming,
    ESBTriggerFilter_DisableObject,
};

