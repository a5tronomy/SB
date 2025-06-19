#pragma once
#include "CoreMinimal.h"
#include "ESBUIKeyMappingViewerManualSlotCondition.generated.h"

UENUM()
enum class ESBUIKeyMappingViewerManualSlotCondition {
    None,
    EnableReverseThumbStick,
    DisableReverseThumbStick,
    Count,
};

