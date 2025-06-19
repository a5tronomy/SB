#include "SBToolDataNode_ZoneEventItem.h"

USBToolDataNode_ZoneEventItem::USBToolDataNode_ZoneEventItem() {
    this->ID = 0;
    this->SpawnItemCount = 1;
    this->ControlType = ZoneEvent_Item_Spawn;
    this->SpawnType = ESBSpawn_EnterZone;
    this->SpawnItemBucketType = ESBItemBucketType_World;
    this->bEnableSave = false;
    this->SaveType = ESBZoneObjSaveType_None;
    this->EventorType = ZoneEventEventorType_None;
    this->EventDelayTime = 0.00f;
    this->bUseOverrideAutoInteraction = false;
    this->bAutoInteraction = false;
    this->AutoInteractionDist = 0.00f;
}


