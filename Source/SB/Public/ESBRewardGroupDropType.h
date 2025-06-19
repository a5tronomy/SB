#pragma once
#include "CoreMinimal.h"
#include "ESBRewardGroupDropType.generated.h"

UENUM()
enum ESBRewardGroupDropType {
    ESBRewardGroupDrop_All,
    ESBRewardGroupDrop_RandomEach,
    ESBRewardGroupDrop_RandomWeight,
    ESBRewardGroupDrop_DropRateRandomEach,
};

