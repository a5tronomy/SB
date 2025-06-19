#pragma once
#include "CoreMinimal.h"
#include "ESBUITrackingContainerType.generated.h"

UENUM()
enum ESBUITrackingContainerType {
    ESBUITrackingContainerType_None,
    ESBUITrackingContainerType_Instance,
    ESBUITrackingContainerType_SpawnPoint,
    ESBUITrackingContainerType_SaveData,
};

