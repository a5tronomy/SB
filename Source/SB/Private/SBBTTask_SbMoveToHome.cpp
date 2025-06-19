#include "SBBTTask_SbMoveToHome.h"

USBBTTask_SbMoveToHome::USBBTTask_SbMoveToHome() {
    this->NodeName = TEXT("SB_MoveToHome");
    this->bUseSpawnPath = false;
    this->MoveState = MoveState_None;
    this->bDetectTarget = false;
    this->DetectTargetDelayTime = 0.00f;
    this->FindOP = ESBAIDetectTargetFindOP_Near;
    this->TargetCancel = ESBAIDetectTargetCancel_ZeroHP;
    this->bAlly = false;
    this->bEnemy = false;
    this->bDead = false;
    this->bEncroachmentable = false;
}


