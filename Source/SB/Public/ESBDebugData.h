#pragma once
#include "CoreMinimal.h"
#include "ESBDebugData.generated.h"

UENUM()
enum ESBDebugData {
    ESBDebugData_Character,
    ESBDebugData_ZoneEnv,
    ESBDebugData_ZoneTrigger,
    ESBDebugData_ZoneEventActor,
    ESBDebugData_ZoneItem,
    ESBDebugData_AreaControlVolume,
    ESBDebugData_LevelStreaming,
    ESBDebugData_Trophy,
    ESBDebugData_Log,
};

