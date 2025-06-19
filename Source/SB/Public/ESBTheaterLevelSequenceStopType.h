#pragma once
#include "CoreMinimal.h"
#include "ESBTheaterLevelSequenceStopType.generated.h"

UENUM()
enum ESBTheaterLevelSequenceStopType {
    ESBTheaterLevelSequenceStopType_TakeChange,
    ESBTheaterLevelSequenceStopType_ShotEnd,
    ESBTheaterLevelSequenceStopType_TheaterEnd,
};

