#pragma once
#include "CoreMinimal.h"
#include "ESBWidgetBlendMode.generated.h"

UENUM()
enum class ESBWidgetBlendMode : uint8 {
    Opaque,
    Masked,
    Transparent,
};

