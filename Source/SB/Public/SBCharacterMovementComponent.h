#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "ESBMoveInputType.h"
#include "SBActorRootMotionData.h"
#include "SBCharacterMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class UCurveVector;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SB_API USBCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float RemainCheckFallFlagDuration;
    
    UPROPERTY(Transient)
    bool bLastCheckFall;
    
    UPROPERTY(Transient)
    bool bCheckFallAtNoMoveInput;
    
    UPROPERTY(Transient)
    FVector CustomFlyFollowLocation;
    
    UPROPERTY(Transient)
    FVector PreCustomFlyFollowLocation;
    
    UPROPERTY(Transient)
    FRotator CustomFlyFollowRotation;
    
    UPROPERTY(Transient)
    bool bCustomFlyPathFollowRotation2D;
    
    UPROPERTY(Transient)
    float CustomFlyMoveSpeedPow;
    
    UPROPERTY(Transient)
    bool bCustomFlyFollowRotationVelocityBase;
    
    UPROPERTY(Transient)
    bool bCustomFlyMoveDroneMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxClimbingSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxSlopeMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxEventMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxGrabMoveDefaultSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bEventMoveApplyGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float ApplyEventMoveGravityMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float GravitiedAccelSpeedPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float GravitiedMaxEventMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float EventMoveGravityCurrentMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float CurrentEventMoveRodAngleRadian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float EventMoveRodArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float EventMoveRodVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bBeginEventMoveRodAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector EventMoveRodPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector EventMoveRodVelocityForNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float EventMoveRodAccelInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector EventMoveSearchSideRodDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 LastSideRodMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 LastSideRodMoveAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector EventMoveRodOrigin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxWallRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxFlyingActionSpeed;
    
    UPROPERTY(Config)
    float FlyingActionSideMoveAttenuation;
    
    UPROPERTY(Config)
    float FlyingActionVerticalMoveAttenuation;
    
    UPROPERTY(Config)
    float ChangeTargetFowardSensitive;
    
    UPROPERTY(Transient)
    bool bApplyCustomBuoyancyScaleAtFirstWaterTouch;
    
    UPROPERTY(Transient)
    float RemainBlockChangeSwimState;
    
    UPROPERTY(Transient)
    bool bFirstSwimStart;
    
    UPROPERTY(Transient)
    float RemainPenetrationDuration;
    
    UPROPERTY(Transient)
    FVector LastPenetrationDelta;
    
    UPROPERTY(Config)
    float HoldPenetrationDuration;
    
    UPROPERTY(Config)
    float HoldPenetrationSpeedPerSec;
    
    UPROPERTY(Transient)
    float SwimUpDownTargetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float RemainCustomYawRateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float CustomYawRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxRunSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxWalkSpeedOverride;
    
    UPROPERTY(Transient)
    float MaxWalkSpeedLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxGuardRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxLockOnRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxLockOnWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float MaxJoggingRunSpeed;
    
    UPROPERTY(Config)
    float SprintBurstSpeedScale;
    
    UPROPERTY(Config)
    float SprintBurstDuration;
    
    UPROPERTY(Transient)
    float RemainSprintBurstDuration;
    
    UPROPERTY(Config)
    float FallSlideControl;
    
    UPROPERTY(Config)
    float SprintSpeedScale;
    
    UPROPERTY(Config)
    float ExtraSprintSpeedScale;
    
    UPROPERTY(Config)
    float LockOnSprintSpeedScale;
    
    UPROPERTY(Config)
    float SprintJumpScale;
    
    UPROPERTY(Config)
    float NormalJumpScale;
    
    UPROPERTY(Config)
    float DoubleJumpScale;
    
    UPROPERTY(Config)
    float GlideGravityScale;
    
    UPROPERTY(Config)
    float FlyingActionGravityScale;
    
    UPROPERTY(Config)
    float WallRunGravityScale;
    
    UPROPERTY(Config)
    float GlideAirControlScale;
    
    UPROPERTY(Transient)
    bool bDisablePerchRadius;
    
    UPROPERTY(Transient)
    bool bSliding;
    
    UPROPERTY(Transient)
    int32 SlidingValueDirBetweenVelocity;
    
    UPROPERTY(Transient)
    float MoveStruggleAnimAlpha;
    
    UPROPERTY(Transient)
    bool bActiveMoveStruggleAnim;
    
    UPROPERTY(Transient)
    int32 DisableMoveStruggleCount;
    
    UPROPERTY(Transient)
    float MoveSpeedScaleOnSliding;
    
    UPROPERTY(Transient)
    float SlidingFriction;
    
    UPROPERTY(Transient)
    FVector SlidingForce;
    
    UPROPERTY(Transient)
    float BackupMaxStepHeight;
    
    UPROPERTY(Transient)
    bool bSlidingSlip;
    
    UPROPERTY(Transient)
    FVector SlidingSlipCollisionNormal;
    
    UPROPERTY(Transient)
    float RemainSlidingSlipCollisionNormal;
    
    UPROPERTY(Transient)
    float CameraDownBoundBasedPhysicMat;
    
    UPROPERTY(Transient)
    float RemainSlidingSlipAccelControlDuration;
    
    UPROPERTY(Transient)
    float SlidingSlipCurrentDuration;
    
    UPROPERTY(Transient)
    float RemainMaxSpeedToWalkDuration;
    
    UPROPERTY(Transient)
    float RemainHoldSlidingSlipDuration;
    
    UPROPERTY(Transient)
    bool bCompleteHoldSlidingSlip;
    
    UPROPERTY(Transient)
    bool bFixedSlidingSlipDir;
    
    UPROPERTY(Transient)
    bool bSwiming;
    
    UPROPERTY(Transient)
    bool bDive;
    
    UPROPERTY(Transient)
    bool bTransitSwimBeetweenDive;
    
    UPROPERTY(Transient)
    float CurrentSwimDepthValue;
    
    UPROPERTY(Transient)
    float MaxOverrideCustomMovementSpeed;
    
    UPROPERTY(EditAnywhere)
    TArray<UCurveFloat*> MoveSpeedScaleCache;
    
    UPROPERTY(Transient)
    float RemainCustomMoveScaleCurveDuration;
    
    UPROPERTY(Transient)
    float CustomMoveScaleCurveDuration;
    
    UPROPERTY(Transient)
    float RemainSwimAccelerationControlDuration;
    
    UPROPERTY(Transient)
    float RemainHoldCurrentSprintVelocity;
    
    UPROPERTY(Transient)
    float AdditiveWalkSpeedScale;
    
    UPROPERTY(Transient)
    bool bDisableGravity;
    
    UPROPERTY(Transient)
    UCurveFloat* CustomMoveScaleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* WallRunGravityCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* JumpFallingGravityCurve;
    
    UPROPERTY(EditAnywhere)
    bool bUseJumpFallingGravityCurve;
    
    UPROPERTY(Transient)
    float JumpFallingTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RodDampingCurveFromAngleRadian;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* FallToMoveCurve;
    
    UPROPERTY(EditAnywhere)
    bool bUseFallToMoveCurve;
    
    UPROPERTY(EditAnywhere)
    float ComputeFloorSweepRadiusRate;
    
    UPROPERTY(EditAnywhere)
    bool bDisableRotationScaleOnPathWay;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationScaleByAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMinScaleByMoveAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationScaleByMinMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMinScaleByMinMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxScaleByMinMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMinAngleMinMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxAngleByMinMaxAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationScaleByVelocity;
    
    UPROPERTY(EditAnywhere)
    float RotationMinScaleByVelocity;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxScaleByVelocity;
    
    UPROPERTY(EditAnywhere)
    float RotationMinVelocityByVelocity;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxVelocityByVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationScaleByDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationMinScaleByDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxScaleByDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationMinVelocityByDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxVelocityByDistance;
    
    UPROPERTY(EditAnywhere)
    bool bUsScaleRotationOvertime;
    
    UPROPERTY(EditAnywhere)
    float ScaleRotationStartTimeByOvertime;
    
    UPROPERTY(EditAnywhere)
    float ScaleRotationRateByOvertime;
    
    UPROPERTY(EditAnywhere)
    float ScaleRotationLimitRateByOvertime;
    
    UPROPERTY(EditAnywhere)
    float RotationForceScaleWhenBlocking;
    
    UPROPERTY(EditAnywhere)
    float GrabRotationLerpAlphaDefault;
    
    UPROPERTY(Transient)
    float RemainFallToMoveDuration;
    
    UPROPERTY(Transient)
    float FallToMoveSpeedScale;
    
    UPROPERTY(Transient)
    FVector VelocityForFallToMove;
    
    UPROPERTY(Transient)
    FVector TargetCharacterFoward;
    
    UPROPERTY(Transient)
    float TargetCharacterRotationPlayTime;
    
    UPROPERTY(Transient)
    FVector TargetCharacterMotionVelocity;
    
    UPROPERTY(Transient)
    FVector PathFollowingTargetLocation;
    
    UPROPERTY(Transient)
    FVector TargetSprintVelocityForward;
    
    UPROPERTY(Transient)
    FVector CurrentSprintVelocityForward;
    
    UPROPERTY(Transient)
    bool bUnlockSprintRotChange;
    
    UPROPERTY(Transient)
    FVector4 LastMoveDirectionWeight;
    
    UPROPERTY(Transient)
    FVector TargetCharacterForceTurnFoward;
    
    UPROPERTY(Transient)
    FRotator TargetCharacterForceTurnRotationRate;
    
    UPROPERTY(Transient)
    FVector WallRunDir;
    
    UPROPERTY(Transient)
    FVector WallRunNormal;
    
    UPROPERTY(Transient)
    FVector WallHitBounceDirectMove;
    
    UPROPERTY(Transient)
    float WallHitBounceDuration;
    
    UPROPERTY(Transient)
    float WallHitBounceStartDelay;
    
    UPROPERTY(Transient)
    float WallHitBounceTime;
    
    UPROPERTY(Transient)
    bool bDisableFalling;
    
    UPROPERTY(Transient)
    bool bDisableSlopeMoving;
    
    UPROPERTY(Transient)
    float RequestDisableSlopeMovingDuration;
    
    UPROPERTY(Transient)
    float SlopeMoveMaxSpeedControlDuration;
    
    UPROPERTY(Transient)
    float SlopeMoveMaxSpeedBlendOutDuration;
    
    UPROPERTY(Transient)
    float RemainSlopeMoveMaxSpeedDuration;
    
    UPROPERTY(Transient)
    float ControledSlopeMoveMaxSpeed;
    
    UPROPERTY(Transient)
    float CurrentSlopeMaxMoveSpeed;
    
    UPROPERTY(Transient)
    FSBActorRootMotionData RootMotionData;
    
    UPROPERTY(Transient)
    bool bDisableDesiredRotation;
    
    UPROPERTY(Transient)
    bool bTempDisableForwardVectorJump;
    
    UPROPERTY(Transient)
    FVector PreviousActorLocation;
    
    UPROPERTY(Transient)
    float LastVelocityXAxis;
    
    UPROPERTY(Transient)
    float LastVelocityYAxis;
    
    UPROPERTY(Transient)
    float AnimGraphGetVelocityXAxis;
    
    UPROPERTY(Transient)
    float AnimGraphGetVelocityYAxis;
    
    UPROPERTY(Transient)
    bool bRunningMoveToLocation;
    
    UPROPERTY(Transient)
    bool bFinishMoveToLocation;
    
    UPROPERTY(Transient)
    float MoveToLocationOverrideBrakingDist;
    
    UPROPERTY(Transient)
    bool bMoveToLocationWaitFinishCustomAnim;
    
    UPROPERTY(Transient)
    bool bMoveToLocationUseSpeedAnimGraph;
    
    UPROPERTY(Transient)
    FVector MoveToTargetLocation;
    
    UPROPERTY(Transient)
    FVector MoveToBrakingEndLocation;
    
    UPROPERTY(Transient)
    FVector MoveToPrevActorLocation;
    
    UPROPERTY(Transient)
    FVector MoveToDirection;
    
    UPROPERTY(Transient)
    FVector MoveToLocationVector;
    
    UPROPERTY(Transient)
    bool MoveToLocationUseBraking;
    
    UPROPERTY(Transient)
    bool MoveToLocationFinishBraking;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMoveInputType> MoveToLocationBrakingInputType;
    
    UPROPERTY(Transient)
    float MoveToLocationBrakingDistStart;
    
    UPROPERTY(Transient)
    float MoveToLocationBrakingDistEnd;
    
    UPROPERTY(Transient)
    bool MoveToLocationUseRotation;
    
    UPROPERTY(Transient)
    FRotator MoveToTargetRotation;
    
    UPROPERTY(Transient)
    FVector MoveToTargetRotationForward;
    
    UPROPERTY(Transient)
    float MoveToLocationSpeedScale;
    
    UPROPERTY(Transient)
    float MoveToLocationOverrideAnimSpeed;
    
    UPROPERTY(Transient)
    float MoveToLocationLastAnimSpeed;
    
    UPROPERTY(Transient)
    float MoveToLocationEndAnimRetentionRemainTime;
    
    UPROPERTY(Transient)
    bool MoveToLocationManualStop;
    
    UPROPERTY(Transient)
    FVector MoveToLocationLastVector;
    
    UPROPERTY(Transient)
    float MoveToLocationLastScale;
    
    UPROPERTY(Transient)
    FVector LastOnGroundLocation;
    
    UPROPERTY(Transient)
    TEnumAsByte<EMovementMode> PreMovementMode;
    
    UPROPERTY(Transient)
    uint8 PreCustomMovementMode;
    
    UPROPERTY(Transient)
    uint32 RefreshFrameCountIgnoredCollisionActors;
    
    UPROPERTY(Transient)
    TArray<AActor*> IgnoredCollisionActors;
    
    UPROPERTY(Transient)
    float InterpolationTimeAnimAcceleration;
    
    UPROPERTY(Transient)
    FVector InterpolationAnimAcceleration;
    
    UPROPERTY(Transient)
    float CachedMaxSpeed;
    
    UPROPERTY(Transient)
    bool bMoveAreaLimit;
    
    UPROPERTY(Transient)
    bool bMoveAreaLimitOutLocation;
    
    UPROPERTY(Transient)
    FVector MoveAreaLimitCenterPosition;
    
    UPROPERTY(Transient)
    float MoveAreaLimitDistance;
    
    UPROPERTY(Transient)
    uint64 FallingToWalkingFrameCount;
    
