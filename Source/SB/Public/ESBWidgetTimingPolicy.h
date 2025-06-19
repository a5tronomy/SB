#pragma once
#include "CoreMinimal.h"
#include "ESBWidgetTimingPolicy.generated.h"

UENUM()
enum class ESBWidgetTimingPolicy : uint8 {
    RealTime,
    GameTime,
};

