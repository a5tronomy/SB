#include "SBToolDataNode_ZoneData.h"

USBToolDataNode_ZoneData::USBToolDataNode_ZoneData() {
    this->ID = 0;
    this->bOverrideIsolatedAreaWithWorldMap = false;
    this->ZoneType = Zone_Public;
    this->NpcTransitType = ESBZoneObjectTransitType_None;
    this->InitActive = ESBObject_Enable;
    this->EnterZoneEffectTargetType = ZoneEffectTargetType_None;
    this->EnterZoneEffectAtLeaveState = ZoneEffectLeaveState_None;
    this->OverrideEnterZoneFadeInDelayTime = -1.00f;
    this->bRestoreLevelWhenLeave = true;
    this->bSpiritRoom_ChoiceOpenPopup = false;
    this->LevelGraphicsOptionsAlias = TEXT("PS5_Default");
}


