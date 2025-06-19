#include "SBCharacter.h"
#include "Net/UnrealNetwork.h"
#include "SBCharacterFactorSetComponent.h"
#include "SBCharacterMovementComponent.h"
#include "SBCollisionGroupComponent.h"
#include "SBSkeletalMeshComponent.h"
#include "SBSpringArmComponent.h"

ASBCharacter::ASBCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bAlwaysRelevant = true;
    this->bUseControllerRotationYaw = false;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->CurrentLockOnDistance = 0.00f;
    this->FollowCamera = NULL;
    this->CameraBoom = CreateDefaultSubobject<USBSpringArmComponent>(TEXT("CameraBoom"));
    this->CollisionGroupComponent = CreateDefaultSubobject<USBCollisionGroupComponent>(TEXT("CollisionGroup"));
    this->CameraDollySpline = NULL;
    this->bUseInteractionCamClamp = false;
    this->bEyeTrackingToCam = false;
    this->RemainEyeTrackingToCam = 0.00f;
    this->RemainNextCheckEyeTrackingToCam = 0.00f;
    this->RemainNextCheckPlayIdleEventAnim = 0.00f;
    this->bDisableIdleEventAnim = false;
    this->MouseWheelLockOnBlockDuration = 0.00f;
    this->EyeTrackingAlpha = 0.00f;
    this->bInitAnimSetSyncData = false;
    this->CuttingMeshLOD = 0;
    this->CuttingMeshImpulsePower = 1.00f;
    this->bIsCuttedMesh = false;
    this->bUseControlCollisionAtSwim = false;
    this->bActiveFlyingSpline = false;
    this->bActiveSwimSpline = false;
    this->bActiveUnderWaterSwimSpline = false;
    this->bActiveSlopeMovingSpline = false;
    this->bActiveSlopeMovingSpline2 = false;
    this->bActiveSideRodSpline = false;
    this->bActiveRodSpline = false;
    this->bActiveSideToSideSpline = false;
    this->bActiveBalanceBeamSpline = false;
    this->bActiveSlidingSlipSpline = false;
    this->bActiveHoldBalanceBeamSpline = false;
    this->bActiveWallRunSpline = false;
    this->OverrideLockOnMaxDistance = 0.00f;
    this->OverrideLockOnReleaseDistance = 0.00f;
    this->OverrideLockOnArmLength = 0.00f;
    this->OverrideLockOnPitchAdd = 0.00f;
    this->bOverrideLockOnPitchMin = false;
    this->OverrideLockOnPitchMinValue = -60.00f;
    this->bOverrideLockOnPitchMax = false;
    this->OverrideLockOnPitchMaxValue = 20.00f;
    this->bOverrideLockOnCamBoomHeight = false;
    this->OverrideLockOnCamBoomHeight = 0.00f;
    this->bOverrideLockOnCamBoomLeftRight = false;
    this->OverrideLockOnCamBoomLeftRight = 0.00f;
    this->GaugeDisplayBoneSocketName = TEXT("SC_GaugeDisplay");
    this->LockOnPitchMaxAtCustomTargetBoneSocket = 20.00f;
    this->bShortPonyTail = false;
    this->bApplyShortPonyTailPhysics = false;
    this->RemainCustomLockOnTargetDuration = 0.00f;
    this->CustomLockOnTargetDuration = 0.00f;
    this->CustomLockOnTargetBlendInDuration = 0.00f;
    this->CustomLockOnTargetBlendOutDuration = 0.00f;
    this->RemainRunningLockOnRotation = 0.00f;
    this->LockOnPointCurveByDistance = NULL;
    this->LockOnPointCurveByDir = NULL;
    this->LockOnPointWeightCurveByDir = NULL;
    this->AimLockOnPointCurveByDistance = NULL;
    this->AimLockOnPointCurveByDir = NULL;
    this->AimLockOnPointWeightCurveByDir = NULL;
    this->OverlapBodyCollision = NULL;
    this->PhysicsCapsuleCollision = NULL;
    this->bLockOnRunRotationEnable = true;
    this->LockOnRunRotationDegree = 30.00f;
    this->LockOnRunRotationDuration = 0.80f;
    this->LockOnRunRotToCharDuration = 0.20f;
    this->bLockOnRunRotationLowerAnim = false;
    this->bFreeCamMode = false;
    this->bIgnoreSetMeshInfoCorrectionCapsuleZ = false;
    this->bUseSetMeshInfoCapsuleHeight = true;
    this->CameraDollySplineFlying = NULL;
    this->CameraDollySplineSwim = NULL;
    this->CameraDollySplineUnderWaterSwim = NULL;
    this->CameraDollySplineSlopeMoving = NULL;
    this->CameraDollySplineSlopeMoving2 = NULL;
    this->CameraDollySplineSideRod = NULL;
    this->CameraDollySplineRod = NULL;
    this->CameraDollySplineSideToSide = NULL;
    this->CameraDollySplineBalanceBeam = NULL;
    this->CameraDollySplineSlidingSlip = NULL;
    this->CameraDollySplineHoldBalanceBeam = NULL;
    this->CameraDollySplineWallRun = NULL;
    this->bSetExtraSpline = false;
    this->bSequencerPlacement = false;
    this->UseConstructMeshSetting = false;
    this->BrainComponent = NULL;
    this->bPhotoModeCloseRange = false;
    this->SelfieAnimBSValue = 0.00f;
    this->NPCSelfieIdlePoseCheckTime = 0.00f;
    this->RemainMoveInputBlockDuraion = 0.00f;
    this->CurrentMovingForceDuration = 0.00f;
    this->MoveInputBlockCount = 0;
    this->LastMoveRightInput = 0.00f;
    this->LastMoveSmoothRightInput = 0.00f;
    this->LastNonZeroMoveRightInput = 0.00f;
    this->LastMoveFowardInput = 0.00f;
    this->BlockWallMoveFowardInput = 0.00f;
    this->BlockWallMoveRightInput = 0.00f;
    this->PreLastMoveFowardInput = 0.00f;
    this->DisableLockOnCharacterRotaion = 0;
    this->DisableLookAtIK = 0;
    this->DisableHoldBalanceBeamAction = 0;
    this->bSoftDisableLockOnCharacterRotation = false;
    this->LastFrameCountFalseSoftDisableLockOnCharacterRotation = 0;
    this->RemainClimbDuration = 0.00f;
    this->bRequestFallStartTransit = false;
    this->RequestCancelWallRunFlag = 0;
    this->PhysWalkingMovingTime = 0.00f;
    this->bDisableMovingTransit = false;
    this->bDisableLandingTransit = false;
    this->bDisableLockonTarget = false;
    this->bDisableLockOnControl = false;
    this->WalkInputDuration = 0.00f;
    this->RunInputDuration = 0.00f;
    this->PhysWalkInputDuration = 0.00f;
    this->GamePadLTriggerAxisValue = 0.00f;
    this->GamePadRTriggerAxisValue = 0.00f;
    this->BlockingModeCount = 0;
    this->RemainJumpToSprintHoldDuration = 0.00f;
    this->RemainHoldLastMoveInputDuration = 0.00f;
    this->RemainBlockJumpDuration = 0.00f;
    this->bEnableJumpToSprintHoldJump = false;
    this->RemainSlopeDashDuration = 0.00f;
    this->bRunningSlopeAutoMove = false;
    this->RemainBlockSlopeDashDuration = 0.00f;
    this->RemainBlockStartEventMove = 0.00f;
    this->SlopeDashInputValue = 0.00f;
    this->BlockPlayTransitAnimCount = 0;
    this->DefaultCameraArmLength = 340.00f;
    this->RotationYawRate = 720.00f;
    this->RotationYawRateScale = 1.00f;
    this->RotationYawRateCurveByWalkSpeed = NULL;
    this->RotationYawScaleCurveByMoveInputDegree = NULL;
    this->CameraFovCurveByDistance = NULL;
    this->UsePathWayFloorCheck = true;
    this->MoveSmoothRightInputLerpValue = 0.05f;
    this->FallingRotationYawRate = 360.00f;
    this->RepeatBlockTurnTime = 0.50f;
    this->RunTurnDuration = 0.30f;
    this->WalkTurnDuration = 0.20f;
    this->IdleTurnDuration = 0.20f;
    this->SprintTurnDuration = 0.40f;
    this->RemainTurnDuration = 0.00f;
    this->RemainHoldWalkingDuration = 0.00f;
    this->RemainHoldLockOnAtChatDuration = 0.00f;
    this->RemainBlockStartSprint = 0.00f;
    this->RemainBlockStartHoldSwim = 0.00f;
    this->RemainActiveRunStartAfterEvade = 0.00f;
    this->RemainUpdateProceduralDelay = 0.00f;
    this->RemainTurnDeltaRotDuration = 0.00f;
    this->TurnDeltaRotPower = 0.00f;
    this->WaitTimeSwimToGroundValue = 0.00f;
    this->bEnableChangeInteraction = false;
    this->bRequestEnableChangeInteraction = false;
    this->bEnableMeshCollision = false;
    this->bDisableMeshCollisionByDistanceToPlayer = false;
    this->bEnablePhysicsCapsuleCollision = false;
    this->RemainInteractionActionDuration = 0.00f;
    this->CurrentInteractionActionDuration = 0.00f;
    this->bInCliffArea = false;
    this->bCliffActionInArea = false;
    this->CliffActionCancelBlockDurationValue = 0.00f;
    this->bInWallArea = false;
    this->bBlockWallActionInArea = false;
    this->bInExclusiveWaterVolume = false;
    this->bInteractionMoveToTargetLoc = false;
    this->RemainBlockChangeInteraction = 0.00f;
    this->RemainBlockStartSideRod = 0.00f;
    this->RemainBlockStartSlopeMove = 0.00f;
    this->RemainBlockSlopeJumpEnd = 0.00f;
    this->bForceBlockStartSlopeMove = false;
    this->bCliffAction = false;
    this->CurrentCliffActionTime = 0.00f;
    this->bBlockWallFrontAction = false;
    this->RemainBlockWallNextAction = 0.00f;
    this->bHuddleUpAction = false;
    this->bHuddleUpActionOnGround = false;
    this->bCancelHuddleUpByJump = false;
    this->HuddleUpActionToLow = false;
    this->HuddleUpActionIndex = 0;
    this->bEnableHuddleUpByJump = false;
    this->HuddleUpActionStartSpeed = 0.00f;
    this->HuddleUpGroundCancelBlockDuration = 0.00f;
    this->CurrentRopeSwingJumpInputBlockDuration = 0.00f;
    this->bIdleTurning = false;
    this->SpeedForAnimGraph = 0.00f;
    this->CurrentSpeedForAnimGraph = 0.00f;
    this->bUseOverrideSpeedForAnimGraph = false;
    this->OverrideSpeedForAnimGraph = 150.00f;
    this->KeepZeroSpeedForAnimGraphTime = 0.00f;
    this->LastGetCurrentSpeedForAnimGraph = 0.00f;
    this->ReturnLastSpeedForAnimGraphTime = 0.00f;
    this->AnimControllerSpringWeight = 1.00f;
    this->AnimControllerFootIKFactor = 1.00f;
    this->AnimControllerFullBodyIKFactor = 1.00f;
    this->bHideWhenSequenceCameraNear = false;
    this->bSlidePhysWalk = false;
    this->SlideSideValue = 0.00f;
    this->RemainBeginSlideSideDuration = 0.00f;
    this->RemainCustomSlideSideValueBlendTime = 0.00f;
    this->CurrentWallSlideSideValue = 0.00f;
    this->AttachedToLevelSequenceRefCount = 0;
    this->LookAtTargetLevelSequenceRefCount = 0;
    this->bSequencerAnimMode = false;
    this->PlayableWhenLevelSequenceRefCount = 0;
    this->bStartMovementNoneWhenLevelSequence = false;
    this->DisableRootClothCollision = 0;
    this->bCustomOverrideClothPhysicsAsset = false;
    this->AverageMoveInputSize = 0.00f;
    this->AverageMoveInputCount = 0;
    this->bRunningSkill = false;
    this->bRunningSkillForceCancelWhenAttachedToLevelSequence = false;
    this->bAttackParried = false;
    this->FootPlacementValue = ESBCharacter_Foot_None;
    this->MoveToIdleFootPlacementValue = ESBCharacter_Foot_None;
    this->WireModeState = WireState_Ready;
    this->FlyingActionState = FlyingAction_None;
    this->WireFlyingSpeed = 3500.00f;
    this->WireFlyingAccelSpeed = -5.00f;
    this->WireFlyingMinSpeed = 10.00f;
    this->WireFlyingMaxSpeed = 3500.00f;
    this->WireMovingSpeed = 5000.00f;
    this->WireMovingAccelSpeed = -15.00f;
    this->WireMovingMinSpeed = 10.00f;
    this->WireMovingMaxSpeed = 5000.00f;
    this->WireMoveReachDistance = 500.00f;
    this->WireRechargingSec = 0.30f;
    this->CurrentWireRechargingSec = 0.00f;
    this->CurrentWireFlyingSpeed = 0.00f;
    this->CurrentWireMovingSpeed = 0.00f;
    this->CurrentRotationPower = 0.00f;
    this->RotationPowerSensetive = 2.50f;
    this->CurrentCameraVolume = NULL;
    this->CameraVolumeActorOriginFov = 0.00f;
    this->CurrentMovingStanceVolume = NULL;
    this->bSetCustomMovingStanceData = false;
    this->CurrentCameraVolumeLookAtMode = false;
    this->CustomLookAtMaxSpeedScale = 1.00f;
    this->CustomLookAtForceWalkMode = false;
    this->CustomLookAtDisableSprint = false;
    this->CustomLookAtDisableJump = false;
    this->CustomLookAtBlockSkill = false;
    this->CustomLookAtActive = false;
    this->CustomCameraLockOnSecondBlendScale = 0.00f;
    this->CustomCameraLockOnSecondBlendDuration = 0.00f;
    this->CustomCameraLockOnSecondBlendOutDuration = 0.00f;
    this->ControllerValueHistoryDuration = 0.00f;
    this->MaxControllerValueHistoryNum = 250;
    this->CurrentAddYawControllerValueNum = 0;
    this->CurrentAddPitchControllerValueNum = 0;
    this->CustomLookAtControlCameraScale = 1.00f;
    this->bCustomLookAtControlCam = false;
    this->CustomLookAtControlCamDuration = 0.00f;
    this->LookAtCustomTargetBlendScale = 0.00f;
    this->LookAtCustomTargetDetachDuration = 0.00f;
    this->LookAtCustomTargetBlendDuration = 0.00f;
    this->RemainLookAtCustomTargetDuration = 0.00f;
    this->LookAtCustomTargetActor = NULL;
    this->LookAtCustomTargetDistance = 0.00f;
    this->LookAtCustomTargetStartDirectionCancelSize = 0.00f;
    this->bUseCancelByUserCamControl = false;
    this->CancelByUserCamControlTime = 0.00f;
    this->bSideRodJumpEnableEventMovVolumeToBack = false;
    this->CurrentSideRodSearchDegreeValue = 0.00f;
    this->bCurrentStretchSideRodSearch = false;
    this->bEnableSideRodHuddleUp = false;
    this->RemainDisableWallRunActorDuration = 0.00f;
    this->RemainPendingJumpDuration = 0.00f;
    this->bPendingRunJump = false;
    this->CurrentSlopeMovVolume = NULL;
    this->CurrentSlopeOverrideDataVolume = NULL;
    this->BackupCollisionRadiusForSlopeMove = 0.00f;
    this->BackupCollisionHalfHeightForSlopeMove = 0.00f;
    this->BackupRelativeZForSlopeMove = 0.00f;
    this->CurrentSoundEventVolume = NULL;
    this->CurrentZoneVolume = NULL;
    this->CurrentRegionVolume = NULL;
    this->bSprint = false;
    this->bToggledSprint = false;
    this->bEnableExtraSprint = false;
    this->DisableExtraSprintDuration = 0.00f;
    this->SprintDuration = 0.00f;
    this->bChangeSprintFlag = false;
    this->bSprintJump = false;
    this->bWallRunJump = false;
    this->OverrideWallRunJumpScale = -1.00f;
    this->bGlide = false;
    this->bFlyingAction = false;
    this->bForceCancelFlyingAction = false;
    this->bFlyingActionMoving = false;
    this->RemainFlyingActionTime = 0.00f;
    this->CurrentFlyingActionTime = 0.00f;
    this->FlyingActionPrepareDuration = 0.40f;
    this->FlyingActionLandedMoveBlockSec = 1.10f;
    this->FlyingActionMaxTime = 90.00f;
    this->FlyingActionAddTimePerSec = 1.00f;
    this->FlyingActionCoolTime = 0.50f;
    this->FlyingActionEnableRemainTime = 3.00f;
    this->bWallHitAction = false;
    this->WallHitRemainTimeValue = 0.00f;
    this->WallHitBounceVelocity = 0.00f;
    this->WallHitBounceDelay = 0.00f;
    this->bDrawMoveTracker = false;
    this->TargetCameraBoomLength = 0.00f;
    this->RelativeCameraBoomHeight = 30.00f;
    this->RelativeCameraBoomLeftRight = 20.00f;
    this->TargetRelativeCameraBoomHeight = 30.00f;
    this->TargetRelativeCameraBoomLeftRight = 20.00f;
    this->RemainRequestFlyingActionEvade = 0.00f;
    this->bDisableNormalMoveTransit = false;
    this->bChangedJump = false;
    this->LockOnRotationYawUnit = 1.00f;
    this->BlockLockOnMoveTargetDuration = 0.20f;
    this->LockOnMoveTargetMouseMoveSize = 2.00f;
    this->LockOnMoveTargetPadRateSize = 0.40f;
    this->LockOnBlendCamHistoryDuration = 0.10f;
    this->bLockOnPitchControlling = false;
    this->bLockOnCheckVisible = false;
    this->HideTimeForLockOnCharacter = 0.00f;
    this->FacialAnimTypeIndex = 0;
    this->FacialAnimTypeIndex_PhotoMode = 0;
    this->FacialAnimPosition_PhotoMode = 0.00f;
    this->bHideMaterialParts = false;
    this->bPrevHideMaterialParts = false;
    this->bPhotoModeDefaultSnapshot = false;
    this->bPhotoModeDefaultWeaponSnapshot = false;
    this->bChangedPose_PhotoMode = false;
    this->bDisableIdleAdditiveAnimWhenAttachedToLevelSeq = true;
    this->bDefaultDisableIdleAdditiveAnimWhenAttachedToLevelSeq = true;
    this->bDisableIdleAdditiveAnimFromStance = false;
    this->BackupTargetRelativeCameraBoomHeight = 0.00f;
    this->BackupTargetRelativeCameraBoomLeftRight = 0.00f;
    this->BackupTargetCamArmLength = 0.00f;
    this->bLockOnAlwaysPitchControl = true;
    this->bLockOnCameraEnable = true;
    this->RunToIdleLFootFrontMoveTime = 0.50f;
    this->RunToIdleLFootFrontVelocity = 60.00f;
    this->RunToIdleRFootFrontMoveTime = 0.50f;
    this->RunToIdleRFootFrontVelocity = 60.00f;
    this->WalkToIdleLFootFrontMoveTime = 1.50f;
    this->WalkToIdleLFootFrontVelocity = 20.00f;
    this->WalkToIdleRFootFrontMoveTime = 1.50f;
    this->WalkToIdleRFootFrontVelocity = 24.00f;
    this->ShortMoveToIdleLFootFrontMoveTime = 0.00f;
    this->ShortMoveToIdleLFootFrontVelocity = 0.00f;
    this->ShortMoveToIdleRFootFrontMoveTime = 0.00f;
    this->ShortMoveToIdleRFootFrontVelocity = 0.00f;
    this->MoveDurationCheckShortMove = 0.30f;
    this->SprintToIdleMoveTime = 0.50f;
    this->SprintToIdleVelocity = 120.00f;
    this->LockOnSprintToIdleMoveTime = 0.20f;
    this->LockOnSprintToIdleVelocity = 360.00f;
    this->LockOnRunWalkToIdleMoveTime = 0.47f;
    this->LockOnRunWalkToIdleVelocity = 100.00f;
    this->OverrideRunToIdleLFootFrontMoveTime = -1.00f;
    this->OverrideRunToIdleLFootFrontVelocity = -1.00f;
    this->OverrideRunToIdleRFootFrontMoveTime = -1.00f;
    this->OverrideRunToIdleRFootFrontVelocity = -1.00f;
    this->OverrideWalkToIdleLFootFrontMoveTime = -1.00f;
    this->OverrideWalkToIdleLFootFrontVelocity = -1.00f;
    this->OverrideWalkToIdleRFootFrontMoveTime = -1.00f;
    this->OverrideWalkToIdleRFootFrontVelocity = -1.00f;
    this->OverrideShortMoveToIdleLFootFrontMoveTime = -1.00f;
    this->OverrideShortMoveToIdleLFootFrontVelocity = -1.00f;
    this->OverrideShortMoveToIdleRFootFrontMoveTime = -1.00f;
    this->OverrideShortMoveToIdleRFootFrontVelocity = -1.00f;
    this->TransitAnimPriority.AddDefaulted(204);
    this->bDisableTransitAnimByStanceVolume = false;
    this->LockOnRunAnimRefSpeed = 300.00f;
    this->LockOnWalkAnimRefSpeed = 100.00f;
    this->RunAnimRefSpeed = 500.00f;
    this->WalkAnimRefSpeed = 150.00f;
    this->ClimbingAnimRefSpeed = 350.00f;
    this->LockOnCameraApplyVelocityRatio = 0.10f;
    this->SprintHoldKeyDurationOnMove = 0.00f;
    this->SprintHoldKeyDurationOnLockOnMove = 0.15f;
    this->RemainSprintKeyHoldDuration = 0.00f;
    this->GlideHoldKeyDurationOnJump = 0.20f;
    this->RemainGlideKeyHoldDuration = 0.00f;
    this->bWalkingMode = false;
    this->ActiveWalkingModeTime = 0;
    this->bActiveMetaAI = false;
    this->MetaAIBehaviorStance = ESBMetaAIBehaviorStance::Default;
    this->bArriveMetaAIBehaviorNode = false;
    this->bDisableInteractionFromMetaAI = false;
    this->MetaAIPenetratingMoveFrame = 0;
    this->bMetaAITiredState = false;
    this->bUseCrowdVelocityLerpPower = true;
    this->bJoggingRun = false;
    this->bForceJoggingRun = false;
    this->bWalkingWhenMoving = false;
    this->bForceWalkWhenMoving = false;
    this->bLockOn = false;
    this->bLockOnAtChat = false;
    this->LockOnAtChatPivotMoveDegRange = 0.00f;
    this->LockOnAtChatMoveRange = 0.00f;
    this->bUnlockAtChatInOutRange = false;
    this->JumpStartZ = 0.00f;
    this->JumpingTime = 0.00f;
    this->FallingTime = 0.00f;
    this->bSlopeJumping = false;
    this->SlopeDollyIndex = 0;
    this->bSlopeJumpOut = false;
    this->RequestSlopeOutMaxSpeed = 0.00f;
    this->bSlopeJumpingCustomLanding = false;
    this->SlopeJumpingCustomLandingDeg = 0.00f;
    this->bSwimJumping = false;
    this->bSlideSlipJumping = false;
    this->bSlideSlipFalling = false;
    this->bSideRodFalling = false;
    this->bRodJumping = false;
    this->bSideRodJumping = false;
    this->bDisableSlopeStartMovingDeadZone = false;
    this->bAccelSwimUp = false;
    this->bAccelSwimDown = false;
    this->bInputSwimming = false;
    this->RemainFlyingActionCoolTime = 0.00f;
    this->LockOnCharacter = NULL;
    this->RemainCustomLockOnCameraBlendTime = 0.00f;
    this->CustomLockOnCameraBlendTime = 0.00f;
    this->CustomLockOnCameraBlendMultifly = 1.00f;
    this->CameraLookAtTarget = NULL;
    this->CameraLookAtTargetTime = 0.00f;
    this->AnimLookAtTarget = NULL;
    this->AnimLookAtTargetZOffset = 0.00f;
    this->bUseHeadLookAtTargetPositionValue = false;
    this->HeadLookAtOverrideAlpha = 0.00f;
    this->BodyLookAtOverrideAlpha = 0.00f;
    this->Special1LookAtOverrideAlpha = 0.00f;
    this->Special2LookAtOverrideAlpha = 0.00f;
    this->EyeTrackingTarget = NULL;
    this->bEnableEyePositionUpdate = true;
    this->bFixedBodyLookAtLocation = false;
    this->bSeqDisableDesireRotation = false;
    this->bSeqFinishOnceForceMovement = false;
    this->bSeqFinishOnceStopActiveMovement = false;
    this->SeqFinishOnceMovement = MOVE_None;
    this->bSeqFinishOnceSetPlayerCam = false;
    this->bSeqFinishOnceSetPlayerCamReset = false;
    this->bSeqFinishOnceSetPlayerCamResetPitchBaseAlpha = false;
    this->bSeqFinishOnceSetPlayerCamResetYawReset = false;
    this->bSeqFinishOnceSetPlayerCamResetForceSetBoom = false;
    this->bActiveCharacter = false;
    this->bDisableTickByLastRenderTimeOnScreen = false;
    this->LastCheckOcclusionFrameCount = 0;
    this->OverlapMoveVelocityDelayTime = 0.00f;
    this->bTPSMode = false;
    this->LastTPSModeTime = 0.00f;
    this->bIsActiveTPSAimOffset = false;
    this->TPSModeType = ESBTPSModeType_Default;
    this->TPSDampingWaitTime = 0.00f;
    this->TPSAimSlowDownValue = 0.00f;
    this->bDisableTPSAimSlowDownValue = false;
    this->bTPSFirstTurningTPSLookAt = false;
    this->TPSLookAtPinLocationUpdateFrameCount = 0;
    this->TPSLookAtWorldLocationUpdateFrameCount = 0;
    this->TPSSwitchableTimeFromCameraVolume = 0.00f;
    this->TPSDesiredLookAtFixedLocationTime = 0.00f;
    this->TPSDesiredLookAtFixedLocationCurrentTime = 0.00f;
    this->bTPSZoomIn = false;
    this->TPSCameraSwitchBlendTime = 0.00f;
    this->BulletMagnetCapsuleRadiusScale = 1.00f;
    this->BulletMagnetCapsuleHeightScale = 1.00f;
    this->NikkeMinigameNiagaraParameterCollection = NULL;
    this->bIgnoreTPSBodyRotationWhenSequence = false;
    this->bCameraVolumeOnceEnterImmidiate = false;
    this->GameOptionControllerCameraNormalHorizentalScale = 1.00f;
    this->GameOptionControllerCameraNormalVerticalScale = 1.00f;
    this->GameOptionControllerCameraTPSHorizentalScale = 1.00f;
    this->GameOptionControllerCameraTPSVerticalScale = 1.00f;
    this->GameOptionControllerCameraHorizentalInvert = false;
    this->GameOptionControllerCameraVerticalInvert = false;
    this->GameOptionMouseCameraNormalHorizentalScale = 1.00f;
    this->GameOptionMouseCameraNormalVerticalScale = 1.00f;
    this->GameOptionMouseCameraTPSHorizentalScale = 1.00f;
    this->GameOptionMouseCameraTPSVerticalScale = 1.00f;
    this->GameOptionMouseCameraHorizentalInvert = false;
    this->GameOptionMouseCameraVerticalInvert = false;
    this->StartTurningBlockTime = 0.00f;
    this->FishingModeType = ESBFishingModeType_None;
    this->FishingCastingDistanceCurve = NULL;
    this->RemainFishingReelTime = 0.00f;
    this->bFishingReel = false;
    this->bNeedFishingForceTurn = false;
    this->bEnableSimpleFishing = false;
    this->FishingLookAtTarget = NULL;
    this->PoseSnapshotDataPtr = NULL;
    this->PonytailSnapshotDataPtr = NULL;
    this->HairSnapshotDataPtr = NULL;
    this->TachyWingSnapshotDataPtr = NULL;
    this->SelfiePoseDataPtr = NULL;
    this->DisableLookAtCount[0] = 0;
    this->DisableLookAtCount[1] = 0;
    this->DisableLookAtCount[2] = 0;
    this->DisableLookAtCount[3] = 0;
    this->DisableTPSAimIKCount = 0;
    this->EyeForwardAxis = EAxis::None;
    this->EyeForwardAxisInverse = false;
    this->EyeRightAxis = EAxis::None;
    this->EyeRightAxisInverse = false;
    this->EyeBetweenDistance = 0.00f;
    this->EyeAngleHorizontal = 0.00f;
    this->EyeAngleVertical = 0.00f;
    this->bActiveWeakPointCollision = false;
    this->bNotTPSAutoTargeted = false;
    this->bNotTPSMagnet = false;
    this->MoveTracker = NULL;
    this->MoveTracker2 = NULL;
    this->EnableMovementChecker = false;
    this->ClimbAttachedComponent = NULL;
    this->bMovingTarget = false;
    this->bMovingTargetChangeState = false;
    this->bLocalMovingTarget = false;
    this->bIgnoreMoveingTargetUpdateTransfrom = false;
    this->bIgnoreMovingTargetPathLeave = false;
    this->bMovingTargetLinearInterpol = false;
    this->MovingTargetDuration = 0.00f;
    this->MovingTargetDelayDuration = 0.00f;
    this->MovingTargetRotDelayDuration = 0.00f;
    this->MovingTargetAnimStopAtMoveInput = false;
    this->bEventMoveDnamicTarget = false;
    this->CurrentMovingTargetTime = 0.00f;
    this->CurrentRotTargetTime = 0.00f;
    this->MovingTargetDirectionCustomDuration = 0.00f;
    this->bRotationLinearInterp = false;
    this->MovingTargetRotationDirType = 0;
    this->bMovingTargetEndPlayAnim = false;
    this->bDisableActorCollisionToMovingTarget = false;
    this->MovingTargetEndAnimBlendInTime = 0.00f;
    this->MovingTargetEndAnimBlendOutTime = 0.00f;
    this->MovingTargetEndAnimTime = 0.00f;
    this->MovingTargetEndAnimBlockInputDuration = 0.00f;
    this->MovingTargetAfterBlockInputDuration = 0.00f;
    this->MovingTargetCameraInterpolTime = 0.00f;
    this->MovingTargetCustomAnimBlendTime = 0.00f;
    this->MovingTargetCustomAnimDuration = 0.00f;
    this->bSetMovingTargetCustomAnimTransitID = false;
    this->MovingTargetCustomAnimTransitID = ESBCharTransitAnim_RunToIdle_L;
    this->bMoveingTargetRefreshMovemodeAtEndMove = false;
    this->bChangeMovingState = false;
    this->bLastMoveingState = false;
    this->LastMoveType = ESBCharacterMoveType_None;
    this->MoveAnimSpeedInterpolAfterAction = 3.00f;
    this->RemainMoveAnimSpeedInterpolAfterAction = 0.00f;
    this->RemainChangeIdleMoveTime = 0.00f;
    this->ChangeIdleMoveVelocity = 0.00f;
    this->RemainTurnMoveTime = 0.00f;
    this->SlopeLandingMoveTime = 0.00f;
    this->RemainSlopeLandingMoveTime = 0.00f;
    this->RemainBlockTurnTime = 0.00f;
    this->RemainBlockHuddleUpTime = 0.00f;
    this->TurnMoveVelocity = 0.00f;
    this->RemainMotionMoveDuration = 0.00f;
    this->bEnableMotionMove = false;
    this->bUseMotionMoveOnlyVelocityChange = false;
    this->MotionMoveDuration = 1.00f;
    this->bWallRun = false;
    this->CurrentWallRunTime = 0.00f;
    this->bUseWallRunYawControl = false;
    this->SprintTurnMoveVelocity = -120.00f;
    this->SprintTurnMoveTime = 0.60f;
    this->RunTurnMoveVelocity = 150.00f;
    this->RunTurnMoveTime = 0.50f;
    this->WalkTurnMoveVelocity = 100.00f;
    this->WalkTurnMoveTime = 0.50f;
    this->IdleTurnMoveVelocity = 150.00f;
    this->IdleTurnMoveTime = 0.50f;
    this->bLockOnMoveSideNormal = false;
    this->bEnableDoubleJump = false;
    this->CurrentLockOnCameraInputX = 0.00f;
    this->CurrentLockOnCameraInputY = 0.00f;
    this->CurrentLockOnCameraInputMouseX = 0.00f;
    this->CurrentLockOnCameraInputMouseY = 0.00f;
    this->RemainBlockLockOnMoveTargetDuration = 0.00f;
    this->bVisibleSwordTrail = false;
    this->GravityZScaleWhenActiveSkill = 0.00f;
    this->UnavailableLockOn = 0;
    this->LockOnSprintStartPlayIndex = 0;
    this->MeshInfoList.AddDefaulted(16);
    this->BoneBlendType = BoneBlendType_0;
    this->bBlockChangeMesh = false;
    this->CustomPoseSnapBlendWeight = 0.00f;
    this->bIgnoreCharacterCollision = false;
    this->bDisableLocationFromOverlapCollision = false;
    this->bNoSweepOverlapCollisionWhenZeroVelocity = false;
    this->RuleMoveAdditiveZFromProjectPointToNavigation = 0.00f;
    this->AcceptanceRadius = 60.00f;
    this->bUseFlyPathWayForAnimGraphSpeed = false;
    this->MoveBackByTargetOverlap = 0;
    this->MoveBackByTargetOverlapNextFrameMinusValue = 0;
    this->JumpLock = 0;
    this->bBlockJumpAction = false;
    this->BlockJumpActionFrameCount = 0;
    this->SprintLock = 0;
    this->MouseLock = 0;
    this->DisableCollisionOverlapMoving = 0;
    this->bFallingToLowDiff = false;
    this->bFallingToLowDiffPlayAnim = false;
    this->OverrideBlendSpaceUpperOnlyCount = 0;
    this->OverrideBlendSpaceCount = 0;
    this->bOverriddenBlendSpacePlayerActive = false;
    this->IgnoreRenderControl = false;
    this->bUseOptimizationDisableTick = true;
    this->bSimpleCharacter = false;
    this->bUseOptimizationharacterMinLOD1 = true;
    this->bIgnoreOcclusion = false;
    this->bRenderControl = false;
    this->bBlockingWhenOverlapMoving = false;
    this->bCheckRuleMoveWallHitPossible = false;
    this->VehicleActor = NULL;
    this->bVehicleTargetActorControlRotation = false;
    this->bBlockSimulatePhysicsFromVehicleTransform = false;
    this->bLockupSimulatePhysics = false;
    this->bDisableFootIKWhenRideOnVehicle = false;
    this->bVehicleActorPhotoModeDiffLocation = false;
    this->KeepAllBodiesPhysicsPositionFrame = 0;
    this->KeepAllBodiesPhysicsPositionZeroBlendWeightFrame = 0;
    this->bBattleState = false;
    this->bImpossibleAutoLockOn = false;
    this->bOnAutoLockOnPhase = false;
    this->bAutoLockOnAtAfterTPS = false;
    this->BlockMovementFlags = 0;
    this->bPressedTrainingRoomTrigger = false;
    this->DroneLocationInfoData = NULL;
    this->bUseMoveConstraint = false;
    this->bMoveConstraintDirXYOnly = false;
    this->MoveConstraintForwardFactor = NULL;
    this->MoveConstraintRightFactor = NULL;
    this->MoveConstraintDirectionType = ESBCameraVoumeMoveConstraintDirectionType_NotControl;
    this->MoveConstraintRightDotCalcuate = false;
    this->MoveConstraintEveryUpdate = false;
    this->bUseJumpConstraint = false;
    this->JumpConstraintMaxJump = 500.00f;
    this->JumpConstraintMaxXY = 1000.00f;
    this->JumpConstraintUnlockJumpFromSplineProgress = 0.00f;
    this->bUsePhysicsConstraint = false;
    this->bIgnoreImpartBaseVelocityX = false;
    this->bIgnoreImpartBaseVelocityY = false;
    this->bIgnoreImpartBaseVelocityZ = false;
    this->bOrigImpartBaseVelocityX = false;
    this->bOrigImpartBaseVelocityY = false;
    this->bOrigImpartBaseVelocityZ = false;
    this->PriorityWhenSameWeightOverlap = 0;
    this->ActiveSaveGameComponet = NULL;
    this->AlwaysTickDistance = 0.00f;
    this->CharacterBindingIdleBlendSpace = NULL;
    this->CharacterBindingPhysicsAsset = NULL;
    this->BodyMeshOriginPhysicsAsset = NULL;
    this->ParticleSet = NULL;
    this->CharacterParticleScale = 1.00f;
    this->SoundSetHardRef = NULL;
    this->FactorSet = NULL;
    this->FactorSetComponent = CreateDefaultSubobject<USBCharacterFactorSetComponent>(TEXT("FactorSetComponent"));
    this->FootStepSet = NULL;
    this->FootStepSetOverride = NULL;
    this->DialogBoundsSet = NULL;
    this->bHidePonyTail = false;
    this->RuleMoveBlockAreaRadius = 0.00f;
    this->RuleMoveBlockAreaZHeight = 0.00f;
    this->RuleMoveBlockTargetCheckRadius = 0.00f;
    this->DisableRuleMoveBlockArea = 0;
    this->DisableRuleMove = 0;
    this->DisableRuleMoveRotation = 0;
    this->DisableHuddleUpAction = 0;
    this->DisableEventMove = 0;
    this->bInvalidRuleMoveTarget = false;
    this->bExcludingRuleMoveIgnoreTarget = false;
    this->bDisableMoveCollisionOverlap = false;
    this->bDisableControllerInput = false;
    this->bIgnoreAttachedSequenceOverlabContrl = false;
    this->bNoScan = false;
    this->bScanIgnoreBusy = false;
    this->ScanRegistered = false;
    this->bScanTargeted = false;
    this->LandingDamageHeight = 0.00f;
    this->LandedTime = 0.00f;
    this->bCharacterHiddenInGame = false;
    this->bOriginCharacterHiddenInGame = false;
    this->bLockCharacterHiddenInGame = false;
    this->bCharacterHiddenInGameUntilEvent = false;
    this->bCharacterHiddenInActorStudio = false;
    this->bCompletedCreateCharacter = false;
    this->bAlwaysActorTickWhenHidden = false;
    this->RecreatePhysicsStateTime = 0.00f;
    this->RecordPhysXTaskCount = 0;
    this->FloorCheckCollisionObjectType = ECC_WorldStatic;
    this->bIgnoreExistFloor = false;
    this->bExistFloor = false;
    this->bForceFoldWeapon = false;
    this->bForceFoldWeaponStance = false;
    this->bForceWeaponHide = false;
    this->PauseRuleMoveGUID = 0;
    this->bIgnoreHiddenInGame = false;
    this->bItemInteractionToggle = false;
    this->bItemInteractionAllow = false;
    this->bGrabPivotChange = false;
    this->bGrabRotateLockChange = false;
    this->bProcessedMoveState = false;
    this->DroneSpotLightComp = NULL;
    this->DroneLocationAddZ = 0.00f;
    this->InteractionOriginComponent = NULL;
    this->InteractionPointComponent = NULL;
    this->QuestMarkerComponent = NULL;
    this->bCharacterFixedLocationOnGround = false;
    this->bCheckCharacterFixedLocationOnGround = false;
    this->RecorverSequenceLookAtIKDelayTime = 0.00f;
    this->bInteractionPauseMetaAI = false;
    this->bActiveLevelSeqLookAtIK = false;
    this->EnableLevelSequenceLookAtIKType = SBLookAtIKType_Special1;
    this->SelectedSystemMenu = 0;
    this->bIgnoreKeepAllBodiesPhysics = false;
    this->bDisableAutoResetPhysics = false;
    this->AutoResetPhyiscsBasedVelocity = 0;
    this->bDisableKeepAllBodiesPhysics = false;
    this->bResetPhysicsWithWeight = false;
    this->bUseAutoKeepAllBodiesPhysics = false;
    this->KeepAllBodiesPhysicsTargetBone = TEXT("Bip001");
    this->KeepAllBodiesPhysicsDist = 100.00f;
    this->bSupportRagdollPoseSnapshot = false;
    this->UnderWaterLinearDamping = 20.00f;
    this->UnderWaterAngularDamping = 20.00f;
    this->bPhysicsForceReInitWhenInitActor = false;
    this->bUnderWater = false;
    this->CharacterObjectState = ESBCharacterObjState_None;
    this->CurrentSBWorldCompositionStreamingBlockingVolume = NULL;
    this->GrabTransitEndBlockMoveDuration = 0.00f;
    this->GrabActiveDist = 0.00f;
    this->GrabActiveYawDiff = 0.00f;
    this->GrabIKAlpha = 0.00f;
    this->CurveGrabIK = NULL;
    this->CurveGrabStartTime = 0.00f;
    this->CurveGrabLength = 0.00f;
    this->LastSetComponentTickInterval = 0.00f;
    this->bPressedInteractionActionInput = false;
    this->bEnableInteractionBlock = false;
    this->InteractionState = ESBInteraction_None;
    this->bRunningInteractionGraph = false;
    this->bEnableInteractionMove = false;
    this->NeedPonytailClothConfigUpdate = 0;
    this->bInitialCurve = false;
    this->JumpToSprintMoveSpeedCurveData = NULL;
    this->SlopeJumpToLandMoveSpeedCurveData = NULL;
    this->SwimToGroundMoveSpeedCurveData = NULL;
    this->JumpToSprintShortMoveSpeedCurveData = NULL;
    this->JumpHighToMoveControlDurationData = NULL;
    this->HistoryResetPhysVelocty.AddDefaulted(1);
    this->HistoryResetPhysDegree.AddDefaulted(1);
    this->CurrentHistoryResetPhysNum = 0;
    this->CurrentMaxHistoryResetPhysNum = 0;
    this->RemainResetPhysics = 0.00f;
    this->bManualResetPhysics = false;
    this->bResetPhyiscsWithControlWeight = false;
    this->LastSwimmingTime = 0.00f;
    this->bNeedInitializeAnimation = false;
    this->bRegisterSequentialTick = false;
    this->SequenceAnimImmidateUpdateCount = 0;
    this->bDisableKawaiiPhysicsResetWhenAttachedToLevelSeq = false;
    this->KawaiiPhysicsResetTargetAlpha = 0.00f;
    this->bUseSliceSkeletalMesh = false;
    this->SliceSkeletalMeshDataAsset = NULL;
    this->SliceSkeletalMeshTemplateDataAsset = NULL;
    this->bForceMipLevelsToBeResidentWhenSequencer = false;
    this->SignificanceManagerOptimizationScale = 1.00f;
    this->CameraBoom->SetupAttachment(RootComponent);
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void ASBCharacter::WeaponForceHide(bool bHide) {
}

