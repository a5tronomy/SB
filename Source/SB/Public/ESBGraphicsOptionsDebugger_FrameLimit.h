#pragma once
#include "CoreMinimal.h"
#include "ESBGraphicsOptionsDebugger_FrameLimit.generated.h"

UENUM()
enum class ESBGraphicsOptionsDebugger_FrameLimit {
    LimitFrame_30,
    LimitFrame_60,
    LimitFrame_120,
    LimitFrame_144,
    LimitFrame_240,
    Unlimited,
};

