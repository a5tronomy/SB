#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheSkeletalMeshManagerLoadState.generated.h"

UENUM()
enum class ESBResourceCacheSkeletalMeshManagerLoadState {
    ESBResourceCacheSkeletalMeshManagerLoadState_Idle,
    ESBResourceCacheSkeletalMeshManagerLoadState_Requested,
    ESBResourceCacheSkeletalMeshManagerLoadState_AsyncAssetLoadStarted,
    ESBResourceCacheSkeletalMeshManagerLoadState_AsyncAssetLoadFinished,
    ESBResourceCacheSkeletalMeshManagerLoadState_AsyncClothLoadStarted,
    ESBResourceCacheSkeletalMeshManagerLoadState_AsyncClothLoadFinished,
    ESBResourceCacheSkeletalMeshManagerLoadState_LoadComplete,
    ESBResourceCacheSkeletalMeshManagerLoadState_Finished,
    ESBResourceCacheSkeletalMeshManagerLoadState_Failed,
};

