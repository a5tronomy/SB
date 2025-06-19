#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/CrowdAgentInterface.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Matinee/MatineeAnimInterface.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESBCharacterTransitAnim.h"
#include "ESBLookAtIKType.h"
#include "AddControllerValue.h"
#include "ControlledForceObjectInfo.h"
#include "ESBBoneBlendType.h"
#include "ESBCameraVoumeMoveConstraintDirectionType.h"
#include "ESBCharacterFlyingActionState.h"
#include "ESBCharacterFootPlacement.h"
#include "ESBCharacterMoveAnimBlendMode.h"
#include "ESBCharacterMoveType.h"
#include "ESBCharacterObjectStateType.h"
#include "ESBCharacterWireModeState.h"
#include "ESBCharaterAdditiveBodyType.h"
#include "ESBEventMoveIKApplySlot.h"
#include "ESBEventMoveType.h"
#include "ESBFishingModeType.h"
#include "ESBInteractionStepState.h"
#include "ESBMetaAIBehaviorStance.h"
#include "ESBNotifyBPCrowdControl.h"
#include "ESBNotifyBPEvent.h"
#include "ESBSkelMeshSlot.h"
#include "ESBTPSModeType.h"
#include "HitStopIK.h"
#include "MaterialChangeID.h"
#include "MaterialParamID.h"
#include "SBActorMoveData.h"
#include "SBAnimSyncSet.h"
#include "SBBroadcastSpawnInfo.h"
#include "SBCameraEventBaseScreenPosData.h"
#include "SBCameraEventBaseScreenPosition.h"
#include "SBCharMovingStanceData.h"
#include "SBCharacterBindingInfo.h"
#include "SBCharacterCuttingMeshInfo.h"
#include "SBCharacterDeactiveMovingInfo.h"
#include "SBCharacterEventMoveInfo.h"
#include "SBCharacterEventMoveInterface.h"
#include "SBCharacterInteractionMoveInfo.h"
#include "SBCharacterMaterialChangeInfoList.h"
#include "SBCharacterMaterialParamInfoList.h"
#include "SBCharacterMoveInfo.h"
#include "SBCharacterMovementCheckInfo.h"
#include "SBCharacterSplineExtraData.h"
#include "SBEngineActorPoolingInterface.h"
#include "SBEventMoveResultExtraInfo.h"
#include "SBFixedTargetRotationAxisInfo.h"
#include "SBFixedTargetRotationMoveInfo.h"
#include "SBLastSetBlendSpace.h"
#include "SBManualBlendCamInfo.h"
#include "SBMeshInfo.h"
#include "SBOverrideAnimTransit.h"
#include "SBOverrideFootStepPhySurfaceInfo.h"
#include "SBRagdollInfo.h"
#include "SBSelfiePoseInfo.h"
#include "SBShapeCollisionInfo.h"
#include "SBShowActorInterface.h"
#include "SBTransitAnimBlendTime.h"
#include "SBCharacter.generated.h"

class AActor;
class ASBAmbientSoundVolume;
class ASBBobber;
class ASBCameraVolume;
class ASBCharMovingStanceVolume;
class ASBCharacter;
class ASBCharacterOverrideSlopeVolume;
class ASBCharacterSlopeMovVolume;
class ASBFootStepPhySurfaceVolume;
class ASBRegionVolume;
class ASBSoundEventVolume;
class ASBWorldCompositionStreamingBlockingVolume;
class ASBZoneEnvActor;
class ASBZoneVolume;
class UAnimSequence;
class UBlendSpaceBase;
class UCameraComponent;
class UCapsuleComponent;
class UCurveFloat;
class UFXSystemComponent;
class UNiagaraParameterCollection;
class UPhysicsAsset;
class UPrimitiveComponent;
class USBBehaviorTreeComponent;
class USBCharacterDialogBoundsSet;
class USBCharacterFactorSet;
class USBCharacterFactorSetComponent;
class USBCharacterFootStepSet;
class USBCharacterMovementComponent;
class USBCharacterParticleSet;
class USBCharacterPoseSnapshotDataAsset;
class USBCharacterSelfiePoseDataAsset;
class USBCharacterSoundSet;
class USBCollisionGroupComponent;
class USBDroneLocationData;
class USBMoveTracker;
class USBSaveGameComponent;
class USBSkeletalMeshComponent;
class USBSliceSkeletalMeshDataAsset;
class USBSliceSkeletalMeshTemplateDataAsset;
class USceneComponent;
class USplineComponent;
class USpotLightComponent;
class USpringArmComponent;