void ASBCharacter::UpdateEyePosition(bool inReset) {
}

void ASBCharacter::StartFlyingAction() {
}

void ASBCharacter::StartClimbing(FHitResult Hit) {
}

void ASBCharacter::SetOverridePonytailClothPhysicsAsset(UPhysicsAsset* inClothPhysicsAsset) {
}

void ASBCharacter::SetOverrideClothPhysicsAsset(const FString& inMeshPath, bool inApplyHair, bool inFromBodyMesh) {
}

void ASBCharacter::SetMoveToTargetLocation(FVector InTargetLocation, FVector InTargetDirection, float InMoveSpeedPerSec, float InMinimumDistToTarget, USceneComponent* pBaseComp, float InAfterBlockMoveInputDuration) {
}

void ASBCharacter::SetMoveInputBlockDuration(float InDuration) {
}

void ASBCharacter::SetMoveInputBlock(bool inMoveBlock) {
}

void ASBCharacter::SetLockupSimulatePhysics(bool inLockupSimulatePhysics) {
}

void ASBCharacter::SetKinematicForShortPonytail(bool bFlag) {
}

void ASBCharacter::SetKeepAllBodiesPhysicsTransform(int32 inKeepFrame) {
}

void ASBCharacter::SetGlobalMaterialScalarParameterValue(FName InParameterName, float InValue) {
}

