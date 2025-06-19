#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBCharacterOverrideSlopeVolume.generated.h"

UCLASS()
class SB_API ASBCharacterOverrideSlopeVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMoveControlScaleRatioFromHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveControlScaleRatioFromHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideSlopeMoveUpSideAutoMoveDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeMoveUpSideAutoMoveDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideSlopeMoveAutoMoveLeaveExtraDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeMoveAutoMoveLeaveExtraDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideEnableMoveInputOnAutoMoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableMoveInputOnAutoMoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideJumpLandingCustomValidCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseJumpLandingCustomValidCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpLandingDegUpVecToHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideEnableSlopeCheckExtraRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnableSlopeCheckExtraRange;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBCharacterOverrideSlopeVolume(const FObjectInitializer& ObjectInitializer);

};

