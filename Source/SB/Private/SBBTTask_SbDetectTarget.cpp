#include "SBBTTask_SbDetectTarget.h"

USBBTTask_SbDetectTarget::USBBTTask_SbDetectTarget() {
    this->NodeName = TEXT("SB_DetectTarget");
    this->FindOP = ESBAIDetectTargetFindOP_Near;
    this->TargetCancel = ESBAIDetectTargetCancel_ZeroHP;
    this->bAlly = false;
    this->bEnemy = false;
    this->bDead = false;
    this->bComa = false;
    this->bEncroachmentable = false;
    this->bSubTarget = false;
}