void ASBCharacter::SetEnableCollision(bool bEnable) {
}

void ASBCharacter::SetDroneSpotLight(USpotLightComponent* inSpotLightComponent) {
}

void ASBCharacter::SetDollyCamMode(bool bFlag) {
}

void ASBCharacter::SetCustomFloat(FName inCustom, float InValue) {
}

void ASBCharacter::SetCustomBool(FName inCustom, bool InValue) {
}

void ASBCharacter::SetClothAdditiveWindDirection(FVector inAdditiveWindDirection) {
}

void ASBCharacter::SetCamOverrideFovMode(float NewFOV, float BlendTime) {
}

void ASBCharacter::SetCameraLagSpeed(float InSpeed) {
}

bool ASBCharacter::SetBlackboardVectorValue(FName InName, FVector InValue) {
    return false;
}

bool ASBCharacter::SetBlackboardIntValue(FName InName, int32 InValue) {
    return false;
}

bool ASBCharacter::SetBlackboardFloatValue(FName InName, float InValue) {
    return false;
}

void ASBCharacter::SetActiveEventMoveIK(bool bInActive, float InBlendTime, float InTargetValue, float InApplyDelayTime, TEnumAsByte<ESBEventMoveIKApplySlot> InApplySlot) {
}

void ASBCharacter::SetActivateFootIK(const FString& CallStack, bool bInActive, float InBlendTime, float InTargetValue, float InApplyDelayTime, bool bInForceApply, float InPriority) {
}

