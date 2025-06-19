#include "SBSaveGameData_ZoneEventActorStorage.h"

FSBSaveGameData_ZoneEventActorStorage::FSBSaveGameData_ZoneEventActorStorage() {
    this->bEnablePhysics = false;
    this->bDestruction = false;
    this->bActorEnableCollision = false;
    this->RemainDestructCount = 0;
    this->SaveType = ESBZoneObjSaveType_None;
}

