#include "SBBTTask_SbMoveToTarget.h"

USBBTTask_SbMoveToTarget::USBBTTask_SbMoveToTarget() {
    this->NodeName = TEXT("SB_MoveToTarget");
    this->MoveState = MoveState_None;
    this->bSubTarget = false;
    this->bCheckUseSkill = false;
    this->bIgnoreDistanceOfApproachWhenBlocking = true;
    this->DistanceOfApproach = 0.00f;
    this->bBackgroundTask = false;
    this->bCheckBrokenPath = false;
    this->WaitBrokenPathShowTime = 0.00f;
    this->KeepZeroSpeedForAnimGraphTime = 0.00f;
}


