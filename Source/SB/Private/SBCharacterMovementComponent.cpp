#include "SBCharacterMovementComponent.h"

USBCharacterMovementComponent::USBCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bImpartBaseVelocityX = false;
    this->bImpartBaseVelocityY = false;
    this->bImpartBaseVelocityZ = false;
    this->bImpartBaseAngularVelocity = false;
    this->RemainCheckFallFlagDuration = 0.00f;
    this->bLastCheckFall = false;
    this->bCheckFallAtNoMoveInput = false;
    this->bCustomFlyPathFollowRotation2D = false;
    this->CustomFlyMoveSpeedPow = 0.00f;
    this->bCustomFlyFollowRotationVelocityBase = false;
    this->bCustomFlyMoveDroneMode = true;
    this->MaxClimbingSpeed = 500.00f;
    this->MaxSlopeMoveSpeed = 300.00f;
    this->MaxEventMoveSpeed = 300.00f;
    this->MaxGrabMoveDefaultSpeed = 100.00f;
    this->bEventMoveApplyGravity = false;
    this->ApplyEventMoveGravityMoveTime = 0.00f;
    this->GravitiedAccelSpeedPerSec = 0.00f;
    this->GravitiedMaxEventMoveSpeed = 0.00f;
    this->EventMoveGravityCurrentMoveTime = 0.00f;
    this->CurrentEventMoveRodAngleRadian = 0.00f;
    this->EventMoveRodArmLength = 0.00f;
    this->EventMoveRodVelocity = 0.00f;
    this->bBeginEventMoveRodAccel = false;
    this->EventMoveRodAccelInput = 0.00f;
    this->LastSideRodMoveDir = 0;
    this->LastSideRodMoveAnimIndex = 0;
    this->MaxWallRunSpeed = 800.00f;
    this->MaxFlyingActionSpeed = 1000.00f;
    this->FlyingActionSideMoveAttenuation = 0.01f;
    this->FlyingActionVerticalMoveAttenuation = 0.50f;
    this->ChangeTargetFowardSensitive = 0.03f;
    this->bApplyCustomBuoyancyScaleAtFirstWaterTouch = false;
    this->RemainBlockChangeSwimState = 0.00f;
    this->bFirstSwimStart = false;
    this->RemainPenetrationDuration = 0.00f;
    this->HoldPenetrationDuration = 0.45f;
    this->HoldPenetrationSpeedPerSec = 150.00f;
    this->SwimUpDownTargetDepth = 0.00f;
    this->RemainCustomYawRateDuration = 0.00f;
    this->CustomYawRate = 0.00f;
    this->MaxRunSpeedOverride = 500.00f;
    this->MaxWalkSpeedOverride = 150.00f;
    this->MaxWalkSpeedLimit = 0.00f;
    this->MaxGuardRunSpeed = 150.00f;
    this->MaxLockOnRunSpeed = 500.00f;
    this->MaxLockOnWalkSpeed = 150.00f;
    this->MaxJoggingRunSpeed = 300.00f;
    this->SprintBurstSpeedScale = 1.00f;
    this->SprintBurstDuration = 0.00f;
    this->RemainSprintBurstDuration = 0.00f;
    this->FallSlideControl = 1.00f;
    this->SprintSpeedScale = 1.40f;
    this->ExtraSprintSpeedScale = 1.50f;
    this->LockOnSprintSpeedScale = 2.50f;
    this->SprintJumpScale = 1.00f;
    this->NormalJumpScale = 1.00f;
    this->DoubleJumpScale = 0.90f;
    this->GlideGravityScale = 0.10f;
    this->FlyingActionGravityScale = 0.07f;
    this->WallRunGravityScale = 0.04f;
    this->GlideAirControlScale = 1.00f;
    this->bDisablePerchRadius = false;
    this->bSliding = false;
    this->SlidingValueDirBetweenVelocity = 0;
    this->MoveStruggleAnimAlpha = 0.00f;
    this->bActiveMoveStruggleAnim = false;
    this->DisableMoveStruggleCount = 0;
    this->MoveSpeedScaleOnSliding = 1.00f;
    this->SlidingFriction = 1.00f;
    this->BackupMaxStepHeight = 0.00f;
    this->bSlidingSlip = false;
    this->RemainSlidingSlipCollisionNormal = 0.00f;
    this->CameraDownBoundBasedPhysicMat = 0.00f;
    this->RemainSlidingSlipAccelControlDuration = 0.00f;
    this->SlidingSlipCurrentDuration = 0.00f;
    this->RemainMaxSpeedToWalkDuration = 0.00f;
    this->RemainHoldSlidingSlipDuration = 0.00f;
    this->bCompleteHoldSlidingSlip = false;
    this->bFixedSlidingSlipDir = false;
    this->bSwiming = false;
    this->bDive = false;
    this->bTransitSwimBeetweenDive = false;
    this->CurrentSwimDepthValue = 0.00f;
    this->MaxOverrideCustomMovementSpeed = 0.00f;
    this->RemainCustomMoveScaleCurveDuration = 0.00f;
    this->CustomMoveScaleCurveDuration = 0.00f;
    this->RemainSwimAccelerationControlDuration = 0.00f;
    this->RemainHoldCurrentSprintVelocity = 0.00f;
    this->AdditiveWalkSpeedScale = 0.00f;
    this->bDisableGravity = false;
    this->CustomMoveScaleCurve = NULL;
    this->WallRunGravityCurve = NULL;
    this->JumpFallingGravityCurve = NULL;
    this->bUseJumpFallingGravityCurve = false;
    this->JumpFallingTime = 0.00f;
    this->RodDampingCurveFromAngleRadian = NULL;
    this->FallToMoveCurve = NULL;
    this->bUseFallToMoveCurve = false;
    this->ComputeFloorSweepRadiusRate = 1.00f;
    this->bDisableRotationScaleOnPathWay = true;
    this->bUseRotationScaleByAngle = true;
    this->RotationMinScaleByMoveAngle = 0.70f;
    this->bUseRotationScaleByMinMaxAngle = false;
    this->RotationMinScaleByMinMaxAngle = 0.00f;
    this->RotationMaxScaleByMinMaxAngle = 0.00f;
    this->RotationMinAngleMinMaxAngle = 0.00f;
    this->RotationMaxAngleByMinMaxAngle = 0.00f;
    this->bUseRotationScaleByVelocity = false;
    this->RotationMinScaleByVelocity = 0.00f;
    this->RotationMaxScaleByVelocity = 0.00f;
    this->RotationMinVelocityByVelocity = 0.00f;
    this->RotationMaxVelocityByVelocity = 0.00f;
    this->bUseRotationScaleByDistance = false;
    this->RotationMinScaleByDistance = 0.00f;
    this->RotationMaxScaleByDistance = 0.00f;
    this->RotationMinVelocityByDistance = 0.00f;
    this->RotationMaxVelocityByDistance = 0.00f;
    this->bUsScaleRotationOvertime = true;
    this->ScaleRotationStartTimeByOvertime = 0.30f;
    this->ScaleRotationRateByOvertime = 1.50f;
    this->ScaleRotationLimitRateByOvertime = 10.00f;
    this->RotationForceScaleWhenBlocking = 3.00f;
    this->GrabRotationLerpAlphaDefault = 0.03f;
    this->RemainFallToMoveDuration = 0.00f;
    this->FallToMoveSpeedScale = 0.00f;
    this->TargetCharacterRotationPlayTime = 0.00f;
    this->bUnlockSprintRotChange = false;
    this->WallHitBounceDuration = 0.00f;
    this->WallHitBounceStartDelay = 0.00f;
    this->WallHitBounceTime = 0.00f;
    this->bDisableFalling = false;
    this->bDisableSlopeMoving = false;
    this->RequestDisableSlopeMovingDuration = 0.00f;
    this->SlopeMoveMaxSpeedControlDuration = 0.00f;
    this->SlopeMoveMaxSpeedBlendOutDuration = 0.00f;
    this->RemainSlopeMoveMaxSpeedDuration = 0.00f;
    this->ControledSlopeMoveMaxSpeed = 0.00f;
    this->CurrentSlopeMaxMoveSpeed = 0.00f;
    this->bDisableDesiredRotation = false;
    this->bTempDisableForwardVectorJump = false;
    this->LastVelocityXAxis = 0.00f;
    this->LastVelocityYAxis = 0.00f;
    this->AnimGraphGetVelocityXAxis = 0.00f;
    this->AnimGraphGetVelocityYAxis = 0.00f;
    this->bRunningMoveToLocation = false;
    this->bFinishMoveToLocation = true;
    this->MoveToLocationOverrideBrakingDist = 0.00f;
    this->bMoveToLocationWaitFinishCustomAnim = false;
    this->bMoveToLocationUseSpeedAnimGraph = false;
    this->MoveToLocationUseBraking = false;
    this->MoveToLocationFinishBraking = false;
    this->MoveToLocationBrakingInputType = SBMoveInputType_Walk;
    this->MoveToLocationBrakingDistStart = 0.00f;
    this->MoveToLocationBrakingDistEnd = 0.00f;
    this->MoveToLocationUseRotation = false;
    this->MoveToLocationSpeedScale = 0.00f;
    this->MoveToLocationOverrideAnimSpeed = 0.00f;
    this->MoveToLocationLastAnimSpeed = 0.00f;
    this->MoveToLocationEndAnimRetentionRemainTime = -1.00f;
    this->MoveToLocationManualStop = false;
    this->MoveToLocationLastScale = 0.00f;
    this->PreMovementMode = MOVE_None;
    this->PreCustomMovementMode = 0;
    this->RefreshFrameCountIgnoredCollisionActors = 0;
    this->InterpolationTimeAnimAcceleration = 0.00f;
    this->CachedMaxSpeed = 0.00f;
    this->bMoveAreaLimit = false;
    this->bMoveAreaLimitOutLocation = false;
    this->MoveAreaLimitDistance = 0.00f;
    this->FallingToWalkingFrameCount = 0;
    this->BlendVelocityMaxTime = 0.00f;
    this->CurrentBlendVelocityTime = 0.00f;
    this->bOnceSlidingSlipAccelControlTimeZero = false;
    this->bIsEnableParallelTick = false;
}

