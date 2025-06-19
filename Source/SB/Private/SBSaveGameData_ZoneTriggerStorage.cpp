#include "SBSaveGameData_ZoneTriggerStorage.h"

FSBSaveGameData_ZoneTriggerStorage::FSBSaveGameData_ZoneTriggerStorage() {
    this->TriggerActivate = ESBObject_None;
    this->DoingCount = 0;
    this->SaveType = ESBZoneObjSaveType_None;
}

