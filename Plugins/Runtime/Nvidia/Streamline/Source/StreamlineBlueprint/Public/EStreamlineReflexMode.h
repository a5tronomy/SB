#pragma once
#include "CoreMinimal.h"
#include "EStreamlineReflexMode.generated.h"

UENUM()
enum class EStreamlineReflexMode : uint8 {
    Off,
    Enabled,
    Boost = 3,
};

