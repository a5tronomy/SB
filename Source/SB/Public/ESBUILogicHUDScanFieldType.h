#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicHUDScanFieldType.generated.h"

UENUM()
enum ESBUILogicHUDScanFieldType {
    ESBUILogicHUDScanFieldType_None,
    ESBUILogicHUDScanFieldType_Actor,
    ESBUILogicHUDScanFieldType_Weak,
    ESBUILogicHUDScanFieldType_Item,
    ESBUILogicHUDScanFieldType_EventMove,
    ESBUILogicHUDScanFieldType_ZoneEnv,
};

