#include "SBLevelSequenceEventHUDActionSectionData.h"

FSBLevelSequenceEventHUDActionSectionData::FSBLevelSequenceEventHUDActionSectionData() {
    this->ActionType = ESBLevelSequenceEventHUDActionType_ControlHideUI;
    this->bControlHideUI = false;
    this->bClearVisible = false;
    this->bHUDInputLock = false;
}