void ASBCharacter::SetActivateFeetIK(bool bInActive) {
}

void ASBCharacter::ServerRequest_SetMoveInfo_Reliable_Implementation(const FSBCharacterMoveInfo& InMoveInfo) {
}

void ASBCharacter::ServerRequest_SetMoveInfo_Implementation(const FSBCharacterMoveInfo& InMoveInfo) {
}

void ASBCharacter::ServerRequest_DoJump_Implementation(bool inbJump, bool inbJumpDir, FVector inJumpDir) {
}

void ASBCharacter::ServerMoveWrapper_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ASBCharacter::ServerMoveWrapper_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ASBCharacter::ServerMoveNoBaseWrapper_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ASBCharacter::ServerMoveNoBaseWrapper_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

float ASBCharacter::RopeSwingPendulumAnglePerAlpha() {
    return 0.0f;
}


void ASBCharacter::RegisterFXSystem(UFXSystemComponent* inFXSystem) {
}

void ASBCharacter::OnToggleClimbCam() {
}

void ASBCharacter::OnRep_BroadcastSpawnInfo() {
}

void ASBCharacter::OnFinishedLevelSequence() {
}

void ASBCharacter::OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBCharacter::OnCollisionOriginEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBCharacter::OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBCharacter::OnCapsuleComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBCharacter::OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBCharacter::OnAIMoveComplete(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}










