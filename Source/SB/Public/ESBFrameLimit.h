#pragma once
#include "CoreMinimal.h"
#include "ESBFrameLimit.generated.h"

UENUM()
enum class ESBFrameLimit : uint8 {
    FrameLimit_30,
    FrameLimit_45,
    FrameLimit_60,
    FrameLimit_120,
    FrameLimit_144,
    FrameLimit_240,
    FrameLimit_Unlimited,
};

