#include "SBZoneTriggerTableProperty.h"

FSBZoneTriggerTableProperty::FSBZoneTriggerTableProperty() {
    this->ID = 0;
    this->InitActivate = ESBObject_None;
    this->TriggerType = ZoneTriggerType_Character;
    this->DoingType = ZoneTrigger_Do_Interaction;
    this->InOutTrigger = false;
    this->InitialDoingCount = 0;
    this->IgnoreDoingCount = false;
    this->ActiveRange = 0.00f;
    this->SaveType = ESBZoneObjSaveType_None;
    this->IgnoreFilter = ESBTriggerFilter_None;
    this->BlockExtraSprintDuration = 0.00f;
}

