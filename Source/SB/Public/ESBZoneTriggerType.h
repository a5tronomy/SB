#pragma once
#include "CoreMinimal.h"
#include "ESBZoneTriggerType.generated.h"

UENUM()
enum ESBZoneTriggerType {
    ZoneTriggerType_Character,
    ZoneTriggerType_ZoneObject,
    ZoneTriggerType_WithInteraction,
};

