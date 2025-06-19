#pragma once
#include "CoreMinimal.h"
#include "ESBLowPassFilterSoundNodeType.generated.h"

UENUM()
enum class ESBLowPassFilterSoundNodeType : int32 {
    Replace,
    Multiply,
};

