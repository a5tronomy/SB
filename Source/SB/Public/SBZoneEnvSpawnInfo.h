#pragma once
#include "CoreMinimal.h"
#include "SBZoneEnvSpawnInfo.generated.h"

USTRUCT()
struct FSBZoneEnvSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bDynamicSpawn;
    
    UPROPERTY(Transient)
    uint32 SpawnDataId;
    
    SB_API FSBZoneEnvSpawnInfo();
};

