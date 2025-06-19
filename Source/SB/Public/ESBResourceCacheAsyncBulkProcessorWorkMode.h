#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheAsyncBulkProcessorWorkMode.generated.h"

UENUM()
enum ESBResourceCacheAsyncBulkProcessorWorkMode {
    SBResourceCacheAsyncBulkProcessorWorkMode_Invalid,
    SBResourceCacheAsyncBulkProcessorWorkMode_Cache,
    SBResourceCacheAsyncBulkProcessorWorkMode_Uncache,
};

