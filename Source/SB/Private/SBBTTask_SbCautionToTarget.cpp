#include "SBBTTask_SbCautionToTarget.h"

USBBTTask_SbCautionToTarget::USBBTTask_SbCautionToTarget() {
    this->NodeName = TEXT("SB_CautionToTarget");
    this->SetMoveType = ESBCautionToTargetMoveType::All;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->RunDistance = 0.00f;
    this->bLockOn = false;
    this->bDisableLookAtIKWhenLockOn = false;
    this->WaitCheckTime = 0.00f;
    this->bWaitCheckRandomTime = false;
    this->WaitCheckTimeRandomMinTime = 0.00f;
    this->WaitCheckTimeRandomMaxTime = 0.00f;
    this->WaitRate = 0.00f;
    this->WaitCountByGroup = 0;
    this->PlayShowRateWhenWait = 0.00f;
    this->SideMoveRepeatCount = 0;
    this->SideMoveMinDistance = 0.00f;
    this->SideMoveMaxDistance = 0.00f;
    this->bStayTargetView = false;
}


