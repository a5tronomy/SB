#pragma once
#include "CoreMinimal.h"
#include "ESBUISettingState.generated.h"

UENUM()
enum class ESBUISettingState {
    None,
    FocusSideTab,
    FocusDetail,
    SelectDetailSlot,
};

