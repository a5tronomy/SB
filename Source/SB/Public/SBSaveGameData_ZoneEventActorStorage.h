#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBElementType.h"
#include "ESBZoneObjectSaveType.h"
#include "SBElementInfo.h"
#include "SBZoneEventActor_RestoreChunkInfo.h"
#include "SBZoneEventActor_RestoreMeshInfo.h"
#include "SBSaveGameData_ZoneEventActorStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEventActorStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorName;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePhysics;
    
    UPROPERTY(EditAnywhere)
    bool bDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bActorEnableCollision;
    
    UPROPERTY(EditAnywhere)
    int32 RemainDestructCount;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, FSBZoneEventActor_RestoreChunkInfo> RestoreChunkInfoMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FSBZoneEventActor_RestoreMeshInfo> MeshInfoMap;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBElementType>, FSBElementInfo> ElementInfoMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, bool> PhysicsConstraintStateMap;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    SB_API FSBSaveGameData_ZoneEventActorStorage();
};

