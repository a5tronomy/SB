#pragma once
#include "CoreMinimal.h"
#include "ESBItemSpawnRangeType.generated.h"

UENUM()
enum ESBItemSpawnRangeType {
    ESBItemSpawnRangeType_None,
    ESBItemSpawnRangeType_RandomRange,
    ESBItemSpawnRangeType_SequentialArc,
};

