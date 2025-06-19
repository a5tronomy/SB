#include "SBToolDataNode_ZonePhaseEvent.h"

USBToolDataNode_ZonePhaseEvent::USBToolDataNode_ZonePhaseEvent() {
    this->ID = 0;
    this->PhaseEventType = ESBPhaseEventType_General;
    this->PhaseEventCompleteType = ESBPhaseEventCompleteType_None;
    this->PhaseEventCompleteValue = 0;
    this->PhaseEventDelayTime = 0.00f;
    this->bWithDestory = false;
}