UCLASS()
class SB_API ASBCharacter : public ACharacter, public IMatineeAnimInterface, public ISBShowActorInterface, public ISBEngineActorPoolingInterface, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseLookUpRate;
    
    UPROPERTY(Transient)
    float CurrentLockOnDistance;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USBCollisionGroupComponent* CollisionGroupComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySpline;
    
    UPROPERTY(Transient)
    bool bUseInteractionCamClamp;
    
    UPROPERTY(Transient)
    bool bEyeTrackingToCam;
    
    UPROPERTY(Transient)
    float RemainEyeTrackingToCam;
    
    UPROPERTY(Transient)
    float RemainNextCheckEyeTrackingToCam;
    
    UPROPERTY(Transient)
    float RemainNextCheckPlayIdleEventAnim;
    
    UPROPERTY(Transient)
    bool bDisableIdleEventAnim;
    
    UPROPERTY(Transient)
    float MouseWheelLockOnBlockDuration;
    
    UPROPERTY(Transient)
    FRotator EyeTrackingToCamRot_R;
    
    UPROPERTY(Transient)
    FRotator EyeTrackingToCamRot_L;
    
    UPROPERTY(Transient)
    FRotator EyeTrackingToCamRot_Neck;
    
    UPROPERTY(Transient)
    float EyeTrackingAlpha;
    
    UPROPERTY(Transient)
    FSBAnimSyncSet AnimSetSyncData;
    
    UPROPERTY(Transient)
    bool bInitAnimSetSyncData;
    
    UPROPERTY(Transient)
    TArray<FName> CuttingBones;
    
    UPROPERTY(Transient)
    TArray<FColor> CuttingVertiesColor;
    
    UPROPERTY(Transient)
    int32 CuttingMeshLOD;
    
    UPROPERTY(Transient)
    TArray<FSBCharacterCuttingMeshInfo> CuttingMeshInfos;
    
    UPROPERTY(Transient)
    FName CuttingMeshBreakBoneName;
    
    UPROPERTY(Transient)
    FVector CuttingMeshBreakLocation;
    
    UPROPERTY(Transient)
    float CuttingMeshImpulsePower;
    
    UPROPERTY(Transient)
    bool bIsCuttedMesh;
    
    UPROPERTY(EditAnywhere)
    bool bUseControlCollisionAtSwim;
    
    UPROPERTY(EditAnywhere)
    bool bActiveFlyingSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSwimSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveUnderWaterSwimSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSlopeMovingSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSlopeMovingSpline2;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSideRodSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveRodSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSideToSideSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveBalanceBeamSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveSlidingSlipSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveHoldBalanceBeamSpline;
    
    UPROPERTY(EditAnywhere)
    bool bActiveWallRunSpline;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData FlyingSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData SwimSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData UnderWaterSwimSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData SlopeMovingSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData SideRodSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData RodSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData SideToSideSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData BalanceBeamSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData SlidingSlipSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData HoldBalanceBeamSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterSplineExtraData WallRunSplineExtraData;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnReleaseDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnArmLength;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnPitchAdd;
    
    UPROPERTY(EditAnywhere)
    FName LockOnTargetBoneSocketName;
    
    UPROPERTY(EditAnywhere)
    FName LockOnUIDisplayBoneSocketName;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLockOnPitchMin;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnPitchMinValue;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLockOnPitchMax;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnPitchMaxValue;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLockOnCamBoomHeight;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnCamBoomHeight;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLockOnCamBoomLeftRight;
    
    UPROPERTY(EditAnywhere)
    float OverrideLockOnCamBoomLeftRight;
    
    UPROPERTY(EditAnywhere)
    FName GaugeDisplayBoneSocketName;
    
    UPROPERTY(Transient)
    FName CustomLockOnTargetBoneSocketName;
    
    UPROPERTY(Transient)
    float LockOnPitchMaxAtCustomTargetBoneSocket;
    
    UPROPERTY(Transient)
    bool bShortPonyTail;
    
    UPROPERTY(Transient)
    bool bApplyShortPonyTailPhysics;
    
    UPROPERTY(Transient)
    FVector LockOnJumpToMoveDir;
    
    UPROPERTY(Transient)
    float RemainCustomLockOnTargetDuration;
    
    UPROPERTY(Transient)
    float CustomLockOnTargetDuration;
    
    UPROPERTY(Transient)
    float CustomLockOnTargetBlendInDuration;
    
    UPROPERTY(Transient)
    float CustomLockOnTargetBlendOutDuration;
    
    UPROPERTY(Transient)
    FName BlendSrcCustomLockOnTargetBoneName;
    
    UPROPERTY(Transient)
    float RemainRunningLockOnRotation;
    
    UPROPERTY(EditAnywhere)
    FName LockOnPitchOffsetBaseBoneSocketName;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LockOnPointCurveByDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LockOnPointCurveByDir;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LockOnPointWeightCurveByDir;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AimLockOnPointCurveByDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AimLockOnPointCurveByDir;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AimLockOnPointWeightCurveByDir;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* OverlapBodyCollision;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* PhysicsCapsuleCollision;
    
    UPROPERTY(EditAnywhere)
    bool bLockOnRunRotationEnable;
    
    UPROPERTY(EditAnywhere)
    float LockOnRunRotationDegree;
    
    UPROPERTY(EditAnywhere)
    float LockOnRunRotationDuration;
    
    UPROPERTY(EditAnywhere)
    float LockOnRunRotToCharDuration;
    
    UPROPERTY(EditAnywhere)
    bool bLockOnRunRotationLowerAnim;
    
    UPROPERTY(Transient)
    FVector EventDirection;
    
    UPROPERTY(Transient)
    bool bFreeCamMode;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreSetMeshInfoCorrectionCapsuleZ;
    
    UPROPERTY(EditAnywhere)
    bool bUseSetMeshInfoCapsuleHeight;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineFlying;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSwim;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineUnderWaterSwim;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSlopeMoving;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSlopeMoving2;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSideRod;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineRod;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSideToSide;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineBalanceBeam;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineSlidingSlip;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineHoldBalanceBeam;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* CameraDollySplineWallRun;
    
    UPROPERTY(Transient)
    bool bSetExtraSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequencerPlacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseConstructMeshSetting;
    
    UPROPERTY(Instanced, Transient)
    USBBehaviorTreeComponent* BrainComponent;
    
    UPROPERTY(EditAnywhere)
    bool bPhotoModeCloseRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSelfiePoseInfo> SelfiePoseArray;
    
    UPROPERTY(Transient)
    float SelfieAnimBSValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSoftObjectPath> NPCSelfieIdlePoseArray;
    
    UPROPERTY(EditAnywhere)
    float NPCSelfieIdlePoseCheckTime;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> PerPoseCloseRangeUpVectorOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> PerPoseCloseRangeYawRangeOffset;
    
    UPROPERTY(Transient)
    float RemainMoveInputBlockDuraion;
    
    UPROPERTY(Transient)
    FVector CurrentSwimForce;
    
    UPROPERTY(Transient)
    float CurrentMovingForceDuration;
    
    UPROPERTY(Transient)
    int32 MoveInputBlockCount;
    
    UPROPERTY(Transient)
    float LastMoveRightInput;
    
    UPROPERTY(Transient)
    float LastMoveSmoothRightInput;
    
    UPROPERTY(Transient)
    float LastNonZeroMoveRightInput;
    
    UPROPERTY(Transient)
    float LastMoveFowardInput;
    
    UPROPERTY(Transient)
    float BlockWallMoveFowardInput;
    
    UPROPERTY(Transient)
    float BlockWallMoveRightInput;
    
    UPROPERTY(Transient)
    float PreLastMoveFowardInput;
    
    UPROPERTY(Transient)
    int32 DisableLockOnCharacterRotaion;
    
    UPROPERTY(Transient)
    int32 DisableLookAtIK;
    
    UPROPERTY(Transient)
    int32 DisableHoldBalanceBeamAction;
    
    UPROPERTY(Transient)
    bool bSoftDisableLockOnCharacterRotation;
    
    UPROPERTY(Transient)
    uint64 LastFrameCountFalseSoftDisableLockOnCharacterRotation;
    
    UPROPERTY(Transient)
    float RemainClimbDuration;
    
    UPROPERTY(Transient)
    bool bRequestFallStartTransit;
    
    UPROPERTY(Transient)
    int32 RequestCancelWallRunFlag;
    
    UPROPERTY(Transient)
    float PhysWalkingMovingTime;
    
    UPROPERTY(Transient)
    bool bDisableMovingTransit;
    
    UPROPERTY(Transient)
    bool bDisableLandingTransit;
    
    UPROPERTY(Transient)
    bool bDisableLockonTarget;
    
    UPROPERTY(Transient)
    bool bDisableLockOnControl;
    
    UPROPERTY(Transient)
    float WalkInputDuration;
    
    UPROPERTY(Transient)
    float RunInputDuration;
    
    UPROPERTY(Transient)
    float PhysWalkInputDuration;
    
    UPROPERTY(Transient)
    TArray<FName> OverrideEffectAlias;
    
    UPROPERTY(Transient)
    TArray<uint32> OverrideEffectID;
    
    UPROPERTY(Transient)
    float GamePadLTriggerAxisValue;
    
    UPROPERTY(Transient)
    float GamePadRTriggerAxisValue;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ASBFootStepPhySurfaceVolume>> OverrideFootStepPhySurfaceVolumeArray;
    
    UPROPERTY(Transient)
    TArray<FSBOverrideFootStepPhySurfaceInfo> OverrideFootStepPhySurfaceInfoArray;
    
    UPROPERTY(Transient)
    int32 BlockingModeCount;
    
    UPROPERTY(Transient)
    float RemainJumpToSprintHoldDuration;
    
    UPROPERTY(Transient)
    float RemainHoldLastMoveInputDuration;
    
    UPROPERTY(Transient)
    float RemainBlockJumpDuration;
    
    UPROPERTY(Transient)
    bool bEnableJumpToSprintHoldJump;
    
    UPROPERTY(Transient)
    float RemainSlopeDashDuration;
    
    UPROPERTY(Transient)
    bool bRunningSlopeAutoMove;
    
    UPROPERTY(Transient)
    float RemainBlockSlopeDashDuration;
    
    UPROPERTY(Transient)
    float RemainBlockStartEventMove;
    
    UPROPERTY(Transient)
    float SlopeDashInputValue;
    
    UPROPERTY(Transient)
    int32 BlockPlayTransitAnimCount;
    
    UPROPERTY(Config)
    float DefaultCameraArmLength;
    
    UPROPERTY(Config)
    float RotationYawRate;
    
    UPROPERTY(EditAnywhere)
    float RotationYawRateScale;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RotationYawRateCurveByWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RotationYawScaleCurveByMoveInputDegree;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CameraFovCurveByDistance;
    
    UPROPERTY(EditAnywhere)
    bool UsePathWayFloorCheck;
    
    UPROPERTY(EditAnywhere)
    float MoveSmoothRightInputLerpValue;
    
    UPROPERTY(Config)
    float FallingRotationYawRate;
    
    UPROPERTY(Config)
    float RepeatBlockTurnTime;
    
    UPROPERTY(Config)
    float RunTurnDuration;
    
    UPROPERTY(Config)
    float WalkTurnDuration;
    
    UPROPERTY(Config)
    float IdleTurnDuration;
    
    UPROPERTY(Config)
    float SprintTurnDuration;
    
    UPROPERTY(Transient)
    float RemainTurnDuration;
    
    UPROPERTY(Transient)
    float RemainHoldWalkingDuration;
    
    UPROPERTY(Transient)
    float RemainHoldLockOnAtChatDuration;
    
    UPROPERTY(Transient)
    float RemainBlockStartSprint;
    
    UPROPERTY(Transient)
    float RemainBlockStartHoldSwim;
    
    UPROPERTY(Transient)
    float RemainActiveRunStartAfterEvade;
    
    UPROPERTY(Transient)
    float RemainUpdateProceduralDelay;
    
    UPROPERTY(Transient)
    float RemainTurnDeltaRotDuration;
    
    UPROPERTY(Transient)
    float TurnDeltaRotPower;
    
    UPROPERTY(Transient)
    float WaitTimeSwimToGroundValue;
    
    UPROPERTY(Transient)
    bool bEnableChangeInteraction;
    
    UPROPERTY(Transient)
    bool bRequestEnableChangeInteraction;
    
    UPROPERTY(Transient)
    bool bEnableMeshCollision;
    
    UPROPERTY(Transient)
    bool bDisableMeshCollisionByDistanceToPlayer;
    
    UPROPERTY(Transient)
    bool bEnablePhysicsCapsuleCollision;
    
    UPROPERTY(Transient)
    float RemainInteractionActionDuration;
    
    UPROPERTY(Transient)
    float CurrentInteractionActionDuration;
    
    UPROPERTY(Transient)
    bool bInCliffArea;
    
    UPROPERTY(Transient)
    bool bCliffActionInArea;
    
    UPROPERTY(Transient)
    float CliffActionCancelBlockDurationValue;
    
    UPROPERTY(Transient)
    bool bInWallArea;
    
    UPROPERTY(Transient)
    bool bBlockWallActionInArea;
    
    UPROPERTY(Transient)
    bool bInExclusiveWaterVolume;
    
    UPROPERTY(Transient)
    TArray<FSBCharacterInteractionMoveInfo> InteractionMoveInfo;
    
    UPROPERTY(Transient)
    bool bInteractionMoveToTargetLoc;
    
    UPROPERTY(Transient)
    float RemainBlockChangeInteraction;
    
    UPROPERTY(Transient)
    float RemainBlockStartSideRod;
    
    UPROPERTY(Transient)
    float RemainBlockStartSlopeMove;
    
    UPROPERTY(Transient)
    float RemainBlockSlopeJumpEnd;
    
    UPROPERTY(Transient)
    bool bForceBlockStartSlopeMove;
    
    UPROPERTY(Transient)
    bool bCliffAction;
    
    UPROPERTY(Transient)
    float CurrentCliffActionTime;
    
    UPROPERTY(Transient)
    bool bBlockWallFrontAction;
    
    UPROPERTY(Transient)
    float RemainBlockWallNextAction;
    
    UPROPERTY(Transient)
    bool bHuddleUpAction;
    
    UPROPERTY(Transient)
    bool bHuddleUpActionOnGround;
    
    UPROPERTY(Transient)
    bool bCancelHuddleUpByJump;
    
    UPROPERTY(Transient)
    FVector HuddleUpActionTargetLocation;
    
    UPROPERTY(Transient)
    FVector HuddleUpActionMidTargetLocation;
    
    UPROPERTY(Transient)
    bool HuddleUpActionToLow;
    
    UPROPERTY(Transient)
    int32 HuddleUpActionIndex;
    
    UPROPERTY(Transient)
    bool bEnableHuddleUpByJump;
    
    UPROPERTY(Transient)
    float HuddleUpActionStartSpeed;
    
    UPROPERTY(Transient)
    float HuddleUpGroundCancelBlockDuration;
    
    UPROPERTY(Transient)
    float CurrentRopeSwingJumpInputBlockDuration;
    
    UPROPERTY(Transient)
    FVector RopeSwingJumpVelocity;
    
    UPROPERTY(Transient)
    bool bIdleTurning;
    
    UPROPERTY(Transient)
    float SpeedForAnimGraph;
    
    UPROPERTY(Transient)
    float CurrentSpeedForAnimGraph;
    
    UPROPERTY(Transient)
    bool bUseOverrideSpeedForAnimGraph;
    
    UPROPERTY(Transient)
    float OverrideSpeedForAnimGraph;
    
    UPROPERTY(Transient)
    float KeepZeroSpeedForAnimGraphTime;
    
    UPROPERTY(Transient)
    float LastGetCurrentSpeedForAnimGraph;
    
    UPROPERTY(Transient)
    float ReturnLastSpeedForAnimGraphTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AnimControllerSpringWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AnimControllerFootIKFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AnimControllerFullBodyIKFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bHideWhenSequenceCameraNear;
    
    UPROPERTY(Transient)
    bool bSlidePhysWalk;
    
    UPROPERTY(Transient)
    float SlideSideValue;
    
    UPROPERTY(Transient)
    float RemainBeginSlideSideDuration;
    
    UPROPERTY(Transient)
    float RemainCustomSlideSideValueBlendTime;
    
    UPROPERTY(Transient)
    float CurrentWallSlideSideValue;
    
    UPROPERTY(Transient)
    int32 AttachedToLevelSequenceRefCount;
    
    UPROPERTY(Transient)
    int32 LookAtTargetLevelSequenceRefCount;
    
    UPROPERTY(Transient)
    bool bSequencerAnimMode;
    
    UPROPERTY(Transient)
    int32 PlayableWhenLevelSequenceRefCount;
    
    UPROPERTY(Transient)
    bool bStartMovementNoneWhenLevelSequence;
    
    UPROPERTY(Transient)
    int32 DisableRootClothCollision;
    
    UPROPERTY(Transient)
    bool bCustomOverrideClothPhysicsAsset;
    
    UPROPERTY(Transient)
    FString CustomOverrideClothPhysicsMeshPath;
    
    UPROPERTY(Transient)
    float AverageMoveInputSize;
    
    UPROPERTY(Transient)
    FVector AverageMoveInput;
    
    UPROPERTY(Transient)
    int32 AverageMoveInputCount;
    
    UPROPERTY(Transient)
    bool bRunningSkill;
    
    UPROPERTY(Transient)
    bool bRunningSkillForceCancelWhenAttachedToLevelSequence;
    
    UPROPERTY(Transient)
    bool bAttackParried;
    
    UPROPERTY(Transient)
    TMap<FMaterialParamID, FSBCharacterMaterialParamInfoList> ActiveMaterialParamsMap;
    
    UPROPERTY(Transient)
    TMap<FMaterialChangeID, FSBCharacterMaterialChangeInfoList> ActiveMaterialChangeMap;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterFootPlacement> FootPlacementValue;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterFootPlacement> MoveToIdleFootPlacementValue;
    
    UPROPERTY(Transient)
    FVector LastVelocityOnMove;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterWireModeState> WireModeState;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterFlyingActionState> FlyingActionState;
    
    UPROPERTY(Transient)
    FVector FlyingActionLastAccel;
    
    UPROPERTY(Transient)
    FVector WireFlyTargetPosition;
    
    UPROPERTY(Transient)
    FVector WireSetPosition;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireFlyingSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireFlyingAccelSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireFlyingMinSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireFlyingMaxSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireMovingSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireMovingAccelSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireMovingMinSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireMovingMaxSpeed;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireMoveReachDistance;
    
    UPROPERTY(Config, VisibleAnywhere)
    float WireRechargingSec;
    
    UPROPERTY(Transient)
    float CurrentWireRechargingSec;
    
    UPROPERTY(Transient)
    float CurrentWireFlyingSpeed;
    
    UPROPERTY(Transient)
    float CurrentWireMovingSpeed;
    
    UPROPERTY(Transient)
    FVector CurrentWireMovingVelocity;
    
    UPROPERTY(Transient)
    FVector CurrentWireFlyingPosition;
    
    UPROPERTY(Transient)
    FVector CurrentUpVector;
    
    UPROPERTY(Transient)
    float CurrentRotationPower;
    
    UPROPERTY(Config)
    float RotationPowerSensetive;
    
    UPROPERTY(Transient)
    ASBCameraVolume* CurrentCameraVolume;
    
    UPROPERTY(Transient)
    FRotator CameraVolumeActorOriginRot;
    
    UPROPERTY(Transient)
    FVector CameraVolumeActorOriginLoc;
    
    UPROPERTY(Transient)
    FVector CameraVolumeBasedScreenPosPivot;
    
    UPROPERTY(Transient)
    FVector2D CameraVolumeBasedLastScreenPos;
    
    UPROPERTY(Transient)
    float CameraVolumeActorOriginFov;
    
    UPROPERTY(Transient)
    FSBCameraEventBaseScreenPosition CameraVolumeBasedScreenPosEventData;
    
    UPROPERTY(Transient)
    TArray<FSBCameraEventBaseScreenPosData> CameraVolumeBasedScreenPosDataQueue;
    
    UPROPERTY(Transient)
    ASBCharMovingStanceVolume* CurrentMovingStanceVolume;
    
    UPROPERTY(Transient)
    FSBCharMovingStanceData CustomMovingStanceData;
    
    UPROPERTY(Transient)
    bool bSetCustomMovingStanceData;
    
    UPROPERTY(Transient)
    bool CurrentCameraVolumeLookAtMode;
    
    UPROPERTY(Transient)
    float CustomLookAtMaxSpeedScale;
    
    UPROPERTY(Transient)
    bool CustomLookAtForceWalkMode;
    
    UPROPERTY(Transient)
    bool CustomLookAtDisableSprint;
    
    UPROPERTY(Transient)
    bool CustomLookAtDisableJump;
    
    UPROPERTY(Transient)
    bool CustomLookAtBlockSkill;
    
    UPROPERTY(Transient)
    bool CustomLookAtActive;
    
    UPROPERTY(Transient)
    float CustomCameraLockOnSecondBlendScale;
    
    UPROPERTY(Transient)
    float CustomCameraLockOnSecondBlendDuration;
    
    UPROPERTY(Transient)
    float CustomCameraLockOnSecondBlendOutDuration;
    
    UPROPERTY(Transient)
    TArray<FAddControllerValue> AddYawControllerValueHistory;
    
    UPROPERTY(Transient)
    TArray<FAddControllerValue> AddPitchControllerValueHistory;
    
    UPROPERTY(Transient)
    float ControllerValueHistoryDuration;
    
    UPROPERTY(Config)
    int32 MaxControllerValueHistoryNum;
    
    UPROPERTY(Transient)
    int32 CurrentAddYawControllerValueNum;
    
    UPROPERTY(Transient)
    int32 CurrentAddPitchControllerValueNum;
    
    UPROPERTY(Transient)
    float CustomLookAtControlCameraScale;
    
    UPROPERTY(Transient)
    bool bCustomLookAtControlCam;
    
    UPROPERTY(Transient)
    float CustomLookAtControlCamDuration;
    
    UPROPERTY(Transient)
    float LookAtCustomTargetBlendScale;
    
    UPROPERTY(Transient)
    float LookAtCustomTargetDetachDuration;
    
    UPROPERTY(Transient)
    float LookAtCustomTargetBlendDuration;
    
    UPROPERTY(Transient)
    float RemainLookAtCustomTargetDuration;
    
    UPROPERTY(Transient)
    AActor* LookAtCustomTargetActor;
    
    UPROPERTY(Transient)
    float LookAtCustomTargetDistance;
    
    UPROPERTY(Transient)
    FVector LookAtCustomTargetOffset;
    
    UPROPERTY(Transient)
    FVector LookAtCustomTargetBackupCameraInfo;
    
    UPROPERTY(Transient)
    FVector LookAtCustomTargetStartDirection;
    
    UPROPERTY(Transient)
    FVector2D LookAtCustomTargetStartInputValue;
    
    UPROPERTY(Transient)
    float LookAtCustomTargetStartDirectionCancelSize;
    
    UPROPERTY(Transient)
    bool bUseCancelByUserCamControl;
    
    UPROPERTY(Transient)
    float CancelByUserCamControlTime;
    
    UPROPERTY(Transient)
    TSet<ASBAmbientSoundVolume*> AmbientSoundVolumeSet;
    
    UPROPERTY(Transient)
    FSBCharacterEventMoveInterface CurrentEventMovVolume;
    
    UPROPERTY(Transient)
    FSBCharacterEventMoveInterface BlockEnterEventMovVolume;
    
    UPROPERTY(Transient)
    FSBCharacterEventMoveInterface SideRodJumpEnableEventMovVolume;
    
    UPROPERTY(Transient)
    bool bSideRodJumpEnableEventMovVolumeToBack;
    
    UPROPERTY(Transient)
    FVector SideRodJumpEnableEventMovVolumeClosetLoc;
    
    UPROPERTY(Transient)
    float CurrentSideRodSearchDegreeValue;
    
    UPROPERTY(Transient)
    bool bCurrentStretchSideRodSearch;
    
    UPROPERTY(Transient)
    bool bEnableSideRodHuddleUp;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> DisableWallRunActor;
    
    UPROPERTY(Transient)
    float RemainDisableWallRunActorDuration;
    
    UPROPERTY(Transient)
    float RemainPendingJumpDuration;
    
    UPROPERTY(Transient)
    bool bPendingRunJump;
    
    UPROPERTY(Transient)
    ASBCharacterSlopeMovVolume* CurrentSlopeMovVolume;
    
    UPROPERTY(Transient)
    ASBCharacterOverrideSlopeVolume* CurrentSlopeOverrideDataVolume;
    
    UPROPERTY(Transient)
    float BackupCollisionRadiusForSlopeMove;
    
    UPROPERTY(Transient)
    float BackupCollisionHalfHeightForSlopeMove;
    
    UPROPERTY(Transient)
    float BackupRelativeZForSlopeMove;
    
    UPROPERTY(Transient)
    ASBSoundEventVolume* CurrentSoundEventVolume;
    
    UPROPERTY(Transient)
    ASBZoneVolume* CurrentZoneVolume;
    
    UPROPERTY(Transient)
    ASBRegionVolume* CurrentRegionVolume;
    
    UPROPERTY(Transient)
    FVector TargetUpVector;
    
    UPROPERTY(Transient)
    bool bSprint;
    
    UPROPERTY(Transient)
    bool bToggledSprint;
    
    UPROPERTY(Transient)
    bool bEnableExtraSprint;
    
    UPROPERTY(Transient)
    float DisableExtraSprintDuration;
    
    UPROPERTY(Transient)
    float SprintDuration;
    
    UPROPERTY(Transient)
    bool bChangeSprintFlag;
    
    UPROPERTY(Transient)
    bool bSprintJump;
    
    UPROPERTY(Transient)
    bool bWallRunJump;
    
    UPROPERTY(Transient)
    float OverrideWallRunJumpScale;
    
    UPROPERTY(Transient)
    bool bGlide;
    
    UPROPERTY(Transient)
    bool bFlyingAction;
    
    UPROPERTY(Transient)
    bool bForceCancelFlyingAction;
    
    UPROPERTY(Transient)
    bool bFlyingActionMoving;
    
    UPROPERTY(Transient)
    float RemainFlyingActionTime;
    
    UPROPERTY(Transient)
    float CurrentFlyingActionTime;
    
    UPROPERTY(Config)
    float FlyingActionPrepareDuration;
    
    UPROPERTY(Config)
    float FlyingActionLandedMoveBlockSec;
    
    UPROPERTY(Config)
    float FlyingActionMaxTime;
    
    UPROPERTY(Config)
    float FlyingActionAddTimePerSec;
    
    UPROPERTY(Config)
    float FlyingActionCoolTime;
    
    UPROPERTY(Config)
    float FlyingActionEnableRemainTime;
    
    UPROPERTY(Transient)
    bool bWallHitAction;
    
    UPROPERTY(Transient)
    float WallHitRemainTimeValue;
    
    UPROPERTY(Transient)
    float WallHitBounceVelocity;
    
    UPROPERTY(Transient)
    float WallHitBounceDelay;
    
    UPROPERTY(Transient)
    bool bDrawMoveTracker;
    
    UPROPERTY(Transient)
    float TargetCameraBoomLength;
    
    UPROPERTY(Config)
    float RelativeCameraBoomHeight;
    
    UPROPERTY(Config)
    float RelativeCameraBoomLeftRight;
    
    UPROPERTY(Config)
    float TargetRelativeCameraBoomHeight;
    
    UPROPERTY(Config)
    float TargetRelativeCameraBoomLeftRight;
    
    UPROPERTY(Transient)
    FSBManualBlendCamInfo ManualTargetCameraBlendInfo;
    
    UPROPERTY(Transient)
    float RemainRequestFlyingActionEvade;
    
    UPROPERTY(Transient)
    FVector RequestFlyingActionEvadeAcceleration;
    
    UPROPERTY(Transient)
    FVector BackupFlyingActionVelocity;
    
    UPROPERTY(Transient)
    bool bDisableNormalMoveTransit;
    
    UPROPERTY(Transient)
    bool bChangedJump;
    
    UPROPERTY(Config)
    float LockOnRotationYawUnit;
    
    UPROPERTY(Config)
    float BlockLockOnMoveTargetDuration;
    
    UPROPERTY(Config)
    float LockOnMoveTargetMouseMoveSize;
    
    UPROPERTY(Config)
    float LockOnMoveTargetPadRateSize;
    
    UPROPERTY(Config)
    float LockOnBlendCamHistoryDuration;
    
    UPROPERTY(Transient)
    bool bLockOnPitchControlling;
    
    UPROPERTY(Transient)
    TMap<FName, FControlledForceObjectInfo> ControlledForceObjectsMap;
    
    UPROPERTY(Transient)
    FVector LockOnStart2DDirection;
    
    UPROPERTY(Transient)
    bool bLockOnCheckVisible;
    
    UPROPERTY(Transient)
    float HideTimeForLockOnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    int32 FacialAnimTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    int32 FacialAnimTypeIndex_PhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    float FacialAnimPosition_PhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    bool bHideMaterialParts;
    
    UPROPERTY(Transient)
    bool bPrevHideMaterialParts;
    
    UPROPERTY(Transient)
    FName PoseName_PhotoMode;
    
    UPROPERTY(Transient)
    bool bPhotoModeDefaultSnapshot;
    
    UPROPERTY(Transient)
    bool bPhotoModeDefaultWeaponSnapshot;
    
    UPROPERTY(Transient)
    bool bChangedPose_PhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableIdleAdditiveAnimWhenAttachedToLevelSeq;
    
    UPROPERTY(EditAnywhere)
    bool bDefaultDisableIdleAdditiveAnimWhenAttachedToLevelSeq;
    
    UPROPERTY(Transient)
    bool bDisableIdleAdditiveAnimFromStance;
    
    UPROPERTY(Transient)
    float BackupTargetRelativeCameraBoomHeight;
    
    UPROPERTY(Transient)
    float BackupTargetRelativeCameraBoomLeftRight;
    
    UPROPERTY(Transient)
    float BackupTargetCamArmLength;
    
    UPROPERTY(Transient)
    FRotator LockOnPitchControllingRot;
    
    UPROPERTY(Config)
    bool bLockOnAlwaysPitchControl;
    
    UPROPERTY(Config)
    bool bLockOnCameraEnable;
    
    UPROPERTY(Config)
    float RunToIdleLFootFrontMoveTime;
    
    UPROPERTY(Config)
    float RunToIdleLFootFrontVelocity;
    
    UPROPERTY(Config)
    float RunToIdleRFootFrontMoveTime;
    
    UPROPERTY(Config)
    float RunToIdleRFootFrontVelocity;
    
    UPROPERTY(Config)
    float WalkToIdleLFootFrontMoveTime;
    
    UPROPERTY(Config)
    float WalkToIdleLFootFrontVelocity;
    
    UPROPERTY(Config)
    float WalkToIdleRFootFrontMoveTime;
    
    UPROPERTY(Config)
    float WalkToIdleRFootFrontVelocity;
    
    UPROPERTY(Config)
    float ShortMoveToIdleLFootFrontMoveTime;
    
    UPROPERTY(Config)
    float ShortMoveToIdleLFootFrontVelocity;
    
    UPROPERTY(Config)
    float ShortMoveToIdleRFootFrontMoveTime;
    
    UPROPERTY(Config)
    float ShortMoveToIdleRFootFrontVelocity;
    
    UPROPERTY(Config)
    float MoveDurationCheckShortMove;
    
    UPROPERTY(Config)
    float SprintToIdleMoveTime;
    
    UPROPERTY(Config)
    float SprintToIdleVelocity;
    
    UPROPERTY(Config)
    float LockOnSprintToIdleMoveTime;
    
    UPROPERTY(Config)
    float LockOnSprintToIdleVelocity;
    
    UPROPERTY(Config)
    float LockOnRunWalkToIdleMoveTime;
    
    UPROPERTY(Config)
    float LockOnRunWalkToIdleVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideRunToIdleLFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideRunToIdleLFootFrontVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideRunToIdleRFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideRunToIdleRFootFrontVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideWalkToIdleLFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideWalkToIdleLFootFrontVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideWalkToIdleRFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideWalkToIdleRFootFrontVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideShortMoveToIdleLFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideShortMoveToIdleLFootFrontVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideShortMoveToIdleRFootFrontMoveTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideShortMoveToIdleRFootFrontVelocity;
    
    UPROPERTY(Transient)
    TArray<float> TransitAnimPriority;
    
    UPROPERTY(Transient)
    bool bDisableTransitAnimByStanceVolume;
    
    UPROPERTY(Config)
    float LockOnRunAnimRefSpeed;
    
    UPROPERTY(Config)
    float LockOnWalkAnimRefSpeed;
    
    UPROPERTY(Config)
    float RunAnimRefSpeed;
    
    UPROPERTY(Config)
    float WalkAnimRefSpeed;
    
    UPROPERTY(Config)
    float ClimbingAnimRefSpeed;
    
    UPROPERTY(Config)
    float LockOnCameraApplyVelocityRatio;
    
    UPROPERTY(Config)
    float SprintHoldKeyDurationOnMove;
    
    UPROPERTY(Config)
    float SprintHoldKeyDurationOnLockOnMove;
    
    UPROPERTY(Transient)
    float RemainSprintKeyHoldDuration;
    
    UPROPERTY(Config)
    float GlideHoldKeyDurationOnJump;
    
    UPROPERTY(Transient)
    float RemainGlideKeyHoldDuration;
    
    UPROPERTY(Transient)
    bool bWalkingMode;
    
    UPROPERTY(Transient)
    uint32 ActiveWalkingModeTime;
    
    UPROPERTY(Transient)
    bool bActiveMetaAI;
    
    UPROPERTY(Transient)
    ESBMetaAIBehaviorStance MetaAIBehaviorStance;
    
    UPROPERTY(Transient)
    bool bArriveMetaAIBehaviorNode;
    
    UPROPERTY(Transient)
    bool bDisableInteractionFromMetaAI;
    
    UPROPERTY(Transient)
    uint64 MetaAIPenetratingMoveFrame;
    
    UPROPERTY(Transient)
    bool bMetaAITiredState;
    
    UPROPERTY(EditAnywhere)
    bool bUseCrowdVelocityLerpPower;
    
    UPROPERTY(Transient)
    bool bJoggingRun;
    
    UPROPERTY(Transient)
    bool bForceJoggingRun;
    
    UPROPERTY(Transient)
    bool bWalkingWhenMoving;
    
    UPROPERTY(Transient)
    bool bForceWalkWhenMoving;
    
    UPROPERTY(Transient)
    bool bLockOn;
    
    UPROPERTY(Transient)
    bool bLockOnAtChat;
    
    UPROPERTY(Transient)
    FGuid LockOnAtChatGuid;
    
    UPROPERTY(Transient)
    FGuid LockOnAtChatBlendSpaceID;
    
    UPROPERTY(Transient)
    FVector LockOnAtChatPivotLocation;
    
    UPROPERTY(Transient)
    FVector LockOnAtChatPivotDirection;
    
    UPROPERTY(Transient)
    float LockOnAtChatPivotMoveDegRange;
    
    UPROPERTY(Transient)
    float LockOnAtChatMoveRange;
    
    UPROPERTY(Transient)
    bool bUnlockAtChatInOutRange;
    
    UPROPERTY(Transient)
    float JumpStartZ;
    
    UPROPERTY(Transient)
    float JumpingTime;
    
    UPROPERTY(Transient)
    float FallingTime;
    
    UPROPERTY(Transient)
    bool bSlopeJumping;
    
    UPROPERTY(Transient)
    int32 SlopeDollyIndex;
    
    UPROPERTY(Transient)
    bool bSlopeJumpOut;
    
    UPROPERTY(Transient)
    float RequestSlopeOutMaxSpeed;
    
    UPROPERTY(Transient)
    bool bSlopeJumpingCustomLanding;
    
    UPROPERTY(Transient)
    float SlopeJumpingCustomLandingDeg;
    
    UPROPERTY(Transient)
    FVector SplineForceAtSlopeJump;
    
    UPROPERTY(Transient)
    bool bSwimJumping;
    
    UPROPERTY(Transient)
    FVector SlopeVelocityBeforeJump;
    
    UPROPERTY(Transient)
    bool bSlideSlipJumping;
    
    UPROPERTY(Transient)
    bool bSlideSlipFalling;
    
    UPROPERTY(Transient)
    bool bSideRodFalling;
    
    UPROPERTY(Transient)
    bool bRodJumping;
    
    UPROPERTY(Transient)
    bool bSideRodJumping;
    
    UPROPERTY(Transient)
    bool bDisableSlopeStartMovingDeadZone;
    
    UPROPERTY(Transient)
    FVector vecJumpMoveInput;
    
    UPROPERTY(Transient)
    bool bAccelSwimUp;
    
    UPROPERTY(Transient)
    bool bAccelSwimDown;
    
    UPROPERTY(Transient)
    bool bInputSwimming;
    
    UPROPERTY(Transient)
    FVector InputSwimmingAccel;
    
    UPROPERTY(Transient)
    float RemainFlyingActionCoolTime;
    
    UPROPERTY(Transient)
    ASBCharacter* LockOnCharacter;
    
    UPROPERTY(Transient)
    float RemainCustomLockOnCameraBlendTime;
    
    UPROPERTY(Transient)
    float CustomLockOnCameraBlendTime;
    
    UPROPERTY(Transient)
    float CustomLockOnCameraBlendMultifly;
    
    UPROPERTY(Transient)
    TArray<ASBCharacter*> LookAtCandidates;
    
    UPROPERTY(Transient)
    ASBCharacter* CameraLookAtTarget;
    
    UPROPERTY(Transient)
    float CameraLookAtTargetTime;
    
    UPROPERTY(Transient)
    AActor* AnimLookAtTarget;
    
    UPROPERTY(Transient)
    FName AnimLookAtTargetSocket;
    
    UPROPERTY(Transient)
    float AnimLookAtTargetZOffset;
    
    UPROPERTY(Transient)
    FVector HeadLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector HeadLookAtPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseHeadLookAtTargetPositionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HeadLookAtOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BodyLookAtOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Special1LookAtOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Special2LookAtOverrideAlpha;
    
    UPROPERTY(Transient)
    AActor* EyeTrackingTarget;
    
    UPROPERTY(Transient)
    FName EyeTrackingTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D EyePosition2D;
    
    UPROPERTY(Transient)
    bool bEnableEyePositionUpdate;
    
    UPROPERTY(Transient)
    bool bFixedBodyLookAtLocation;
    
    UPROPERTY(Transient)
    FVector LastBodyLookAtRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bSeqDisableDesireRotation: 1;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceForceMovement;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceStopActiveMovement;
    
    UPROPERTY(Transient)
    TEnumAsByte<EMovementMode> SeqFinishOnceMovement;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceSetPlayerCam;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceSetPlayerCamReset;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceSetPlayerCamResetPitchBaseAlpha;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceSetPlayerCamResetYawReset;
    
    UPROPERTY(Transient)
    bool bSeqFinishOnceSetPlayerCamResetForceSetBoom;
    
    UPROPERTY(Transient)
    TArray<FName> ActorActiveVolumeNameArray;
    
    UPROPERTY(Transient)
    bool bActiveCharacter;
    
    UPROPERTY(Transient)
    bool bDisableTickByLastRenderTimeOnScreen;
    
    UPROPERTY(Transient)
    uint64 LastCheckOcclusionFrameCount;
    
    UPROPERTY(Transient)
    FVector OverlapMoveVelocity;
    
    UPROPERTY(Transient)
    FVector CurrentOverlapMoveVelocity;
    
    UPROPERTY(Transient)
    float OverlapMoveVelocityDelayTime;
    
    UPROPERTY(Transient)
    bool bTPSMode;
    
    UPROPERTY(Transient)
    float LastTPSModeTime;
    
    UPROPERTY(Transient)
    bool bIsActiveTPSAimOffset;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBTPSModeType> TPSModeType;
    
    UPROPERTY(Transient)
    FVector TPSLookAtDirection;
    
    UPROPERTY(Transient)
    FVector TPSInitLookAtDirection;
    
    UPROPERTY(Transient)
    FVector TPSDesiredLookAtDirection;
    
    UPROPERTY(Transient)
    FVector TPSDesiredDampingVelocity;
    
    UPROPERTY(Transient)
    float TPSDampingWaitTime;
    
    UPROPERTY(Transient)
    float TPSAimSlowDownValue;
    
    UPROPERTY(Transient)
    bool bDisableTPSAimSlowDownValue;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> TPSCollisionHitCharacter;
    
    UPROPERTY(Transient)
    FVector TPSCollisionHitLocation;
    
    UPROPERTY(Transient)
    bool bTPSFirstTurningTPSLookAt;
    
    UPROPERTY(Transient)
    uint64 TPSLookAtPinLocationUpdateFrameCount;
    
    UPROPERTY(Transient)
    FVector TPSLookAtPinLocation;
    
    UPROPERTY(Transient)
    FVector2D NikkeTPSPinScreenPoint;
    
    UPROPERTY(Transient)
    uint64 TPSLookAtWorldLocationUpdateFrameCount;
    
    UPROPERTY(Transient)
    FVector TPSLookAtWorldLocation;
    
    UPROPERTY(Transient)
    float TPSSwitchableTimeFromCameraVolume;
    
    UPROPERTY(Transient)
    FVector TPSDesiredLookAtFixedLocation;
    
    UPROPERTY(Transient)
    float TPSDesiredLookAtFixedLocationTime;
    
    UPROPERTY(Transient)
    float TPSDesiredLookAtFixedLocationCurrentTime;
    
    UPROPERTY(Transient)
    bool bTPSZoomIn;
    
    UPROPERTY(Transient)
    float TPSCameraSwitchBlendTime;
    
    UPROPERTY(EditAnywhere)
    FVector TPSAimSlowdownBoundingBoxExtentXYRate;
    
    UPROPERTY(EditAnywhere)
    float BulletMagnetCapsuleRadiusScale;
    
    UPROPERTY(EditAnywhere)
    float BulletMagnetCapsuleHeightScale;
    
    UPROPERTY(Transient)
    UNiagaraParameterCollection* NikkeMinigameNiagaraParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIgnoreTPSBodyRotationWhenSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCameraVolumeOnceEnterImmidiate;
    
    UPROPERTY(Transient)
    float GameOptionControllerCameraNormalHorizentalScale;
    
    UPROPERTY(Transient)
    float GameOptionControllerCameraNormalVerticalScale;
    
    UPROPERTY(Transient)
    float GameOptionControllerCameraTPSHorizentalScale;
    
    UPROPERTY(Transient)
    float GameOptionControllerCameraTPSVerticalScale;
    
    UPROPERTY(Transient)
    bool GameOptionControllerCameraHorizentalInvert;
    
    UPROPERTY(Transient)
    bool GameOptionControllerCameraVerticalInvert;
    
    UPROPERTY(Transient)
    float GameOptionMouseCameraNormalHorizentalScale;
    
    UPROPERTY(Transient)
    float GameOptionMouseCameraNormalVerticalScale;
    
    UPROPERTY(Transient)
    float GameOptionMouseCameraTPSHorizentalScale;
    
    UPROPERTY(Transient)
    float GameOptionMouseCameraTPSVerticalScale;
    
    UPROPERTY(Transient)
    bool GameOptionMouseCameraHorizentalInvert;
    
    UPROPERTY(Transient)
    bool GameOptionMouseCameraVerticalInvert;
    
    UPROPERTY(Transient)
    float StartTurningBlockTime;
    