bool ASBCharacter::IsWireMoving() {
    return false;
}

bool ASBCharacter::IsWallRunJumpScaleOverrided(float& OutValue) {
    return false;
}

bool ASBCharacter::IsWallRunJump() {
    return false;
}

bool ASBCharacter::IsWallRun() {
    return false;
}

bool ASBCharacter::IsWallHitAction() {
    return false;
}

bool ASBCharacter::IsVisibleSwordTrail() {
    return false;
}

bool ASBCharacter::IsValidTachyWingSnapshotDataPath() const {
    return false;
}

bool ASBCharacter::IsValidMoveRightSmoothValue(bool inIgnoreGamePad) {
    return false;
}

bool ASBCharacter::IsValidHairSnapshotDataPath() const {
    return false;
}

bool ASBCharacter::IsUseSlopeMovingCamera() {
    return false;
}

bool ASBCharacter::IsUnderWaterSwimming() {
    return false;
}

bool ASBCharacter::IsTPSMode() {
    return false;
}

bool ASBCharacter::IsSwimJumping() {
    return false;
}

bool ASBCharacter::IsSprintJump() {
    return false;
}

bool ASBCharacter::IsSprint() {
    return false;
}

bool ASBCharacter::IsSlopeMoving() {
    return false;
}

bool ASBCharacter::IsSlopeJumpOut() {
    return false;
}

