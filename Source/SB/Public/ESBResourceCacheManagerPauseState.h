#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheManagerPauseState.generated.h"

UENUM()
enum class ESBResourceCacheManagerPauseState {
    ESBResourceCacheManagerPauseState_None,
    ESBResourceCacheManagerPauseState_Paused,
    ESBResourceCacheManagerPauseState_Unpaused,
};

