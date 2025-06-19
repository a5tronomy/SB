#include "SBCharacterAnimMoveInfoTableProperty.h"

FSBCharacterAnimMoveInfoTableProperty::FSBCharacterAnimMoveInfoTableProperty() {
    this->ID = 0;
    this->MovingDistance = 0.00f;
    this->DelayDuration = 0.00f;
    this->MovingDuration = 0.00f;
    this->RotationDelayDuration = 0.00f;
    this->RotationDuration = 0.00f;
    this->LinearInterpRotation = false;
    this->AnimPlayDuration = 0.00f;
    this->AnimBlendTime = 0.00f;
    this->InputBlockDuration = 0.00f;
    this->LinearInterpLocation = false;
    this->bOverrideLinearInterpLocation = false;
    this->RotationDirType = 0;
}

