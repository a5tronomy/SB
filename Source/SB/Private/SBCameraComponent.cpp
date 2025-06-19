#include "SBCameraComponent.h"
#include "Components/SceneComponent.h"

USBCameraComponent::USBCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleAttachComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ParticleAttach"));
    this->CameraFov = 75.00f;
    this->MaxStampInfosNum = 200;
    this->bManualCameraFovMode = false;
    this->ManualCameraFov = 75.00f;
    this->CurrentStampInfoIndex = 0;
    this->InterpolHistoryDuration = 0.00f;
    this->InterpolHistoryByFrame = 0;
    this->CameraLeftRightControlMinDist = 200.00f;
    this->CameraLeftRightControlMaxDist = 800.00f;
    this->PlayInterpolHistoryDuration = 0.00f;
    this->PlayInterpolHistoryFadeInSec = 0.00f;
    this->PlayInterpolHistoryFadeOutSec = 0.00f;
    this->PlayInterpolHistoryPlaySec = 0.00f;
    this->bPlayInterpolHistory = false;
    this->bPlayInterpolHistoryInfinite = false;
    this->bPlayInterpolHistoryCalcNewTargetDir = false;
    this->CurrentPlayInterpolHistorySec = 0.00f;
    this->DesiredViewLocLengthFromLegacy = 0.00f;
    this->LastDesiredViewMode = 0;
    this->CurrentHistoryFadeValue = 0.00f;
    this->CameraFovOverride = 0.00f;
    this->CameraFovOverrideBlendTime = 0.00f;
    this->CurrentArmLength = 0.00f;
    this->CurrentUpdateArmLengthSpeed = 0.00f;
    this->bNeedUpdateArmLength = false;
    this->CurrentFov = 75.00f;
    this->CameraShakingOverride = 0.00f;
    this->CameraShakingOverrideBlendTime = 0.00f;
    this->CurrentShaking = 0.00f;
    this->CameraRollTargetValue = 0.00f;
    this->CameraRollCurrentValue = 0.00f;
    this->CameraPitchTargetValue = 0.00f;
    this->CameraPitchCurrentValue = 0.00f;
    this->CurrentAspectRatio = 0.00f;
    this->OverrideCameraBlendDuration = 0.00f;
    this->RemainOverrideCameraBlendDuration = 0.00f;
    this->OrientTime = 0.00f;
    this->OrientCurrentTime = 0.00f;
    this->OriginParentComponent = NULL;
    this->LockOnCamBlendScaleCurve = NULL;
    this->PlayerSlopeControlAlphaBlendCurve = NULL;
    this->bCurrentCameraTPSMode = false;
    this->CurrentCameraTPSModeType = ESBTPSModeType_Default;
    this->bCurrentCameraTPSZoomIn = false;
    this->TSPCameraDisableViewTime = 0.00f;
    this->TSPCameraSwitchCurrentBlendTime = 0.00f;
    this->TSPCameraSwitchMaxBlendTime = 0.00f;
    this->bTPSCameraCollisionHit = false;
    this->TPSCameraCollisionHitBlendTime = 0.00f;
    this->TPSCameraCollisionHitCurrentBlendTime = 0.00f;
    this->TPSCameraStopFrameCounter = 0;
    this->CurrentFishingMode = ESBFishingModeType_None;
    this->PrevFishingCameraMode = ESBFishingCameraModeType_Default;
    this->CurrentFishingCameraMode = ESBFishingCameraModeType_Default;
    this->ConfigFishingAimCameraSwitchBlendTime = 0.00f;
    this->FishingCameraSwitchCurrentBlendTime = 0.00f;
    this->bSBPlayerCamera = true;
}


