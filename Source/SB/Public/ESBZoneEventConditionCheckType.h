#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventConditionCheckType.generated.h"

UENUM()
enum ESBZoneEventConditionCheckType {
    ESBZoneEventConditionCheckType_RunEvent,
    ESBZoneEventConditionCheckType_RequestEvent,
    ESBZoneEventConditionCheckType_None,
};

