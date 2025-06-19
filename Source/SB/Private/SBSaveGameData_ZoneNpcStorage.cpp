#include "SBSaveGameData_ZoneNpcStorage.h"

FSBSaveGameData_ZoneNpcStorage::FSBSaveGameData_ZoneNpcStorage() {
    this->EventSpawnId = 0;
    this->SpawnIndex = 0;
    this->LifeState = 0;
    this->bHiddenGame = false;
    this->bActiveActor = false;
    this->ObjectState = ESBObject_None;
    this->SaveType = ESBZoneObjSaveType_None;
}