protected:
    UPROPERTY(Transient)
    TEnumAsByte<ESBFishingModeType> FishingModeType;
    
    UPROPERTY(Transient)
    FVector FishingLookAtDirection;
    
    UPROPERTY(Transient)
    FVector FishingCastingEnableLocation;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* FishingCastingDistanceCurve;
    
    UPROPERTY(Transient)
    float RemainFishingReelTime;
    
    UPROPERTY(Transient)
    bool bFishingReel;
    
    UPROPERTY(Transient)
    bool bNeedFishingForceTurn;
    
    UPROPERTY(Transient)
    bool bEnableSimpleFishing;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    ASBBobber* FishingLookAtTarget;
    
public:
    UPROPERTY(Transient)
    USBCharacterPoseSnapshotDataAsset* PoseSnapshotDataPtr;
    
    UPROPERTY(Transient)
    USBCharacterPoseSnapshotDataAsset* PonytailSnapshotDataPtr;
    
    UPROPERTY(Transient)
    USBCharacterPoseSnapshotDataAsset* HairSnapshotDataPtr;
    
    UPROPERTY(Transient)
    USBCharacterPoseSnapshotDataAsset* TachyWingSnapshotDataPtr;
    
    UPROPERTY(Transient)
    USBCharacterSelfiePoseDataAsset* SelfiePoseDataPtr;
    
    UPROPERTY(Transient)
    FName LastGunRotationSeqName;
    
    UPROPERTY(Transient)
    FVector LastGunRotationDirection;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 DisableLookAtCount[4];
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 DisableTPSAimIKCount;
    
    UPROPERTY(EditAnywhere)
    FName DefaultHeadLookAtTargetSocket;
    
    UPROPERTY(EditAnywhere)
    FName DefaultBodyLookAtTargetSocket;
    
    UPROPERTY(EditAnywhere)
    FVector EyeOffsetFromHead;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> EyeForwardAxis;
    
    UPROPERTY(EditAnywhere)
    bool EyeForwardAxisInverse;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> EyeRightAxis;
    
    UPROPERTY(EditAnywhere)
    bool EyeRightAxisInverse;
    
    UPROPERTY(EditAnywhere)
    float EyeBetweenDistance;
    
    UPROPERTY(EditAnywhere)
    float EyeAngleHorizontal;
    
    UPROPERTY(EditAnywhere)
    float EyeAngleVertical;
    
    UPROPERTY(Transient)
    bool bActiveWeakPointCollision;
    
    UPROPERTY(Transient)
    bool bNotTPSAutoTargeted;
    
    UPROPERTY(Transient)
    bool bNotTPSMagnet;
    
    UPROPERTY(Transient)
    FVector OldWireFlyingPosition;
    
    UPROPERTY(Transient)
    USBMoveTracker* MoveTracker;
    
    UPROPERTY(Transient)
    USBMoveTracker* MoveTracker2;
    
    UPROPERTY(Config, VisibleAnywhere)
    bool EnableMovementChecker;
    
    UPROPERTY(Transient)
    FSBCharacterMovementCheckInfo MovementCheckInfo;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* ClimbAttachedComponent;
    
    UPROPERTY(Transient)
    FVector ClimbAttachedLocalVector;
    
    UPROPERTY(Transient)
    FName ClimbAttachedSocketName;
    
    UPROPERTY(Transient)
    FString ResourcePath;
    
    UPROPERTY(Transient)
    bool bMovingTarget;
    
    UPROPERTY(Transient)
    bool bMovingTargetChangeState;
    
    UPROPERTY(Transient)
    bool bLocalMovingTarget;
    
    UPROPERTY(Transient)
    bool bIgnoreMoveingTargetUpdateTransfrom;
    
    UPROPERTY(Transient)
    TArray<FVector> MovingTargetPath;
    
    UPROPERTY(Transient)
    bool bIgnoreMovingTargetPathLeave;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> MovingTargetBaseComponent;
    
    UPROPERTY(Transient)
    FVector vecMovingTargetLocationForBaseComp;
    
    UPROPERTY(Transient)
    FVector vecMovingTargetDirectionForBaseComp;
    
    UPROPERTY(Transient)
    bool bMovingTargetLinearInterpol;
    
    UPROPERTY(Transient)
    float MovingTargetDuration;
    
    UPROPERTY(Transient)
    float MovingTargetDelayDuration;
    
    UPROPERTY(Transient)
    float MovingTargetRotDelayDuration;
    
    UPROPERTY(Transient)
    bool MovingTargetAnimStopAtMoveInput;
    
    UPROPERTY(Transient)
    bool bEventMoveDnamicTarget;
    
    UPROPERTY(Transient)
    float CurrentMovingTargetTime;
    
    UPROPERTY(Transient)
    float CurrentRotTargetTime;
    
    UPROPERTY(Transient)
    FVector MovingTargetStartDirection;
    
    UPROPERTY(Transient)
    FVector MovingTargetEndDirection;
    
    UPROPERTY(Transient)
    float MovingTargetDirectionCustomDuration;
    
    UPROPERTY(Transient)
    bool bRotationLinearInterp;
    
    UPROPERTY(Transient)
    int32 MovingTargetRotationDirType;
    
    UPROPERTY(Transient)
    bool bMovingTargetEndPlayAnim;
    
    UPROPERTY(Transient)
    bool bDisableActorCollisionToMovingTarget;
    
    UPROPERTY(Transient)
    FString MovingTargetEndAnimName;
    
    UPROPERTY(Transient)
    float MovingTargetEndAnimBlendInTime;
    
    UPROPERTY(Transient)
    float MovingTargetEndAnimBlendOutTime;
    
    UPROPERTY(Transient)
    float MovingTargetEndAnimTime;
    
    UPROPERTY(Transient)
    float MovingTargetEndAnimBlockInputDuration;
    
    UPROPERTY(Transient)
    float MovingTargetAfterBlockInputDuration;
    
    UPROPERTY(Transient)
    float MovingTargetCameraInterpolTime;
    
    UPROPERTY(Transient)
    FString MovingTargetCustomAnimPath;
    
    UPROPERTY(Transient)
    float MovingTargetCustomAnimBlendTime;
    
    UPROPERTY(Transient)
    float MovingTargetCustomAnimDuration;
    
    UPROPERTY(Transient)
    bool bSetMovingTargetCustomAnimTransitID;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterTransitAnim> MovingTargetCustomAnimTransitID;
    
    UPROPERTY(Transient)
    bool bMoveingTargetRefreshMovemodeAtEndMove;
    
    UPROPERTY(Transient)
    bool bChangeMovingState;
    
    UPROPERTY(Transient)
    bool bLastMoveingState;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterMoveType> LastMoveType;
    
    UPROPERTY(Config)
    float MoveAnimSpeedInterpolAfterAction;
    
    UPROPERTY(Transient)
    float RemainMoveAnimSpeedInterpolAfterAction;
    
    UPROPERTY(Transient)
    float RemainChangeIdleMoveTime;
    
    UPROPERTY(Transient)
    float ChangeIdleMoveVelocity;
    
    UPROPERTY(Transient)
    float RemainTurnMoveTime;
    
    UPROPERTY(Transient)
    float SlopeLandingMoveTime;
    
    UPROPERTY(Transient)
    float RemainSlopeLandingMoveTime;
    
    UPROPERTY(Transient)
    float RemainBlockTurnTime;
    
    UPROPERTY(Transient)
    float RemainBlockHuddleUpTime;
    
    UPROPERTY(Transient)
    float TurnMoveVelocity;
    
    UPROPERTY(Transient)
    float RemainMotionMoveDuration;
    
    UPROPERTY(Transient)
    bool bEnableMotionMove;
    
    UPROPERTY(Config)
    bool bUseMotionMoveOnlyVelocityChange;
    
    UPROPERTY(Config)
    float MotionMoveDuration;
    
    UPROPERTY(Transient)
    bool bWallRun;
    
    UPROPERTY(Transient)
    float CurrentWallRunTime;
    
    UPROPERTY(Transient)
    bool bUseWallRunYawControl;
    
    UPROPERTY(Config)
    float SprintTurnMoveVelocity;
    
    UPROPERTY(Config)
    float SprintTurnMoveTime;
    
    UPROPERTY(Config)
    float RunTurnMoveVelocity;
    
    UPROPERTY(Config)
    float RunTurnMoveTime;
    
    UPROPERTY(Config)
    float WalkTurnMoveVelocity;
    
    UPROPERTY(Config)
    float WalkTurnMoveTime;
    
    UPROPERTY(Config)
    float IdleTurnMoveVelocity;
    
    UPROPERTY(Config)
    float IdleTurnMoveTime;
    
    UPROPERTY(Transient)
    bool bLockOnMoveSideNormal;
    
    UPROPERTY(Transient)
    bool bEnableDoubleJump;
    
    UPROPERTY(Transient)
    FVector PendingMoveLockOnTargetVector;
    
    UPROPERTY(Transient)
    float CurrentLockOnCameraInputX;
    
    UPROPERTY(Transient)
    float CurrentLockOnCameraInputY;
    
    UPROPERTY(Transient)
    float CurrentLockOnCameraInputMouseX;
    
    UPROPERTY(Transient)
    float CurrentLockOnCameraInputMouseY;
    
    UPROPERTY(Transient)
    float RemainBlockLockOnMoveTargetDuration;
    
    UPROPERTY(Transient)
    bool bVisibleSwordTrail;
    
    UPROPERTY(Transient)
    float GravityZScaleWhenActiveSkill;
    
    UPROPERTY(Transient)
    int32 UnavailableLockOn;
    
    UPROPERTY(Transient)
    TMap<FName, bool> TouchTriggerMap;
    
    UPROPERTY(Transient)
    int32 LockOnSprintStartPlayIndex;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FSBMeshInfo> MeshInfoList;
    
    UPROPERTY(Transient)
    FSBCharacterEventMoveInfo EventMoveInfo;
    
    UPROPERTY(Transient)
    FSBEventMoveResultExtraInfo EventMoveInterfaceResultInfo;
    
    UPROPERTY(Transient)
    FRotator TargetCamRotator;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBBoneBlendType> BoneBlendType;
    
    UPROPERTY(Transient)
    bool bBlockChangeMesh;
    
    UPROPERTY(Transient)
    FTransform MeshOriginRelativeTransform;
    
    UPROPERTY(Transient)
    FSBRagdollInfo RagdollInfo;
    
    UPROPERTY(Transient)
    float CustomPoseSnapBlendWeight;
    
    UPROPERTY(Transient)
    FSBActorMoveData ActorMoveData;
    
    UPROPERTY(Transient)
    bool bIgnoreCharacterCollision;
    
    UPROPERTY(EditAnywhere)
    bool bDisableLocationFromOverlapCollision;
    
    UPROPERTY(EditAnywhere)
    bool bNoSweepOverlapCollisionWhenZeroVelocity;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveAdditiveZFromProjectPointToNavigation;
    
    UPROPERTY(EditAnywhere)
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere)
    bool bUseFlyPathWayForAnimGraphSpeed;
    
    UPROPERTY(Transient)
    int32 MoveBackByTargetOverlap;
    
    UPROPERTY(Transient)
    int32 MoveBackByTargetOverlapNextFrameMinusValue;
    
    UPROPERTY(Transient)
    int32 JumpLock;
    
    UPROPERTY(Transient)
    bool bBlockJumpAction;
    
    UPROPERTY(Transient)
    int32 BlockJumpActionFrameCount;
    
    UPROPERTY(Transient)
    int32 SprintLock;
    
    UPROPERTY(Transient)
    int32 MouseLock;
    
    UPROPERTY(Transient)
    int32 DisableCollisionOverlapMoving;
    
    UPROPERTY(Transient)
    bool bFallingToLowDiff;
    
    UPROPERTY(Transient)
    bool bFallingToLowDiffPlayAnim;
    
    UPROPERTY(Transient)
    TMap<int32, FSBLastSetBlendSpace> LastSetBlendSpaceMap;
    
    UPROPERTY(Transient)
    int32 OverrideBlendSpaceUpperOnlyCount;
    
    UPROPERTY(Transient)
    int32 OverrideBlendSpaceCount;
    
    UPROPERTY(Transient)
    bool bOverriddenBlendSpacePlayerActive;
    
    UPROPERTY(Transient)
    TMap<int32, FSBOverrideAnimTransit> OverrideAnimTransitMap;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreRenderControl;
    
    UPROPERTY(EditAnywhere)
    bool bUseOptimizationDisableTick;
    
    UPROPERTY(EditAnywhere)
    bool bSimpleCharacter;
    
    UPROPERTY(EditAnywhere)
    bool bUseOptimizationharacterMinLOD1;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreOcclusion;
    
    UPROPERTY(Transient)
    bool bRenderControl;
    
    UPROPERTY(Transient)
    TArray<FName> DisableInputActionStateArray;
    
    UPROPERTY(Transient)
    bool bBlockingWhenOverlapMoving;
    
    UPROPERTY(Transient)
    bool bCheckRuleMoveWallHitPossible;
    
    UPROPERTY(Transient)
    AActor* VehicleActor;
    
    UPROPERTY(Transient)
    FVector VehicleActorPrevLocation;
    
    UPROPERTY(Transient)
    FRotator VehicleActorPrevRotation;
    
    UPROPERTY(Transient)
    bool bVehicleTargetActorControlRotation;
    
    UPROPERTY(Transient)
    FVector VehicleActorDiffLocation;
    
    UPROPERTY(Transient)
    FVector VehicleTargetActorDiffLocation;
    
    UPROPERTY(Transient)
    FVector VehicleTargetActorPrevLocation;
    
    UPROPERTY(Transient)
    FVector ActorLocationOnVehicleActor;
    
    UPROPERTY(Transient)
    bool bBlockSimulatePhysicsFromVehicleTransform;
    
    UPROPERTY(Transient)
    bool bLockupSimulatePhysics;
    
    UPROPERTY(Transient)
    bool bDisableFootIKWhenRideOnVehicle;
    
    UPROPERTY(Transient)
    bool bVehicleActorPhotoModeDiffLocation;
    
    UPROPERTY(Transient)
    FVector VehicleActorPhotoModeDiffLocation;
    
    UPROPERTY(Transient)
    int32 KeepAllBodiesPhysicsPositionFrame;
    
    UPROPERTY(Transient)
    int32 KeepAllBodiesPhysicsPositionZeroBlendWeightFrame;
    
    UPROPERTY(Transient)
    FName Tribe;
    
    UPROPERTY(Transient)
    TArray<FName> CharacterTags;
    
    UPROPERTY(Transient)
    bool bBattleState;
    
    UPROPERTY(Transient)
    bool bImpossibleAutoLockOn;
    
    UPROPERTY(Transient)
    bool bOnAutoLockOnPhase;
    
    UPROPERTY(Transient)
    bool bAutoLockOnAtAfterTPS;
    
    UPROPERTY(Transient)
    FHitResult MoveBlockedByHitInfo;
    
    UPROPERTY(Transient)
    uint32 BlockMovementFlags;
    
    UPROPERTY(Transient)
    bool bPressedTrainingRoomTrigger;
    
    UPROPERTY(EditAnywhere)
    USBDroneLocationData* DroneLocationInfoData;
    
    UPROPERTY(Transient)
    bool bUseMoveConstraint;
    
    UPROPERTY(Transient)
    FVector MoveConstraintForwardDirection;
    
    UPROPERTY(Transient)
    bool bMoveConstraintDirXYOnly;
    
    UPROPERTY(Transient)
    UCurveFloat* MoveConstraintForwardFactor;
    
    UPROPERTY(Transient)
    UCurveFloat* MoveConstraintRightFactor;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCameraVoumeMoveConstraintDirectionType> MoveConstraintDirectionType;
    
    UPROPERTY(Transient)
    FVector MoveConstraintDirectionStart;
    
    UPROPERTY(Transient)
    FVector MoveConstraintDirectionEnd;
    
    UPROPERTY(Transient)
    bool MoveConstraintRightDotCalcuate;
    
    UPROPERTY(Transient)
    bool MoveConstraintEveryUpdate;
    
    UPROPERTY(Transient)
    bool bUseJumpConstraint;
    
    UPROPERTY(Transient)
    float JumpConstraintMaxJump;
    
    UPROPERTY(Transient)
    float JumpConstraintMaxXY;
    
    UPROPERTY(Transient)
    FString JumpConstraintJumpFrontPath;
    
    UPROPERTY(Transient)
    float JumpConstraintUnlockJumpFromSplineProgress;
    
    UPROPERTY(Transient)
    bool bUsePhysicsConstraint;
    
    UPROPERTY(Transient)
    bool bIgnoreImpartBaseVelocityX;
    
    UPROPERTY(Transient)
    bool bIgnoreImpartBaseVelocityY;
    
    UPROPERTY(Transient)
    bool bIgnoreImpartBaseVelocityZ;
    
    UPROPERTY(Transient)
    bool bOrigImpartBaseVelocityX;
    
    UPROPERTY(Transient)
    bool bOrigImpartBaseVelocityY;
    
    UPROPERTY(Transient)
    bool bOrigImpartBaseVelocityZ;
    
    UPROPERTY(Transient)
    int32 PriorityWhenSameWeightOverlap;
    
    UPROPERTY(Instanced, Transient)
    USBSaveGameComponent* ActiveSaveGameComponet;
    
    UPROPERTY(Transient)
    float AlwaysTickDistance;
    
    UPROPERTY(Transient)
    FName SpawnAreaName;
    
    UPROPERTY(Transient)
    FVector SpawnAreaLocation;
    
    UPROPERTY(EditAnywhere)
    FName CharacterBindingSocket;
    
    UPROPERTY(EditAnywhere)
    FVector CharacterBindingRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* CharacterBindingIdleBlendSpace;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* CharacterBindingPhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterBindingInfo> CharacterBindingInfoArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBTransitAnimBlendTime> TransitAnimBlendTimeArray;
    
    UPROPERTY(Transient)
    UPhysicsAsset* BodyMeshOriginPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBCharacterParticleSet* ParticleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USBCharacterSoundSet> SoundSet;
    
    UPROPERTY(Transient)
    USBCharacterSoundSet* SoundSetHardRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBCharacterFactorSet* FactorSet;
    
    UPROPERTY(EditAnywhere, Instanced)
    USBCharacterFactorSetComponent* FactorSetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBCharacterFootStepSet* FootStepSet;
    
    UPROPERTY(Transient)
    USBCharacterFootStepSet* FootStepSetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBCharacterDialogBoundsSet* DialogBoundsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBFixedTargetRotationAxisInfo TargetRotationAxisAnimInfo;
    
    UPROPERTY(Transient)
    FSBFixedTargetRotationMoveInfo TargetRotationInfo;
    
    UPROPERTY(Transient)
    bool bHidePonyTail;
    
    UPROPERTY(Transient)
    FRotator RotClimbControlOrig;
    
    UPROPERTY(Transient)
    FVector RotClimbControlUpVector;
    
    UPROPERTY(Transient)
    float RuleMoveBlockAreaRadius;
    
    UPROPERTY(Transient)
    float RuleMoveBlockAreaZHeight;
    
    UPROPERTY(Transient)
    FVector RuleMoveBlockAreaOffset;
    
    UPROPERTY(Transient)
    float RuleMoveBlockTargetCheckRadius;
    
    UPROPERTY(Transient)
    int32 DisableRuleMoveBlockArea;
    
    UPROPERTY(Transient)
    int32 DisableRuleMove;
    
    UPROPERTY(Transient)
    int32 DisableRuleMoveRotation;
    
    UPROPERTY(Transient)
    int32 DisableHuddleUpAction;
    
    UPROPERTY(Transient)
    int32 DisableEventMove;
    
    UPROPERTY(Transient)
    bool bInvalidRuleMoveTarget;
    
    UPROPERTY(Transient)
    bool bExcludingRuleMoveIgnoreTarget;
    
    UPROPERTY(Transient)
    bool bDisableMoveCollisionOverlap;
    
    UPROPERTY(Transient)
    bool bDisableControllerInput;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreAttachedSequenceOverlabContrl;
    
    UPROPERTY(Transient)
    TSet<FName> LimitedScanVolumeNameSet;
    
    UPROPERTY(Transient)
    bool bNoScan;
    
    UPROPERTY(Transient)
    bool bScanIgnoreBusy;
    
    UPROPERTY(Transient)
    bool ScanRegistered;
    
    UPROPERTY(Transient)
    bool bScanTargeted;
    
    UPROPERTY(Transient)
    float LandingDamageHeight;
    
    UPROPERTY(Transient)
    double LandedTime;
    
    UPROPERTY(Transient)
    FName CurrentStanceName;
    
    UPROPERTY(Transient)
    bool bCharacterHiddenInGame;
    
    UPROPERTY(Transient)
    bool bOriginCharacterHiddenInGame;
    
    UPROPERTY(Transient)
    bool bLockCharacterHiddenInGame;
    
    UPROPERTY(Transient)
    bool bCharacterHiddenInGameUntilEvent;
    
    UPROPERTY(Transient)
    bool bCharacterHiddenInActorStudio;
    
    UPROPERTY(Transient)
    bool bCompletedCreateCharacter;
    
    UPROPERTY(Transient)
    bool bAlwaysActorTickWhenHidden;
    
    UPROPERTY(Transient)
    float RecreatePhysicsStateTime;
    
    UPROPERTY(Transient)
    int32 RecordPhysXTaskCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> FloorCheckCollisionObjectType;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreExistFloor;
    
    UPROPERTY(Transient)
    bool bExistFloor;
    
    UPROPERTY(Transient)
    TArray<FVector> FloorCheckMoveHistroy;
    
    UPROPERTY(Transient)
    FName FloorCheckFloorLevelName;
    
    UPROPERTY(Transient)
    bool bForceFoldWeapon;
    
    UPROPERTY(Transient)
    bool bForceFoldWeaponStance;
    
    UPROPERTY(Transient)
    FVector CachedCharacterBoundExtents;
    
    UPROPERTY(Transient)
    bool bForceWeaponHide;
    
    UPROPERTY(Transient)
    uint32 PauseRuleMoveGUID;
    
    UPROPERTY(Transient)
    TMap<FName, bool> CustomBoolMap;
    
    UPROPERTY(Transient)
    TMap<FName, float> CustomFloatMap;
    
    UPROPERTY(Transient)
    TMap<FName, int32> ShowKeyTagMap;
    
    UPROPERTY(Transient)
    TArray<FSBShapeCollisionInfo> OriginShapeComponentArray;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> RuleMoveBlockShapeComponentArray;
    
    UPROPERTY(Transient)
    FVector BodyRelativeLocation;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UFXSystemComponent>> RegisterFXSystemArray;
    
    UPROPERTY(Transient)
    FSBCharacterDeactiveMovingInfo DeactiveMovingInfo;
    
    UPROPERTY(Transient)
    bool bIgnoreHiddenInGame;
    
    UPROPERTY(Transient)
    bool bItemInteractionToggle;
    
    UPROPERTY(Transient)
    bool bItemInteractionAllow;
    
    UPROPERTY(Transient)
    bool bGrabPivotChange;
    
    UPROPERTY(Transient)
    bool bGrabRotateLockChange;
    
    UPROPERTY(Transient)
    bool bProcessedMoveState;
    
    UPROPERTY(Instanced, Transient)
    USpotLightComponent* DroneSpotLightComp;
    
    UPROPERTY(Transient)
    FRotator InitialDroneLightRotation;
    
    UPROPERTY(Transient)
    float DroneLocationAddZ;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* InteractionOriginComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* InteractionPointComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* QuestMarkerComponent;
    
    UPROPERTY(Transient)
    FHitStopIK HitStopIK;
    
    UPROPERTY(Transient)
    FVector CharacterFixedLocation;
    
    UPROPERTY(Transient)
    bool bCharacterFixedLocationOnGround;
    
    UPROPERTY(Transient)
    bool bCheckCharacterFixedLocationOnGround;
    
    UPROPERTY(Transient)
    float RecorverSequenceLookAtIKDelayTime;
    
    UPROPERTY(Transient)
    bool bInteractionPauseMetaAI;
    
    UPROPERTY(Transient)
    bool bActiveLevelSeqLookAtIK;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBLookAtIKType> EnableLevelSequenceLookAtIKType;
    
    UPROPERTY(Transient)
    int32 SelectedSystemMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bIgnoreKeepAllBodiesPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bDisableAutoResetPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 AutoResetPhyiscsBasedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bDisableKeepAllBodiesPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bResetPhysicsWithWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAutoKeepAllBodiesPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName KeepAllBodiesPhysicsTargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KeepAllBodiesPhysicsDist;
    
