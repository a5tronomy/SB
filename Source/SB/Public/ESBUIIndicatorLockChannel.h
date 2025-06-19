#pragma once
#include "CoreMinimal.h"
#include "ESBUIIndicatorLockChannel.generated.h"

UENUM()
enum ESBUIIndicatorLockChannel {
    ESBUIIndicatorLockChannel_None,
    ESBUIIndicatorLockChannel_1 = 2,
    ESBUIIndicatorLockChannel_2 = 4,
    ESBUIIndicatorLockChannel_3 = 8,
    ESBUIIndicatorLockChannel_4 = 16,
};

