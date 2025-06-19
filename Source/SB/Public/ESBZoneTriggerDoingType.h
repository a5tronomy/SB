#pragma once
#include "CoreMinimal.h"
#include "ESBZoneTriggerDoingType.generated.h"

UENUM()
enum ESBZoneTriggerDoingType {
    ZoneTrigger_Do_Interaction,
    ZoneTrigger_Do_InRange,
    ZoneTrigger_Do_Box,
};

