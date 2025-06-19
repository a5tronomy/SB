#include "SBToolDataNode_ZoneTrigger.h"

USBToolDataNode_ZoneTrigger::USBToolDataNode_ZoneTrigger() {
    this->ID = 0;
    this->InitActivate = ESBObject_Enable;
    this->TriggerType = ZoneTriggerType_Character;
    this->InitialDoingCount = 1;
    this->DoingType = ZoneTrigger_Do_Box;
    this->ActiveRange = 0.00f;
    this->bEnableSave = false;
    this->SaveType = ESBZoneObjSaveType_None;
    this->bInOutTrigger = false;
    this->bIgnoreDoingCount = false;
    this->IgnoreFilter = ESBTriggerFilter_None;
    this->BlockExtraSprintDuration = 0.00f;
}