private:
    UPROPERTY(EditAnywhere)
    bool bSupportRagdollPoseSnapshot;
    
    UPROPERTY(EditAnywhere)
    FName PoseSnapshotAdditionalCheckBone;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterLinearDamping;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterAngularDamping;
    
    UPROPERTY(EditAnywhere)
    bool bPhysicsForceReInitWhenInitActor;
    
    UPROPERTY(Transient)
    FVector LastWaterCheckLocation;
    
    UPROPERTY(Transient)
    bool bUnderWater;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_BroadcastSpawnInfo)
    FSBBroadcastSpawnInfo BroadcastSpawnInfo;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterObjectStateType> CharacterObjectState;
    
    UPROPERTY(Transient)
    ASBWorldCompositionStreamingBlockingVolume* CurrentSBWorldCompositionStreamingBlockingVolume;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBZoneEnvActor> ObjectGrab;
    
    UPROPERTY(Transient)
    TMap<int32, FGuid> GrabTransitGuidMap;
    
    UPROPERTY(Transient)
    float GrabTransitEndBlockMoveDuration;
    
    UPROPERTY(Transient)
    float GrabActiveDist;
    
    UPROPERTY(Transient)
    float GrabActiveYawDiff;
    
    UPROPERTY(Transient)
    FVector GrabLastForward;
    
    UPROPERTY(Transient)
    FVector GrabLastLocation;
    
    UPROPERTY(Transient)
    FVector GrabLastDeltaLoc;
    
    UPROPERTY(Transient)
    float GrabIKAlpha;
    
    UPROPERTY(Transient)
    UCurveFloat* CurveGrabIK;
    
    UPROPERTY(Transient)
    float CurveGrabStartTime;
    
    UPROPERTY(Transient)
    float CurveGrabLength;
    
    UPROPERTY(Transient)
    float LastSetComponentTickInterval;
    
    UPROPERTY(Transient)
    FRotator ParallelTick_SetActorRotation;
    
    UPROPERTY(Transient)
    bool bPressedInteractionActionInput;
    
    UPROPERTY(Transient)
    bool bEnableInteractionBlock;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBInteractionStepState> InteractionState;
    
    UPROPERTY(Transient)
    bool bRunningInteractionGraph;
    
    UPROPERTY(Transient)
    bool bEnableInteractionMove;
    
    UPROPERTY(Transient)
    int32 NeedPonytailClothConfigUpdate;
    
    UPROPERTY(Transient)
    TArray<FName> EquipmentDataList;
    
    UPROPERTY(Transient)
    bool bInitialCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* JumpToSprintMoveSpeedCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* SlopeJumpToLandMoveSpeedCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* SwimToGroundMoveSpeedCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* JumpToSprintShortMoveSpeedCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* JumpHighToMoveControlDurationData;
    
    UPROPERTY(Transient)
    TMap<FName, int32> ActionBindSkillCmdStateMap;
    
    UPROPERTY(Transient)
    FName CurrentBulletItemAlias;
    
    UPROPERTY(Transient)
    FVector LastKeepAllBodiesBoneLocation;
    
    UPROPERTY(Transient)
    FQuat LastKeepAllBodiesBoneQuat;
    
    UPROPERTY(Transient)
    TArray<float> HistoryResetPhysVelocty;
    
    UPROPERTY(Transient)
    TArray<float> HistoryResetPhysDegree;
    
    UPROPERTY(Transient)
    int32 CurrentHistoryResetPhysNum;
    
    UPROPERTY(Transient)
    int32 CurrentMaxHistoryResetPhysNum;
    
    UPROPERTY(Transient)
    float RemainResetPhysics;
    
    UPROPERTY(Transient)
    bool bManualResetPhysics;
    
    UPROPERTY(Transient)
    bool bResetPhyiscsWithControlWeight;
    
    UPROPERTY(Transient)
    float LastSwimmingTime;
    
    UPROPERTY(Transient)
    FTransform CapsuleComponentPreviousTransform;
    
    UPROPERTY(Transient)
    FTransform CapsuleComponentCurrentTransform;
    
    UPROPERTY(Transient)
    bool bNeedInitializeAnimation;
    
    UPROPERTY(Transient)
    bool bRegisterSequentialTick;
    
    UPROPERTY(Transient)
    int32 SequenceAnimImmidateUpdateCount;
    
    UPROPERTY(Transient)
    bool bDisableKawaiiPhysicsResetWhenAttachedToLevelSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient)
    float KawaiiPhysicsResetTargetAlpha;
    
