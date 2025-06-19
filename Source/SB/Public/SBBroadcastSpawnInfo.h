#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBBroadcastSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBBroadcastSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ActorGuid;
    
    UPROPERTY()
    uint32 CharacterDataId;
    
    UPROPERTY()
    uint32 EventSpawnId;
    
    UPROPERTY()
    uint32 PlayerId;
    
    UPROPERTY()
    FVector SpawnPosition;
    
    UPROPERTY()
    FRotator SpawnRotation;
    
    SB_API FSBBroadcastSpawnInfo();
};

