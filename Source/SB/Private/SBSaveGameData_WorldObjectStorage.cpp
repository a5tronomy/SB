#include "SBSaveGameData_WorldObjectStorage.h"

FSBSaveGameData_WorldObjectStorage::FSBSaveGameData_WorldObjectStorage() {
    this->ObjectType = ESBWorldObjectType_None;
    this->Activate = ESBObject_None;
    this->SaveType = ESBZoneObjSaveType_None;
    this->EffectVolumeDeadCount = 0;
}

