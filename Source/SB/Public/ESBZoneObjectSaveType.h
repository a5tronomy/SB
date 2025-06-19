#pragma once
#include "CoreMinimal.h"
#include "ESBZoneObjectSaveType.generated.h"

UENUM()
enum ESBZoneObjectSaveType {
    ESBZoneObjSaveType_None,
    ESBZoneObjSaveType_Save,
    ESBZoneObjSaveType_ResetZone,
    ESBZoneObjSaveType_SaveWithTransform,
    ESBZoneObjSaveType_ResetZoneWithTransform,
};

