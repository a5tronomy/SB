#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheAsyncLoadState.generated.h"

UENUM()
enum ESBResourceCacheAsyncLoadState {
    SBResourceCacheAsyncLoadState_Invalid,
    SBResourceCacheAsyncLoadState_Unloaded,
    SBResourceCacheAsyncLoadState_LoadStalled,
    SBResourceCacheAsyncLoadState_Loading,
    SBResourceCacheAsyncLoadState_Completed,
    SBResourceCacheAsyncLoadState_Processing,
    SBResourceCacheAsyncLoadState_Cached,
    SBResourceCacheAsyncLoadState_PendingUnprocessing,
    SBResourceCacheAsyncLoadState_Unprocessing,
};

