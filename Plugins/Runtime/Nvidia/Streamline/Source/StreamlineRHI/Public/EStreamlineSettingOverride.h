#pragma once
#include "CoreMinimal.h"
#include "EStreamlineSettingOverride.generated.h"

UENUM()
enum class EStreamlineSettingOverride : uint8 {
    Enabled,
    Disabled,
    UseProjectSettings,
};

