#include "SBAnimNode_LookAtIK.h"

FSBAnimNode_LookAtIK::FSBAnimNode_LookAtIK() {
    this->LookAtIKType = SBLookAtIKType_Head;
    this->bUseRelativeLocation = false;
    this->RotationSpeed = 0.00f;
    this->OverrideRotationSpeed = 0.00f;
    this->OverrideAlpha = 0.00f;
    this->RotationEndSpeed = 0.00f;
    this->BacksideChangeYawOverAngle = 0.00f;
    this->bUseNode = false;
    this->LookAtIKBacksideType = LookAtIKBacksideType_None;
    this->CurrentRotationDegreePerFrame = 0.00f;
    this->PrevChangeYawAngle = 0.00f;
    this->PrevChangePitchAngle = 0.00f;
    this->DeltaTime = 0.00f;
    this->bValidLocation = false;
    this->bEnable = false;
    this->bControlByCode = false;
    this->CurrentAlpha = 0.00f;
}

