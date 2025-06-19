#pragma once
#include "CoreMinimal.h"
#include "ESBKeyMappingWarningType.generated.h"

UENUM()
enum class ESBKeyMappingWarningType {
    None,
    DuplicateWarning,
    EssentialWarning,
    UnassignableWarning,
    RecommendCaution,
};

