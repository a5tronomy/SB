#pragma once
#include "CoreMinimal.h"
#include "ESBEventMoveType.h"
#include "SBMapSectorID.h"
#include "SBTableAliasName.h"
#include "SBWorldVolume.h"
#include "SBEffectVolume.generated.h"

class AActor;

UCLASS()
class SB_API ASBEffectVolume : public ASBWorldVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBTableAliasName EffectVolumeAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SafePointActorOnDead;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayerActorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnorePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseEveryZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseActiveEventMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBEventMoveType> ActiveEventMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActiveHoldAtBalanceMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAcquireSpawnItem;
    
    ASBEffectVolume(const FObjectInitializer& ObjectInitializer);

};

