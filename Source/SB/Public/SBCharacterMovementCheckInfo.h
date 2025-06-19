#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBCameraSlopeMoveType.h"
#include "SBCharacterMovementCheckInfo.generated.h"

class UParticleSystemComponent;
class USpotLightComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FSBCharacterMovementCheckInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector LastUpdateLocation;
    
    UPROPERTY(Transient)
    FVector LocalPoints[18];
    
    UPROPERTY(Transient)
    FVector WorldPoints[18];
    
    UPROPERTY(Transient)
    FVector WorldNormals[18];
    
    UPROPERTY(Transient)
    FVector WorldTopDownHeightPoints[18];
    
    UPROPERTY(Transient)
    FVector FutureMovingPoint[2];
    
    UPROPERTY(Transient)
    FVector FutureMovingPointNormal[2];
    
    UPROPERTY(Transient)
    int32 FutureMovingPointEnableHuddleUp[2];
    
    UPROPERTY(Transient)
    float FutureMovingPointSlopeDegree[2];
    
    UPROPERTY(Transient)
    float FutureMovingPointDiff[2];
    
    UPROPERTY(Transient)
    FVector FutureCamDirPoint[2];
    
    UPROPERTY(Transient)
    float FutureCamDirPointSlopeDegree[2];
    
    UPROPERTY(Transient)
    int32 CurrentFollowTargetIndex;
    
    UPROPERTY(Transient)
    int32 NextFollowTargetIndex;
    
    UPROPERTY(Transient)
    float RemainCalcNextFollowTargetIndexSec;
    
    UPROPERTY(Transient)
    float RemainNextTargetMove;
    
    UPROPERTY(Transient)
    float AverageSlopeDegree;
    
    UPROPERTY(Transient)
    float AverageSlopeDegreeAtCamDir;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCameraSlopeMoveType> CameraSlopeMoveType;
    
    UPROPERTY(Transient)
    bool bRunCameraSlopeMoveAlpha;
    
    UPROPERTY(Transient)
    float CurrentCameraSlopeMoveAlpha;
    
    UPROPERTY(Transient)
    float CurrentCameraSlopeMoveRunningTime;
    
    UPROPERTY(Transient)
    float RemainBlockCameraSlopeMove;
    
    UPROPERTY(Transient)
    float CameraSlopeRunTimeFromStart;
    
    UPROPERTY(Transient)
    FVector HistoryFollowTargetLoc[15];
    
    UPROPERTY(Transient)
    FVector HistoryFollowTargetDir[15];
    
    UPROPERTY(Transient)
    int32 CurrentHistoryFollowCount;
    
    UPROPERTY(Transient)
    FVector CurrentFollowTargetLocation;
    
    UPROPERTY(Transient)
    FRotator CurrentFollowTargetRotation;
    
    UPROPERTY(Instanced, Transient)
    UParticleSystemComponent* pFollowParticle;
    
    UPROPERTY(Instanced, Transient)
    USpotLightComponent* pFollowSpotLight;
    
    UPROPERTY(Transient)
    float WorldHeightFromCenter;
    
    UPROPERTY(Transient)
    float WorldHeightFromTargetCharacterForward;
    
    UPROPERTY(Transient)
    float WorldHeightFromTargetCharacterForwardForSprint;
    
    UPROPERTY(Transient)
    FVector ActorBottomLocation;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* CheckerComponents[18];
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* CheckerFutureComponents[2];
    
    UPROPERTY(Transient)
    bool bInit;
    
    SB_API FSBCharacterMovementCheckInfo();
};

