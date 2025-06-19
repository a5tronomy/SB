#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEnvControlType.generated.h"

UENUM()
enum ESBZoneEnvControlType {
    ESBZoneEnvCtrlType_None,
    ESBZoneEnvCtrlType_BaseState,
    ESBZoneEnvCtrlType_StateProgress,
    ESBZoneEnvCtrlType_SetStateProgress,
    ESBZoneEnvCtrlType_ProgressSpeed,
    ESBZoneEnvCtrlType_ProgressCurValue,
    ESBZoneEnvCtrlType_ProgressRange,
    ESBZoneEnvCtrlType_CampProperty,
};

