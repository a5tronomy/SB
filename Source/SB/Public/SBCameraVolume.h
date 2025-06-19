#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/Volume.h"
#include "ESBCameraVoumeMoveConstraintDirectionType.h"
#include "SBMapSectorID.h"
#include "SBCameraVolume.generated.h"

class AActor;
class ACameraActor;
class UCurveFloat;

UCLASS()
class SB_API ASBCameraVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNotDetachWhenLeaveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACameraActor* TargetCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePlayerMoveDirFromCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> AttachBlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttachBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> DetachBlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetachBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtTargetCamMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* pLookAtTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LookAtTargetEnableActiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DeactiveCameraVolumeCameraResetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeactiveCameraVolumeCameraResetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeactiveCameraVolumeCameraResetYawInDegree;
    
    UPROPERTY(Transient)
    int32 RemainLookAtTargetEnableActiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtStartInDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeDirectionInputSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCancelByUserCamControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelByUserCamControlTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtMaxSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtControlCamSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookAtControlForceWalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookAtControlDisableJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookAtControlBlockSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceWalkModeInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableSprintInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableJumpInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlockSkillInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlockEventMoveLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMoveConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveConstraintDirXYOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* MoveConstraintForwardFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* MoveConstraintRightFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBCameraVoumeMoveConstraintDirectionType> MoveConstraintDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveConstraintForwardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* MoveConstraintDirectionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* MoveConstraintDirectionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MoveConstraintRightDotCalcuate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MoveConstraintEveryUpdate;
    
    UPROPERTY()
    uint8 visibleMoveConstraintDirectionVector: 1;
    
    UPROPERTY()
    uint8 visibleMoveConstraintDirectionStart: 1;
    
    UPROPERTY()
    uint8 visibleMoveConstraintDirectionEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseJumpConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpConstraintMaxJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpConstraintMaxXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString JumpConstraintJumpFrontPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpConstraintUnlockJumpFromSplineProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreImpartBaseVelocityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreImpartBaseVelocityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreImpartBaseVelocityZ;
    
    UPROPERTY(EditAnywhere)
    bool EnableTPSFlag;
    
    UPROPERTY(EditAnywhere)
    float TPS_SwitchableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bControlScreenPositionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PitchAddCurveByScreenPosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* YawAddCurveByScreenPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PositionYAddCurveByScreenPosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PositionXAddCurveByScreenPosX;
    
    UPROPERTY(EditAnywhere)
    FName EffectAlias;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBCameraVolume(const FObjectInitializer& ObjectInitializer);

};

