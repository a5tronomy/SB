#include "SBShowCamShakeKey.h"

USBShowCamShakeKey::USBShowCamShakeKey() {
    this->CameraShakeObject = NULL;
    this->bUseParams = false;
    this->bUseCameraShakeObject = false;
    this->ShakeInnerRadius = 5000.00f;
    this->ShakeOuterRadius = 10000.00f;
    this->ShakeFallOff = 0.10f;
    this->bOrientShakeTowardsEpicenter = false;
    this->ShakeScale = 1.00f;
    this->ShakeLocTension = 30.00f;
    this->ShakeLocDecreasePerSec = 100.00f;
    this->ShakeDirTension = 10.00f;
    this->ShakeDirDecreasePerSec = 30.00f;
    this->ShakeInterval = 0.03f;
    this->bAdditiveTension = false;
    this->bStopImmediately = false;
    this->PlayTarget = ShowCamShakeTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->bPlayerCharacterOnly = false;
}


