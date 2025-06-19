#include "SBToolDataNode_ZoneEvent.h"

USBToolDataNode_ZoneEvent::USBToolDataNode_ZoneEvent() {
    this->ID = 0;
    this->EventType = ZoneEvent_Spawn;
    this->EventConditionCheckType = ESBZoneEventConditionCheckType_RunEvent;
    this->EventDelayTime = 0.00f;
    this->UseRandomDelay = false;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->IgnoreEventByPlayerDead = false;
    this->ReturnValue = 0;
}


