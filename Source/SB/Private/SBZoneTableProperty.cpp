#include "SBZoneTableProperty.h"

FSBZoneTableProperty::FSBZoneTableProperty() {
    this->ID = 0;
    this->bOverrideIsolatedAreaWithWorldMap = false;
    this->ZoneType = Zone_None;
    this->NpcTransitType = ESBZoneObjectTransitType_None;
    this->InitActive = ESBObject_None;
    this->EnterZoneEffectTargetType = ZoneEffectTargetType_None;
    this->EnterZoneEffectAtLeaveState = ZoneEffectLeaveState_None;
    this->bRestoreLevelWhenLeave = false;
    this->bSpiritRoom_ChoiceOpenPopup = false;
    this->OverrideEnterZoneFadeInDelayTime = 0.00f;
}

