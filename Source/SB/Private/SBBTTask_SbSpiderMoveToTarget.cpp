#include "SBBTTask_SbSpiderMoveToTarget.h"

USBBTTask_SbSpiderMoveToTarget::USBBTTask_SbSpiderMoveToTarget() {
    this->NodeName = TEXT("SB_SpiderMoveToTarget");
    this->MoveState = MoveState_None;
    this->bSubTarget = false;
    this->bCheckUseSkill = false;
    this->DistanceOfApproach = 0.00f;
    this->bBackgroundTask = false;
    this->bCheckBrokenPath = false;
    this->WaitBrokenPathShowTime = 0.00f;
    this->bOnlyTargetInsideInVolume = false;
}