bool ASBCharacter::IsSlopeJumping() {
    return false;
}

bool ASBCharacter::IsSlideSlipJumping() {
    return false;
}

bool ASBCharacter::IsSlideSlipFalling() {
    return false;
}

bool ASBCharacter::IsSideRodWallless() {
    return false;
}

bool ASBCharacter::IsSideRodJumping() {
    return false;
}

bool ASBCharacter::IsSideRodFalling() {
    return false;
}

bool ASBCharacter::IsShowCharacter() {
    return false;
}

bool ASBCharacter::IsShortPonyTail() {
    return false;
}

bool ASBCharacter::IsRunSpiderNavWay() const {
    return false;
}

bool ASBCharacter::IsRunningSkill() {
    return false;
}

bool ASBCharacter::IsRunningInteraction() {
    return false;
}

bool ASBCharacter::IsRunHuddleUpAction() {
    return false;
}

bool ASBCharacter::IsRun() {
    return false;
}

bool ASBCharacter::IsRopeSwing() {
    return false;
}

bool ASBCharacter::IsRopeMoving() {
    return false;
}

bool ASBCharacter::IsRodJumping() {
    return false;
}

bool ASBCharacter::IsRagdollSimulate(bool isAllBodies) {
    return false;
}

bool ASBCharacter::IsPlayJumpTransitAnim() {
    return false;
}

