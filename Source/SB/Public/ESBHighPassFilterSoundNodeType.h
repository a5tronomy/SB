#pragma once
#include "CoreMinimal.h"
#include "ESBHighPassFilterSoundNodeType.generated.h"

UENUM()
enum class ESBHighPassFilterSoundNodeType : int32 {
    Replace,
    Multiply,
};

