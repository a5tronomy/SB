#include "SBToolDataNode_ZoneEffectVolume.h"

USBToolDataNode_ZoneEffectVolume::USBToolDataNode_ZoneEffectVolume() {
    this->ID = 0;
    this->VolumeType = ESBEffectVolume_Trigger;
    this->InitActivate = ESBObject_Enable;
    this->SaveType = ESBZoneObjSaveType_None;
    this->ResetType = ESBEffectVolumeReset_None;
    this->bUseEveryZone = false;
    this->bUseActiveZoneStorage = false;
    this->ZoneAliasController = NULL;
    this->EffectAliasController = NULL;
}


