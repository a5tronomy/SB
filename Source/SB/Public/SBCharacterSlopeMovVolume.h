#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBCharacterSlopeMovVolume.generated.h"

class AActor;
class USplineComponent;
class UStaticMesh;

UCLASS()
class SB_API ASBCharacterSlopeMovVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USplineComponent* MovingSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> MovingSplineMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> MovingSplineBaseMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> MakFromMovingSplineMeshSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMakFromMovingSplineMeshActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USplineComponent* MakedMovingSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreSlopeMovingCancelRayCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovingSplineAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndPointMovingStartBlockAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IdleRunBlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveForwardScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveRightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bControlRelativeLocZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeLocZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveControlScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveControlScaleRatioFromHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxJumpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxToAnotherMovSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnableSlopeCheckExtraRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SlopeMoveJumpLandingCustomValidCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeMoveJumpLandingDegUpVecToHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideSlopeMoveUpVectorBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeMoveUpVectorBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CamDollyIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    UPROPERTY(Transient)
    int32 LastEnableInteractionSegmentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnableInteractionSegmentSearchRange;
    
    ASBCharacterSlopeMovVolume(const FObjectInitializer& ObjectInitializer);

};

