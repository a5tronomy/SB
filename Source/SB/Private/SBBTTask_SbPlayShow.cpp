#include "SBBTTask_SbPlayShow.h"

USBBTTask_SbPlayShow::USBBTTask_SbPlayShow() {
    this->NodeName = TEXT("SB_PlayShow");
    this->bDetectTarget = false;
    this->FindOP = ESBAIDetectTargetFindOP_Near;
    this->TargetCancel = ESBAIDetectTargetCancel_ZeroHP;
    this->bAlly = false;
    this->bEnemy = false;
    this->bDead = false;
    this->bEncroachmentable = false;
    this->bWait = false;
}


