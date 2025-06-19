#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorldMapTargetDisplayType.generated.h"

UENUM()
enum ESBUIWorldMapTargetDisplayType {
    ESBUIWorldMapTargetDisplayType_None,
    ESBUIWorldMapTargetDisplayType_Always,
    ESBUIWorldMapTargetDisplayType_WhenActive,
    ESBUIWorldMapTargetDisplayType_Never,
};

