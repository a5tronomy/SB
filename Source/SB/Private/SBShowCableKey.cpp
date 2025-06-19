#include "SBShowCableKey.h"

USBShowCableKey::USBShowCableKey() {
    this->ThrowTime = 0.00f;
    this->bUseThrowTimeCurve = false;
    this->RetrieveStartTime = 0.00f;
    this->RetrieveEndTime = 0.00f;
    this->bUseRetrieveTimeCurve = false;
    this->bUseCurveThrowLocation = false;
    this->bRetrieveWithCableLength = false;
    this->bAttachStart = true;
    this->bAttachEnd = true;
    this->CableLength = 100.00f;
    this->NumSegments = 10;
    this->CableGravityScale = 1.00f;
    this->bEnableStiffness = false;
    this->bEnableCollision = false;
    this->CollisionFriction = 0.20f;
    this->NumSides = 4;
    this->CableWidth = 10.00f;
    this->TileMaterial = 1.00f;
    this->bUseTarget = false;
    this->bFollowTarget = true;
    this->TargetIndex = 0;
}


