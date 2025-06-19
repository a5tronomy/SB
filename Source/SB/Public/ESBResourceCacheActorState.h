#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheActorState.generated.h"

UENUM()
enum class ESBResourceCacheActorState {
    ESBResourceCacheActorState_OutOfRange,
    ESBResourceCacheActorState_InRange,
};

