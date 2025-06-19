#include "SBZoneEventTableProperty.h"

FSBZoneEventTableProperty::FSBZoneEventTableProperty() {
    this->ID = 0;
    this->Type = ZoneEvent_Spawn;
    this->EventConditionCheckType = ESBZoneEventConditionCheckType_RunEvent;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->IgnoreEventByPlayerDead = false;
}

