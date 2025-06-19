#include "SBSaveGameData_ZoneEnvStorage.h"

FSBSaveGameData_ZoneEnvStorage::FSBSaveGameData_ZoneEnvStorage() {
    this->EnvActivate = ESBObject_None;
    this->EnvActiveState = ESBENV_State_None;
    this->SaveType = ESBZoneObjSaveType_None;
    this->CurrentTriggerCount = 0;
}

