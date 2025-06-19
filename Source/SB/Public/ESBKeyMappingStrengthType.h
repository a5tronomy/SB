#pragma once
#include "CoreMinimal.h"
#include "ESBKeyMappingStrengthType.generated.h"

UENUM()
enum class ESBKeyMappingStrengthType : uint8 {
    Free,
    Recommend,
    Essential,
    UnmappableAll,
};

