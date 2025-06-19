#include "SBUILogicHUDTPSBulletData.h"

FSBUILogicHUDTPSBulletData::FSBUILogicHUDTPSBulletData() {
    this->bUsableBullet = false;
    this->Index = 0;
    this->GroupIndex = 0;
    this->SubIndex = 0;
    this->Count = 0;
    this->bLock = false;
    this->bCoolTimeChanged = false;
    this->CoolTimeProgress = 0.00f;
    this->bCoolTimeComplete = false;
}