bool ASBCharacter::IsPlayingRunInteraction() {
    return false;
}

bool ASBCharacter::IsPlayableWhenLevelSequence() {
    return false;
}

bool ASBCharacter::IsPhotoModeFacialAnimationEnabled() {
    return false;
}

bool ASBCharacter::IsPhotoModeDefaultWeaponSnapshot() const {
    return false;
}

bool ASBCharacter::IsPhotoModeDefaultSnapshot() const {
    return false;
}

bool ASBCharacter::IsOverrideBlendSpaceUpper() {
    return false;
}

bool ASBCharacter::IsOverriddenBlendSpacePlayerActive() {
    return false;
}

bool ASBCharacter::IsNeedPlayTurnAnim() {
    return false;
}

bool ASBCharacter::IsMovingTargetOn() {
    return false;
}

bool ASBCharacter::IsMoving() {
    return false;
}

bool ASBCharacter::IsMoveInputBlock() {
    return false;
}

bool ASBCharacter::IsMoveBlockedByWall() {
    return false;
}

bool ASBCharacter::IsMoveBackByTargetOverlap() {
    return false;
}

bool ASBCharacter::IsMotionMoving() {
    return false;
}

bool ASBCharacter::IsMetaAITiredState() {
    return false;
}

bool ASBCharacter::IsLockOn() {
    return false;
}

bool ASBCharacter::IsJumping() {
    return false;
}

bool ASBCharacter::IsJoggingRun() {
    return false;
}

bool ASBCharacter::IsHoldSwimming() {
    return false;
}

bool ASBCharacter::IsHoldBalanceBeam() {
    return false;
}

bool ASBCharacter::IsHidePonyTail() {
    return false;
}

bool ASBCharacter::IsGrabObjectMoving() {
    return false;
}

bool ASBCharacter::IsGlide() {
    return false;
}

bool ASBCharacter::IsFlyingAction() {
    return false;
}

bool ASBCharacter::IsFishingReel() {
    return false;
}

bool ASBCharacter::IsExistFloor() {
    return false;
}

bool ASBCharacter::IsEventMovingSlidingState() {
    return false;
}

bool ASBCharacter::IsEventMoving() {
    return false;
}

bool ASBCharacter::IsEnableKneeIK() {
    return false;
}

bool ASBCharacter::IsDoubleJump() {
    return false;
}

bool ASBCharacter::IsDisableLookAtEye() {
    return false;
}

bool ASBCharacter::IsDisableIdleAdditiveAnim() {
    return false;
}

bool ASBCharacter::IsDisableFootIKWhenRideOnVehicle() {
    return false;
}

bool ASBCharacter::IsCurrentStretchSideRodSearch() {
    return false;
}

bool ASBCharacter::IsClimbing() {
    return false;
}

bool ASBCharacter::IsBlockingMode() {
    return false;
}

bool ASBCharacter::IsbDoWallJump() {
    return false;
}

bool ASBCharacter::IsBattle() {
    return false;
}

bool ASBCharacter::IsAttackParried() {
    return false;
}

bool ASBCharacter::IsAttachedToLevelSequenceWithoutPlayable() {
    return false;
}

bool ASBCharacter::IsAllowLookAtTargetWhenLevelSequence() {
    return false;
}

bool ASBCharacter::IsActiveTPSAimOffset() {
    return false;
}

bool ASBCharacter::IsActiveOverlapMove() {
    return false;
}

bool ASBCharacter::IsActiveFullBodyIK_ByName(const FString& Name) {
    return false;
}

bool ASBCharacter::IsActiveFullBodyIK() {
    return false;
}

bool ASBCharacter::IsActiveFootIK() {
    return false;
}

bool ASBCharacter::IsActiveFeetIK() {
    return false;
}

bool ASBCharacter::IsActiveCustomMovingStanceData() {
    return false;
}

bool ASBCharacter::IsActiveBoneBlend() {
    return false;
}

bool ASBCharacter::IsAccelSwimUp() {
    return false;
}

bool ASBCharacter::IsAccelSwimDown() {
    return false;
}

float ASBCharacter::GetWallSlideSideValue() {
    return 0.0f;
}

FVector ASBCharacter::GetWallRunNormal() {
    return FVector{};
}

FVector ASBCharacter::GetWallRunDir() {
    return FVector{};
}

TEnumAsByte<ESBTPSModeType> ASBCharacter::GetTPSModeType() {
    return ESBTPSModeType_Default;
}

FVector ASBCharacter::GetTPSLookAtWorldLocation(bool inReCheckHitLocation) {
    return FVector{};
}

FVector ASBCharacter::GetTPSLookAtLocalSpaceDirection() {
    return FVector{};
}

FVector2D ASBCharacter::GetTPSLookAtBlendSpaceXY() {
    return FVector2D{};
}

float ASBCharacter::GetSprintSpeedScale() {
    return 0.0f;
}

bool ASBCharacter::GetSequencerAnimMode() {
    return false;
}

float ASBCharacter::GetSelfieAnimBSValue() {
    return 0.0f;
}

float ASBCharacter::GetSBSpeedForAnimGraph() {
    return 0.0f;
}

USBSkeletalMeshComponent* ASBCharacter::GetSBSkeletalMeshComponent(TEnumAsByte<ESBSkelMeshSlot> Slot) {
    return NULL;
}

USBCharacterMovementComponent* ASBCharacter::GetSBMovementComponent() {
    return NULL;
}

FVector ASBCharacter::GetSBCharacterRightVector() {
    return FVector{};
}

float ASBCharacter::GetRunInputDuration() {
    return 0.0f;
}

float ASBCharacter::GetPoseSnapBlendWeight() {
    return 0.0f;
}

FName ASBCharacter::GetPoseName_PhotoMode() const {
    return NAME_None;
}

FName ASBCharacter::GetPonytailMeshName() {
    return NAME_None;
}

UAnimSequence* ASBCharacter::GetPhotoModeFacialAnimation() {
    return NULL;
}

TEnumAsByte<EPhysicalSurface> ASBCharacter::GetOverrideFootStepPhySurface(TEnumAsByte<EPhysicalSurface> inDefaultSurfacee) {
    return SurfaceType_Default;
}

TEnumAsByte<ESBCharacterFootPlacement> ASBCharacter::GetMoveToIdleFootPlace() {
    return ESBCharacter_Foot_None;
}

float ASBCharacter::GetMoveInputDirectionAngle() {
    return 0.0f;
}

TEnumAsByte<ESBCharacterMoveAnimBlendMode> ASBCharacter::GetMoveAnimBlendMode() {
    return SBCharacterMoveAnimBlend_MoveDirection;
}

ESBMetaAIBehaviorStance ASBCharacter::GetMetaAIBehaviorStance() {
    return ESBMetaAIBehaviorStance::Default;
}

ASBCharacter* ASBCharacter::GetLookAtTargetCharacter() {
    return NULL;
}

ASBCharacter* ASBCharacter::GetLockOnTargetCharacter() {
    return NULL;
}

TEnumAsByte<ESBCharacterMoveType> ASBCharacter::GetLastMoveType() {
    return ESBCharacterMoveType_None;
}

