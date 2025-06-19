#include "SBBTTask_SbSpiderMoveToCeiling.h"

USBBTTask_SbSpiderMoveToCeiling::USBBTTask_SbSpiderMoveToCeiling() {
    this->NodeName = TEXT("SB_SpiderMoveToTargetCeiling");
    this->MoveState = MoveState_None;
    this->bSubTarget = false;
    this->bCheckUseSkill = false;
    this->DistanceOfApproach = 0.00f;
    this->bBackgroundTask = false;
    this->bCheckBrokenPath = false;
    this->WaitBrokenPathShowTime = 0.00f;
}


