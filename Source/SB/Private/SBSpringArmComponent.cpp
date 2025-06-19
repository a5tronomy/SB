#include "SBSpringArmComponent.h"

USBSpringArmComponent::USBSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraDollyAlpha = 0.50f;
    this->bUseCameraDolly = false;
    this->CameraDollyTrackData = NULL;
    this->CameraDollyPositionSpline = NULL;
    this->CameraDollyPositionSplineExtra.AddDefaulted(12);
    this->CurrentDollyFov = 75.00f;
    this->CurrentArmLength = 0.00f;
    this->CurrentUpdateArmLengthSpeed = 0.00f;
    this->bNeedUpdateArmLength = false;
    this->CurrentCamRotateByCharAccelRatio = 0.00f;
    this->CurrentCamRotateByCharAccelRotAddPer10Degree = 0.00f;
    this->CustomOffsetBlendTime = 0.00f;
    this->bLastUseCharacterControllerRot = false;
    this->RemainBlendCamera = 0.00f;
    this->TotalBlendCameraDuration = 0.00f;
    this->RemainBlockRotateByCharacterAccel = 0.00f;
    this->bEnableCameraLagByCharControl = false;
    this->bEnableCameraRotationLagByCharControl = false;
    this->PostZOffsetCurveByArmLength = NULL;
    this->YawAutoRotateSpeedByDirDiff = NULL;
    this->YawAutoRotateSpeedByDirDiffAtSwim = NULL;
    this->CameraMaxClampAtInteraction = 0.00f;
    this->CurrentCameraMaxClampAtInteraction = 0.00f;
    this->LockOnProbeSize = 27.00f;
    this->CurrentPostZOffset = 0.00f;
    this->CollisionBoundHeightUp = 0.00f;
    this->CollisionBoundHeightDown = 0.00f;
    this->CollisionBoundTypeUp = 0;
    this->CollisionBoundTypeDown = 0;
    this->RemainBlendDollyAlpha = 0.00f;
    this->BlendDollyAlphaDuration = 0.00f;
    this->BlendTargetDollyAlpha = -1.00f;
    this->CurrentDollyMode = -1;
    this->bResetThisFrame = false;
}


