#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequencePlayType.generated.h"

UENUM()
enum ESBLevelSequencePlayType {
    ESBPlayType_Play,
    ESBPlayType_Jump,
    ESBPlayType_Stop,
};

