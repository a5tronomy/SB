#pragma once
#include "CoreMinimal.h"
#include "ESBUITrackingType.generated.h"

UENUM()
enum ESBUITrackingType {
    ESBUITrackingType_None,
    ESBUITrackingType_Character,
    ESBUITrackingType_ZoneEnv,
    ESBUITrackingType_ZoneTrigger,
    ESBUITrackingType_PathNode,
};

