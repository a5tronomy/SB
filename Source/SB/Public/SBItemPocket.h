#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBItemBucketType.h"
#include "SBItemInstance.h"
#include "SBItemPocket.generated.h"

USTRUCT()
struct FSBItemPocket {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBItemBucketType> BucketType;
    
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    uint32 OwnerActorGUID;
    
    UPROPERTY()
    FVector SpawnPosition;
    
    UPROPERTY()
    FRotator SpawnRotation;
    
    UPROPERTY()
    FVector LastLocation;
    
    UPROPERTY()
    FRotator LastRotation;
    
    UPROPERTY()
    uint32 EventSpawnId;
    
    UPROPERTY()
    FName SpawnPointName;
    
    UPROPERTY()
    TArray<FSBItemInstance> ItemInstArray;
    
    UPROPERTY()
    bool bFinishSimulatePhysics;
    
    UPROPERTY(Transient)
    bool Spawned;
    
    SB_API FSBItemPocket();
};

