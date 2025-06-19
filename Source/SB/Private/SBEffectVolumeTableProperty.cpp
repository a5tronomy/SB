#include "SBEffectVolumeTableProperty.h"

FSBEffectVolumeTableProperty::FSBEffectVolumeTableProperty() {
    this->ID = 0;
    this->InitActivate = ESBObject_None;
    this->VolumeType = ESBEffectVolume_None;
    this->ExecuteDeadCount01 = 0;
    this->ExecuteDeadCount02 = 0;
    this->ExecuteDeadCount03 = 0;
    this->ExecuteDeadCount04 = 0;
    this->ResetType = ESBEffectVolumeReset_None;
    this->SaveType = ESBZoneObjSaveType_None;
    this->bUseEveryZone = false;
    this->bUseActiveZoneStorage = false;
}

