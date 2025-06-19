#pragma once
#include "CoreMinimal.h"
#include "ESBUIKeyMappingViewerCategoryType.generated.h"

UENUM()
enum class ESBUIKeyMappingViewerCategoryType : uint8 {
    All,
    Main,
    TPSMode,
    Swim,
    Interaction,
    Fishing,
};

