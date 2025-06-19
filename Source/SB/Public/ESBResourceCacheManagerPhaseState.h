#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheManagerPhaseState.generated.h"

UENUM()
enum class ESBResourceCacheManagerPhaseState {
    SBResourceCacheManagerPhaseState_Init,
    SBResourceCacheManagerPhaseState_WaitingForStartLevelToStart,
    SBResourceCacheManagerPhaseState_WaitingForInitialCaching,
    SBResourceCacheManagerPhaseState_CachingInitials,
    SBResourceCacheManagerPhaseState_FinishedInitialCaching,
    SBResourceCacheManagerPhaseState_WaitingForStartZoneToCache,
    SBResourceCacheManagerPhaseState_CachingStartZone,
    SBResourceCacheManagerPhaseState_PoolingBP,
    SBResourceCacheManagerPhaseState_FinishedStartZoneCaching,
    SBResourceCacheManagerPhaseState_Operating,
    SBResourceCacheManagerPhaseState_Operating_Server,
    SBResourceCacheManagerPhaseState_Terminated,
};

