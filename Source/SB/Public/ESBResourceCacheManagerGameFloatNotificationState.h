#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheManagerGameFloatNotificationState.generated.h"

UENUM()
enum class ESBResourceCacheManagerGameFloatNotificationState {
    ESBResourceCacheManagerGameFloatNotificationState_Idle,
    ESBResourceCacheManagerGameFloatNotificationState_AsyncStarted,
    ESBResourceCacheManagerGameFloatNotificationState_AsyncFinished,
};

