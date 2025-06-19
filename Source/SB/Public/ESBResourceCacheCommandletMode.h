#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheCommandletMode.generated.h"

UENUM()
enum class ESBResourceCacheCommandletMode {
    ESBResourceCacheCommandletMode_PlayerAndDrone,
    ESBResourceCacheCommandletMode_Character,
    ESBResourceCacheCommandletMode_World,
    ESBResourceCacheCommandletMode_World_ClusteringOnly,
    ESBResourceCacheCommandletMode_AllWorld,
    ESBResourceCacheCommandletMode_AllWorld_ClusteringOnly,
    ESBResourceCacheCommandletMode_Whitelist,
    ESBResourceCacheCommandletMode_Configuration,
    ESBResourceCacheCommandletMode_TrainingRoom,
    ESBResourceCacheCommandletMode_All,
};

