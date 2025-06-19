#pragma once
#include "CoreMinimal.h"
#include "ESBAspectRatio.generated.h"

UENUM()
enum class ESBAspectRatio : uint8 {
    AspectRatio_Auto,
    AspectRatio_32_9,
    AspectRatio_21_9,
    AspectRatio_16_9,
    AspectRatio_16_10,
    AspectRatio_4_3,
    AspectRatio_5_4,
};

