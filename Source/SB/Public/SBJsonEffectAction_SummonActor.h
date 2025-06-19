#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBSummonActorSpawnLocationType.h"
#include "ESBSummonActorSpawnRotationType.h"
#include "SBJsonEffectAction_SummonActor.generated.h"

USTRUCT()
struct FSBJsonEffectAction_SummonActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName CharacterAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDamageShareWithOwner;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDespawnWithOwner;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBSummonActorSpawnLocationType> SpawnLocationType;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SpawnLocationSocketName;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBSummonActorSpawnRotationType> SpawnRotationType;
    
    UPROPERTY(EditAnywhere, Transient)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 SpawnPointFormationIndex;
    
    UPROPERTY(EditAnywhere, Transient)
    FVector SpawnLocation;
    
    UPROPERTY(EditAnywhere, Transient)
    FName Effect1;
    
    UPROPERTY(EditAnywhere, Transient)
    FName Effect2;
    
    UPROPERTY(EditAnywhere, Transient)
    FName Tag1;
    
    UPROPERTY(EditAnywhere, Transient)
    float DrawDistance;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDontDestroy;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bVisible;
    
    UPROPERTY(EditAnywhere, Transient)
    FString SpawnShow;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bClone;
    
    UPROPERTY(EditAnywhere, Transient)
    FName AIGroup;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckValidLocation;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckValidCapsuleRadius;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckValidCapsuleHalfHeight;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 LimitCount;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bOnGround;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckGroundStartZOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckGroundEndZOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    float DespawnDistanceToOwner;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckBlocking;
    
    SB_API FSBJsonEffectAction_SummonActor();
};