void USBCharacterMovementComponent::SetControlSlopeMoveSpeed(float InScale, float ControlDuration, float BlendOutDuration) {
}

void USBCharacterMovementComponent::ResetSlidingFlagForBP() {
}

bool USBCharacterMovementComponent::IsWalkSlidingSlip() {
    return false;
}

bool USBCharacterMovementComponent::IsWalkSliding() {
    return false;
}

bool USBCharacterMovementComponent::IsUnderWater(bool inEnableSwim) {
    return false;
}

bool USBCharacterMovementComponent::IsEnableSwim() {
    return false;
}

float USBCharacterMovementComponent::GetVelocityYAxis(float Interpolation) {
    return 0.0f;
}

float USBCharacterMovementComponent::GetVelocityXAxis(float Interpolation) {
    return 0.0f;
}

float USBCharacterMovementComponent::GetVelocity() {
    return 0.0f;
}

int32 USBCharacterMovementComponent::GetSlidingValueDirBetweenVelocity() {
    return 0;
}

FVector USBCharacterMovementComponent::GetSBTargetCharacterForwardVector() {
    return FVector{};
}

float USBCharacterMovementComponent::GetSBMaxJumpHeightWithJumpTime() const {
    return 0.0f;
}

float USBCharacterMovementComponent::GetSBMaxJumpHeight() const {
    return 0.0f;
}

float USBCharacterMovementComponent::GetMoveStruggleAnimAlpha() {
    return 0.0f;
}

FVector USBCharacterMovementComponent::GetCurrentSprintVelocityForward() {
    return FVector{};
}

FVector USBCharacterMovementComponent::GetAnimAcceleration() {
    return FVector{};
}

bool USBCharacterMovementComponent::GetActiveMoveStruggleAnim() {
    return false;
}