private:
    UPROPERTY(Transient)
    FVector BlendVelocity;
    
    UPROPERTY(Transient)
    float BlendVelocityMaxTime;
    
    UPROPERTY(Transient)
    float CurrentBlendVelocityTime;
    
    UPROPERTY(Transient)
    bool bOnceSlidingSlipAccelControlTimeZero;
    
    UPROPERTY(Transient)
    bool bIsEnableParallelTick;
    
public:
    USBCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetControlSlopeMoveSpeed(float InScale, float ControlDuration, float BlendOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlidingFlagForBP();
    
    UFUNCTION(BlueprintCallable)
    bool IsWalkSlidingSlip();
    
    UFUNCTION(BlueprintCallable)
    bool IsWalkSliding();
    
    UFUNCTION(BlueprintCallable)
    bool IsUnderWater(bool inEnableSwim);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableSwim();
    
    UFUNCTION(BlueprintCallable)
    float GetVelocityYAxis(float Interpolation);
    
    UFUNCTION(BlueprintCallable)
    float GetVelocityXAxis(float Interpolation);
    
    UFUNCTION(BlueprintCallable)
    float GetVelocity();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSlidingValueDirBetweenVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSBTargetCharacterForwardVector();
    
    UFUNCTION(BlueprintPure)
    float GetSBMaxJumpHeightWithJumpTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetSBMaxJumpHeight() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMoveStruggleAnimAlpha();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentSprintVelocityForward();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimAcceleration();
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveMoveStruggleAnim();
    
};