float ASBCharacter::GetKneeIKSearchDistanceForwardR() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKSearchDistanceForwardL() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKSearchDistanceBackwardR() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKSearchDistanceBackwardL() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKOffset_RToe() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKOffset_RKnee() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKOffset_LToe() {
    return 0.0f;
}

float ASBCharacter::GetKneeIKOffset_LKnee() {
    return 0.0f;
}

float ASBCharacter::GetKawaiiPhysicsAlpha() {
    return 0.0f;
}

TEnumAsByte<ESBCharaterAdditiveBodyType> ASBCharacter::GetIdleAdditiveAnimType() {
    return AdditiveBody_None;
}

float ASBCharacter::GetIdleAdditiveAnimAlpha() {
    return 0.0f;
}

FHitStopIK ASBCharacter::GetHitStopIKData() const {
    return FHitStopIK{};
}

float ASBCharacter::GetGrabIKAlpha() {
    return 0.0f;
}

FVector ASBCharacter::GetGlobalMaterialVectorParameterValue(FName InParameterName) {
    return FVector{};
}

float ASBCharacter::GetGlobalMaterialScalarParameterValue(FName InParameterName) {
    return 0.0f;
}

float ASBCharacter::GetGamePadRTriggerAxisValue() {
    return 0.0f;
}

float ASBCharacter::GetGamePadLTriggerAxisValue() {
    return 0.0f;
}

float ASBCharacter::GetFullBodyIkActiveHitPointAngle() {
    return 0.0f;
}

FVector ASBCharacter::GetFowardVector(bool bActorFoward) {
    return FVector{};
}

float ASBCharacter::GetFootIKAlphaValue() {
    return 0.0f;
}

float ASBCharacter::GetFishingRodDirection() {
    return 0.0f;
}

TEnumAsByte<ESBFishingModeType> ASBCharacter::GetFishingModeType() {
    return ESBFishingModeType_None;
}

float ASBCharacter::GetFishingLookAtBlendSpaceX() {
    return 0.0f;
}

float ASBCharacter::GetFeetIKTraceScale() {
    return 0.0f;
}

float ASBCharacter::GetFeetIKAlphaValue() {
    return 0.0f;
}

int32 ASBCharacter::GetFacialIdleAnimType() {
    return 0;
}

int32 ASBCharacter::GetFacialAnimType_PhotoMode() const {
    return 0;
}

float ASBCharacter::GetFacialAnimPosition_PhotoMode() const {
    return 0.0f;
}

bool ASBCharacter::GetEyeTrackingToCam() {
    return false;
}

FVector2D ASBCharacter::GetEyePosition2D() {
    return FVector2D{};
}

TEnumAsByte<ESBEventMoveType> ASBCharacter::GetEventMovingType() {
    return SBEventMove_SideToSide;
}

int32 ASBCharacter::GetEventMoveSideValue() {
    return 0;
}

float ASBCharacter::GetEventMoveIKAlphaValue(TEnumAsByte<ESBEventMoveIKApplySlot>& OutApplyEventMoveIK) {
    return 0.0f;
}

float ASBCharacter::GetEventMoveIKActivateTime() {
    return 0.0f;
}

bool ASBCharacter::GetDollyCamMode(bool bFlag) {
    return false;
}

float ASBCharacter::GetCustomPoseSnapBlendWeight() {
    return 0.0f;
}

float ASBCharacter::GetCustomFloat(FName inCustom) {
    return 0.0f;
}

bool ASBCharacter::GetCustomBool(FName inCustom) {
    return false;
}

FVector ASBCharacter::GetCustomBlendSpaceInput() {
    return FVector{};
}

FName ASBCharacter::GetCurrentStanceName() {
    return NAME_None;
}

float ASBCharacter::GetCurrentSideRodSearchDegreeValue() {
    return 0.0f;
}

float ASBCharacter::GetCurrentRotaionPower() {
    return 0.0f;
}

TEnumAsByte<ESBCharacterFootPlacement> ASBCharacter::GetCurrentFootPlace() {
    return ESBCharacter_Foot_None;
}

float ASBCharacter::GetCurrentCustomAnimByMeshSlotAlpha(TEnumAsByte<ESBSkelMeshSlot> InMeshSlotType) {
    return 0.0f;
}

float ASBCharacter::GetCurrentCustomAnimAlpha_Upper(int32 inCustomAnimIndex) {
    return 0.0f;
}

float ASBCharacter::GetCurrentCustomAnimAlpha_Lower(int32 inCustomAnimIndex) {
    return 0.0f;
}

float ASBCharacter::GetCurrentCustomAnimAlpha(int32 inCustomAnimIndex) {
    return 0.0f;
}

float ASBCharacter::GetCurrentCustomAnimAddtiveAlpha_Upper() {
    return 0.0f;
}

float ASBCharacter::GetCurrentCustomAnimAddtiveAlpha() {
    return 0.0f;
}

float ASBCharacter::GetCurrentCameraLagSpeed() {
    return 0.0f;
}

FName ASBCharacter::GetCurrentBulletItemAlias() {
    return NAME_None;
}

float ASBCharacter::GetCamOverrideFovMode() {
    return 0.0f;
}

float ASBCharacter::GetCameraZoom() {
    return 0.0f;
}

TEnumAsByte<ESBBoneBlendType> ASBCharacter::GetBoneBlendType() {
    return BoneBlendType_0;
}

FName ASBCharacter::GetBodyMeshName() {
    return NAME_None;
}

bool ASBCharacter::GetBlackboardValue(FName InName, int32& outIntValue, float& outFloatValue, FVector& outVectorValue) {
    return false;
}

bool ASBCharacter::GetArriveMetaAIBehaviorNode() {
    return false;
}

FVector ASBCharacter::GetAnimLookAtTargetLocation(TEnumAsByte<ESBLookAtIKType> InType, bool bComponentSpace, bool inIgnoreCheckCondition) {
    return FVector{};
}

float ASBCharacter::GetAnimControllerSpringWeight() {
    return 0.0f;
}

float ASBCharacter::GetAnimControllerFullbodyIKFactor() {
    return 0.0f;
}

FVector ASBCharacter::GetActorBottomLocation() {
    return FVector{};
}

void ASBCharacter::ForceAllClothNextUpdateTeleportAndReset() {
}

void ASBCharacter::ExitVehicle() {
}




void ASBCharacter::EnterVehicle(AActor* Vehicle, bool inBlockSimulatePhysicsFromTransform, bool inControlRotation, bool bInDisableFootIKWhenRideOnVehicle) {
}

void ASBCharacter::EndFlyingAction() {
}

void ASBCharacter::DeactiveCustomMovingStanceData() {
}

void ASBCharacter::ClientBroadcast_SetMoveInfo_Reliable_Implementation(const FSBCharacterMoveInfo& InMoveInfo) {
}

void ASBCharacter::ClientBroadcast_SetMoveInfo_Implementation(const FSBCharacterMoveInfo& InMoveInfo) {
}

void ASBCharacter::ClearNeedPlayTurnAnimFlag() {
}

bool ASBCharacter::CheckMoveRightSmoothValue(float inUnderValue, bool inIgnoreGamePad) {
    return false;
}

void ASBCharacter::ChangeAttachTarget(TEnumAsByte<ESBSkelMeshSlot> OwnerSlot, TEnumAsByte<ESBSkelMeshSlot> TargetSlot, FName AttachSocketName, float InBlendTime, float InPriority) {
}

void ASBCharacter::CancelClimbing() {
}

void ASBCharacter::CalcHitEventDirection(FVector ForceOrigin, FVector ForceVelocity) {
}

float ASBCharacter::CalcAnimSpeedByWalkSpeed() {
    return 0.0f;
}

float ASBCharacter::CalcAnimSpeedByRunSpeed() {
    return 0.0f;
}

float ASBCharacter::CalcAnimSpeedByClimbSpeed() {
    return 0.0f;
}


void ASBCharacter::ApplyKeepAllBodiesPhysicsTransform() {
}

void ASBCharacter::AddCameraZoom(float Value) {
}

void ASBCharacter::ActiveCustomMovingStanceData(const FSBCharMovingStanceData& InData) {
}

void ASBCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBCharacter, BroadcastSpawnInfo);
}


