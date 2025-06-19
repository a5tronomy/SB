#include "SBZoneEventItemTableProperty.h"

FSBZoneEventItemTableProperty::FSBZoneEventItemTableProperty() {
    this->ID = 0;
    this->ControlType = ZoneEvent_Item_Spawn;
    this->SpawnType = ESBSpawn_EnterZone;
    this->SaveType = ESBZoneObjSaveType_None;
    this->EventorType = ZoneEventEventorType_None;
    this->SpawnItemCount = 0;
    this->SpawnItemBucketType = ESBItemBucketType_None;
    this->EventDelayTime = 0.00f;
    this->bUseOverrideAutoInteraction = false;
    this->bAutoInteraction = false;
    this->AutoInteractionDist = 0.00f;
}

