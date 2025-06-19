#include "SBZoneVolume.h"

ASBZoneVolume::ASBZoneVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bRestoreLevelWhenLeave = true;
    this->bPersistentChange = false;
    this->bVisibleAfterLoad = true;
    this->bActive = true;
    this->bEnterRequested = false;
    this->bLeaveRequested = false;
}


