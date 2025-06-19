#include "SBFixedTargetRotationMoveInfo.h"

FSBFixedTargetRotationMoveInfo::FSBFixedTargetRotationMoveInfo() {
    this->bActive = false;
    this->bDoneRotation = false;
    this->StartDelayTime = 0.00f;
    this->CurrentDuration = 0.00f;
    this->CurrentAnimDuration = 0.00f;
    this->DelayTime = 0.00f;
    this->RotatinoRate = 0.00f;
    this->RotationRateScale = 0.00f;
    this->AxisType = ESBFixedRotAxis_None;
    this->ActiveSlotIndex = 0;
    this->bBlockRequestPathMove = false;
    this->AnimBlendInTime = 0.00f;
    this->AnimBlendOutTime = 0.00f;
}