public:
    UPROPERTY(Transient)
    TSet<FName> SBActivatedLevelStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSliceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBSliceSkeletalMeshDataAsset* SliceSkeletalMeshDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBSliceSkeletalMeshTemplateDataAsset* SliceSkeletalMeshTemplateDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceMipLevelsToBeResidentWhenSequencer;
    
private:
    UPROPERTY(EditAnywhere)
    float SignificanceManagerOptimizationScale;
    
public:
    ASBCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WeaponForceHide(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEyePosition(bool inReset);
    
    UFUNCTION(BlueprintCallable)
    void StartFlyingAction();
    
    UFUNCTION(BlueprintCallable)
    void StartClimbing(FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridePonytailClothPhysicsAsset(UPhysicsAsset* inClothPhysicsAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideClothPhysicsAsset(const FString& inMeshPath, bool inApplyHair, bool inFromBodyMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveToTargetLocation(FVector InTargetLocation, FVector InTargetDirection, float InMoveSpeedPerSec, float InMinimumDistToTarget, USceneComponent* pBaseComp, float InAfterBlockMoveInputDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveInputBlockDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveInputBlock(bool inMoveBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetLockupSimulatePhysics(bool inLockupSimulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetKinematicForShortPonytail(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepAllBodiesPhysicsTransform(int32 inKeepFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalMaterialScalarParameterValue(FName InParameterName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDroneSpotLight(USpotLightComponent* inSpotLightComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDollyCamMode(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFloat(FName inCustom, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomBool(FName inCustom, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetClothAdditiveWindDirection(FVector inAdditiveWindDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetCamOverrideFovMode(float NewFOV, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLagSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlackboardVectorValue(FName InName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlackboardIntValue(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlackboardFloatValue(FName InName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveEventMoveIK(bool bInActive, float InBlendTime, float InTargetValue, float InApplyDelayTime, TEnumAsByte<ESBEventMoveIKApplySlot> InApplySlot);
    
    UFUNCTION(BlueprintCallable)
    void SetActivateFootIK(const FString& CallStack, bool bInActive, float InBlendTime, float InTargetValue, float InApplyDelayTime, bool bInForceApply, float InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetActivateFeetIK(bool bInActive);
    
    UFUNCTION(Reliable, Server)
    void ServerRequest_SetMoveInfo_Reliable(const FSBCharacterMoveInfo& InMoveInfo);
    
    UFUNCTION(Server, Unreliable)
    void ServerRequest_SetMoveInfo(const FSBCharacterMoveInfo& InMoveInfo);
    
    UFUNCTION(Reliable, Server)
    void ServerRequest_DoJump(bool inbJump, bool inbJumpDir, FVector inJumpDir);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMoveWrapper(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMoveNoBaseWrapper(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable)
    float RopeSwingPendulumAnglePerAlpha();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReturnToDefault();
    
    UFUNCTION(BlueprintCallable)
    void RegisterFXSystem(UFXSystemComponent* inFXSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleClimbCam();
    
    UFUNCTION()
    void OnRep_BroadcastSpawnInfo();
    
    UFUNCTION()
    void OnFinishedLevelSequence();
    
    UFUNCTION()
    void OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnCollisionOriginEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnCapsuleComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnAIMoveComplete(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyShowEvent(FName EventTagName, FName CustomNameValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBPEvent(TEnumAsByte<ESBNotifyBPEvent> inEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SliceMesh(FName SliceBone, FName AttachBone0, const FVector& RelativeCapLocation0, FName AttachBone1, const FVector& RelativeCapLocation1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetMesh(TEnumAsByte<ESBSkelMeshSlot> inMeshSlot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ReleaseActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ReInitActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_PostInit(const TArray<FTransform>& TargetPoints);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_InitActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ChangeCrowdControl(TEnumAsByte<ESBNotifyBPCrowdControl> inCrowdControl);
    
    UFUNCTION(BlueprintCallable)
    bool IsWireMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsWallRunJumpScaleOverrided(float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    bool IsWallRunJump();
    
    UFUNCTION(BlueprintCallable)
    bool IsWallRun();
    
    UFUNCTION(BlueprintCallable)
    bool IsWallHitAction();
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleSwordTrail();
    
    UFUNCTION(BlueprintPure)
    bool IsValidTachyWingSnapshotDataPath() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsValidMoveRightSmoothValue(bool inIgnoreGamePad);
    
    UFUNCTION(BlueprintPure)
    bool IsValidHairSnapshotDataPath() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsUseSlopeMovingCamera();
    
    UFUNCTION(BlueprintCallable)
    bool IsUnderWaterSwimming();
    
    UFUNCTION(BlueprintCallable)
    bool IsTPSMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsSwimJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsSprintJump();
    
    UFUNCTION(BlueprintCallable)
    bool IsSprint();
    
    UFUNCTION(BlueprintCallable)
    bool IsSlopeMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsSlopeJumpOut();
    
    UFUNCTION(BlueprintCallable)
    bool IsSlopeJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsSlideSlipJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsSlideSlipFalling();
    
    UFUNCTION(BlueprintCallable)
    bool IsSideRodWallless();
    
    UFUNCTION(BlueprintCallable)
    bool IsSideRodJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsSideRodFalling();
    
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsShortPonyTail();
    
    UFUNCTION(BlueprintPure)
    bool IsRunSpiderNavWay() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunningSkill();
    
    UFUNCTION(BlueprintCallable)
    bool IsRunningInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool IsRunHuddleUpAction();
    
    UFUNCTION(BlueprintCallable)
    bool IsRun();
    
    UFUNCTION(BlueprintCallable)
    bool IsRopeSwing();
    
    UFUNCTION(BlueprintCallable)
    bool IsRopeMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsRodJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsRagdollSimulate(bool isAllBodies);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayJumpTransitAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingRunInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayableWhenLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    bool IsPhotoModeFacialAnimationEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsPhotoModeDefaultWeaponSnapshot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPhotoModeDefaultSnapshot() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOverrideBlendSpaceUpper();
    
    UFUNCTION(BlueprintCallable)
    bool IsOverriddenBlendSpacePlayerActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedPlayTurnAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsMovingTargetOn();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveInputBlock();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveBlockedByWall();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveBackByTargetOverlap();
    
    UFUNCTION(BlueprintCallable)
    bool IsMotionMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsMetaAITiredState();
    
    UFUNCTION(BlueprintCallable)
    bool IsLockOn();
    
    UFUNCTION(BlueprintCallable)
    bool IsJumping();
    
    UFUNCTION(BlueprintCallable)
    bool IsJoggingRun();
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldSwimming();
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldBalanceBeam();
    
    UFUNCTION(BlueprintCallable)
    bool IsHidePonyTail();
    
    UFUNCTION(BlueprintCallable)
    bool IsGrabObjectMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsGlide();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlyingAction();
    
    UFUNCTION(BlueprintCallable)
    bool IsFishingReel();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistFloor();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventMovingSlidingState();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableKneeIK();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoubleJump();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableLookAtEye();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableIdleAdditiveAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableFootIKWhenRideOnVehicle();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentStretchSideRodSearch();
    
    UFUNCTION(BlueprintCallable)
    bool IsClimbing();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlockingMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsbDoWallJump();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackParried();
    
    UFUNCTION(BlueprintCallable)
    bool IsAttachedToLevelSequenceWithoutPlayable();
    
    UFUNCTION(BlueprintCallable)
    bool IsAllowLookAtTargetWhenLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveTPSAimOffset();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveOverlapMove();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveFullBodyIK_ByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveFullBodyIK();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveFootIK();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveFeetIK();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveCustomMovingStanceData();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveBoneBlend();
    
    UFUNCTION(BlueprintCallable)
    bool IsAccelSwimUp();
    
    UFUNCTION(BlueprintCallable)
    bool IsAccelSwimDown();
    
    UFUNCTION(BlueprintCallable)
    float GetWallSlideSideValue();
    
    UFUNCTION(BlueprintCallable)
    FVector GetWallRunNormal();
    
    UFUNCTION(BlueprintCallable)
    FVector GetWallRunDir();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBTPSModeType> GetTPSModeType();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTPSLookAtWorldLocation(bool inReCheckHitLocation);
    
    UFUNCTION(BlueprintCallable)
    FVector GetTPSLookAtLocalSpaceDirection();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetTPSLookAtBlendSpaceXY();
    
    UFUNCTION(BlueprintCallable)
    float GetSprintSpeedScale();
    
    UFUNCTION(BlueprintCallable)
    bool GetSequencerAnimMode();
    
    UFUNCTION(BlueprintCallable)
    float GetSelfieAnimBSValue();
    
    UFUNCTION(BlueprintCallable)
    float GetSBSpeedForAnimGraph();
    
    UFUNCTION(BlueprintCallable)
    USBSkeletalMeshComponent* GetSBSkeletalMeshComponent(TEnumAsByte<ESBSkelMeshSlot> Slot);
    
    UFUNCTION(BlueprintCallable)
    USBCharacterMovementComponent* GetSBMovementComponent();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSBCharacterRightVector();
    
    UFUNCTION(BlueprintCallable)
    float GetRunInputDuration();
    
    UFUNCTION(BlueprintCallable)
    float GetPoseSnapBlendWeight();
    
    UFUNCTION(BlueprintPure)
    FName GetPoseName_PhotoMode() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetPonytailMeshName();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetPhotoModeFacialAnimation();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPhysicalSurface> GetOverrideFootStepPhySurface(TEnumAsByte<EPhysicalSurface> inDefaultSurfacee);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharacterFootPlacement> GetMoveToIdleFootPlace();
    
    UFUNCTION(BlueprintCallable)
    float GetMoveInputDirectionAngle();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharacterMoveAnimBlendMode> GetMoveAnimBlendMode();
    
    UFUNCTION(BlueprintCallable)
    ESBMetaAIBehaviorStance GetMetaAIBehaviorStance();
    
    UFUNCTION(BlueprintCallable)
    ASBCharacter* GetLookAtTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    ASBCharacter* GetLockOnTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharacterMoveType> GetLastMoveType();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKSearchDistanceForwardR();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKSearchDistanceForwardL();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKSearchDistanceBackwardR();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKSearchDistanceBackwardL();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKOffset_RToe();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKOffset_RKnee();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKOffset_LToe();
    
    UFUNCTION(BlueprintCallable)
    float GetKneeIKOffset_LKnee();
    
    UFUNCTION(BlueprintCallable)
    float GetKawaiiPhysicsAlpha();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharaterAdditiveBodyType> GetIdleAdditiveAnimType();
    
    UFUNCTION(BlueprintCallable)
    float GetIdleAdditiveAnimAlpha();
    
    UFUNCTION(BlueprintPure)
    FHitStopIK GetHitStopIKData() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGrabIKAlpha();
    
    UFUNCTION(BlueprintCallable)
    FVector GetGlobalMaterialVectorParameterValue(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    float GetGlobalMaterialScalarParameterValue(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    float GetGamePadRTriggerAxisValue();
    
    UFUNCTION(BlueprintCallable)
    float GetGamePadLTriggerAxisValue();
    
    UFUNCTION(BlueprintCallable)
    float GetFullBodyIkActiveHitPointAngle();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFowardVector(bool bActorFoward);
    
    UFUNCTION(BlueprintCallable)
    float GetFootIKAlphaValue();
    
    UFUNCTION(BlueprintCallable)
    float GetFishingRodDirection();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBFishingModeType> GetFishingModeType();
    
    UFUNCTION(BlueprintCallable)
    float GetFishingLookAtBlendSpaceX();
    
    UFUNCTION(BlueprintCallable)
    float GetFeetIKTraceScale();
    
    UFUNCTION(BlueprintCallable)
    float GetFeetIKAlphaValue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFacialIdleAnimType();
    
    UFUNCTION(BlueprintPure)
    int32 GetFacialAnimType_PhotoMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetFacialAnimPosition_PhotoMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEyeTrackingToCam();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetEyePosition2D();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBEventMoveType> GetEventMovingType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEventMoveSideValue();
    
    UFUNCTION(BlueprintCallable)
    float GetEventMoveIKAlphaValue(TEnumAsByte<ESBEventMoveIKApplySlot>& OutApplyEventMoveIK);
    
    UFUNCTION(BlueprintCallable)
    float GetEventMoveIKActivateTime();
    
    UFUNCTION(BlueprintCallable)
    bool GetDollyCamMode(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    float GetCustomPoseSnapBlendWeight();
    
    UFUNCTION(BlueprintCallable)
    float GetCustomFloat(FName inCustom);
    
    UFUNCTION(BlueprintCallable)
    bool GetCustomBool(FName inCustom);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCustomBlendSpaceInput();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentStanceName();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentSideRodSearchDegreeValue();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentRotaionPower();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharacterFootPlacement> GetCurrentFootPlace();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimByMeshSlotAlpha(TEnumAsByte<ESBSkelMeshSlot> InMeshSlotType);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAlpha_Upper(int32 inCustomAnimIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAlpha_Lower(int32 inCustomAnimIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAlpha(int32 inCustomAnimIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAddtiveAlpha_Upper();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAddtiveAlpha();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCameraLagSpeed();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentBulletItemAlias();
    
    UFUNCTION(BlueprintCallable)
    float GetCamOverrideFovMode();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraZoom();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBBoneBlendType> GetBoneBlendType();
    
    UFUNCTION(BlueprintCallable)
    FName GetBodyMeshName();
    
    UFUNCTION(BlueprintCallable)
    bool GetBlackboardValue(FName InName, int32& outIntValue, float& outFloatValue, FVector& outVectorValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetArriveMetaAIBehaviorNode();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimLookAtTargetLocation(TEnumAsByte<ESBLookAtIKType> InType, bool bComponentSpace, bool inIgnoreCheckCondition);
    
    UFUNCTION(BlueprintCallable)
    float GetAnimControllerSpringWeight();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimControllerFullbodyIKFactor();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorBottomLocation();
    
    UFUNCTION(BlueprintCallable)
    void ForceAllClothNextUpdateTeleportAndReset();
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventUnderWater(FVector inHitLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventImmidateTickForEditor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Event_ChangeBattleState(bool bIsBattle);
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicle(AActor* Vehicle, bool inBlockSimulatePhysicsFromTransform, bool inControlRotation, bool bInDisableFootIKWhenRideOnVehicle);
    
    UFUNCTION(BlueprintCallable)
    void EndFlyingAction();
    
    UFUNCTION(BlueprintCallable)
    void DeactiveCustomMovingStanceData();
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBroadcast_SetMoveInfo_Reliable(const FSBCharacterMoveInfo& InMoveInfo);
    
    UFUNCTION(NetMulticast, Unreliable)
    void ClientBroadcast_SetMoveInfo(const FSBCharacterMoveInfo& InMoveInfo);
    
    UFUNCTION(BlueprintCallable)
    void ClearNeedPlayTurnAnimFlag();
    
    UFUNCTION(BlueprintCallable)
    bool CheckMoveRightSmoothValue(float inUnderValue, bool inIgnoreGamePad);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAttachTarget(TEnumAsByte<ESBSkelMeshSlot> OwnerSlot, TEnumAsByte<ESBSkelMeshSlot> TargetSlot, FName AttachSocketName, float InBlendTime, float InPriority);
    
    UFUNCTION(BlueprintCallable)
    void CancelClimbing();
    
    UFUNCTION(BlueprintCallable)
    void CalcHitEventDirection(FVector ForceOrigin, FVector ForceVelocity);
    
    UFUNCTION(BlueprintCallable)
    float CalcAnimSpeedByWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    float CalcAnimSpeedByRunSpeed();
    
    UFUNCTION(BlueprintCallable)
    float CalcAnimSpeedByClimbSpeed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyMeshInfo(USBSkeletalMeshComponent* PinActor, TEnumAsByte<ESBSkelMeshSlot> inMeshInfoSlot);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKeepAllBodiesPhysicsTransform();
    
    UFUNCTION(BlueprintCallable)
    void AddCameraZoom(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ActiveCustomMovingStanceData(const FSBCharMovingStanceData& InData);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool PlaySingleShow(const FString& inShowPath, bool inFullPath, FVector InTargetLocation) override PURE_VIRTUAL(PlaySingleShow, return false;);
    
    UFUNCTION(BlueprintCallable)
    void ActorStopCustomAnim(FGuid InAnimGuid, FName inComponentTag, float InOutBlendTime) override PURE_VIRTUAL(ActorStopCustomAnim,);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimSequenceMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimSequenceMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimSequence(UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimSequence, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimNameMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimNameMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimName(const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimName, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    bool IsPoolingActor() override PURE_VIRTUAL(IsPoolingActor, return false;);
    
};

