#include "SBSaveGameData_ZoneContainer.h"

FSBSaveGameData_ZoneContainer::FSBSaveGameData_ZoneContainer() {
    this->bDirty = false;
    this->bZoneReset = false;
    this->ZoneObjectState = ESBObject_None;
}

