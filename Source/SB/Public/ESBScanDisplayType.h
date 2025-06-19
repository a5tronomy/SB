#pragma once
#include "CoreMinimal.h"
#include "ESBScanDisplayType.generated.h"

UENUM()
enum ESBScanDisplayType {
    ESBScanDisplayType_None,
    ESBScanDisplayType_CharNative,
    ESBScanDisplayType_CharRobotEnemy,
    ESBScanDisplayType_CharRobotAlly,
    ESBScanDisplayType_CharAEEnemy,
    ESBScanDisplayType_CharAEAlly,
    ESBScanDisplayType_CharUnknownAlly,
    ESBScanDisplayType_EnvMachine = 50,
    ESBScanDisplayType_EnvCrate,
    ESBScanDisplayType_EnvAE,
    ESBScanDisplayType_EnvRobot,
    ESBScanDisplayType_ItemNormal = 100,
    ESBScanDisplayType_ItemEquipment,
    ESBScanDisplayType_ItemFusionCell,
    ESBScanDisplayType_ItemAmmo,
    ESBScanDisplayType_ItemGold,
    ESBScanDisplayType_ItemCore,
    ESBScanDisplayType_ItemValuables,
    ESBScanDisplayType_ItemMaterial,
    ESBScanDisplayType_EventMovePath = 150,
    ESBScanDisplayType_Max = 255 UMETA(Hidden),
};

