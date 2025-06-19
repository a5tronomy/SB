#pragma once
#include "CoreMinimal.h"
#include "ESBFSR2QualityMode.generated.h"

UENUM()
enum ESBFSR2QualityMode {
    SBFSR2QualityMode_None,
    SBFSR2QualityMode_Quality,
    SBFSR2QualityMode_Balanced,
    SBFSR2QualityMode_Performance,
    SBFSR2QualityMode_UltraPerformance,
};

