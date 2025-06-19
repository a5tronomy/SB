#include "SBZonePhaseEventTableProperty.h"

FSBZonePhaseEventTableProperty::FSBZonePhaseEventTableProperty() {
    this->ID = 0;
    this->PhaseEventType = ESBPhaseEventType_General;
    this->PhaseEventCompleteType = ESBPhaseEventCompleteType_None;
    this->PhaseEventCompleteValue = 0;
    this->PhaseEventDelayTime = 0.00f;
    this->bWithDestory = false;
}

