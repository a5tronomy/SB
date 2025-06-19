#pragma once
#include "CoreMinimal.h"
#include "ESBZoneObjControlActionType.generated.h"

UENUM()
enum ESBZoneObjControlActionType {
    ESBObjCtrlActionType_None,
    ESBObjCtrlActionType_Reset,
    ESBObjCtrlActionType_ResetConditionTrigger,
    ESBObjCtrlActionType_RetargetSpawnPoint,
    ESBObjCtrlActionType_ResetWithTransform,
    ESBObjCtrlActionType_ResetStencil,
};

