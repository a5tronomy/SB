#include "SBToolDataNode_EventUIAction.h"

USBToolDataNode_EventUIAction::USBToolDataNode_EventUIAction() {
    this->ID = 0;
    this->UIActionType = ESBEventUIActionType_None;
    this->UILogicType = ESBUILogicType_NONE;
    this->EventorType = ZoneEventEventorType_Eventor;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->bHUDInputLock = false;
    this->bGameMenuInputLock = false;
    this->TableIndexController = NULL;
}


