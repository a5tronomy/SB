#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceTheaterInputCounterActionType.generated.h"

UENUM()
enum ESBLevelSequenceTheaterInputCounterActionType {
    ESBLevelSequenceTheaterInputCounterActionType_None,
    ESBLevelSequenceTheaterInputCounterActionType_SinglePress,
    ESBLevelSequenceTheaterInputCounterActionType_DoublePress,
    ESBLevelSequenceTheaterInputCounterActionType_FlowPress,
};

