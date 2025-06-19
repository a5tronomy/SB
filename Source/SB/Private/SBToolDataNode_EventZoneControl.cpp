#include "SBToolDataNode_EventZoneControl.h"

USBToolDataNode_EventZoneControl::USBToolDataNode_EventZoneControl() {
    this->ID = 0;
    this->ControlType = ZoneEvent_ZoneControl_Active;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
}


