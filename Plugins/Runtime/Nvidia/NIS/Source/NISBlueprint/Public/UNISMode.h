#pragma once
#include "CoreMinimal.h"
#include "UNISMode.generated.h"

UENUM()
enum class UNISMode : uint8 {
    Off,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    Custom,
};

