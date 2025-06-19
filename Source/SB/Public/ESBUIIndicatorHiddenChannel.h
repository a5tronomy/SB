#pragma once
#include "CoreMinimal.h"
#include "ESBUIIndicatorHiddenChannel.generated.h"

UENUM()
enum ESBUIIndicatorHiddenChannel {
    ESBUIIndicatorHiddenChannel_None,
    ESBUIIndicatorHiddenChannel_1 = 2,
    ESBUIIndicatorHiddenChannel_2 = 4,
    ESBUIIndicatorHiddenChannel_3 = 8,
    ESBUIIndicatorHiddenChannel_4 = 16,
};

