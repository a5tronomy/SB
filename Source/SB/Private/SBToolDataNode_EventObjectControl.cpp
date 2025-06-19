#include "SBToolDataNode_EventObjectControl.h"

USBToolDataNode_EventObjectControl::USBToolDataNode_EventObjectControl() {
    this->ID = 0;
    this->ObjectType = ESBLevelObjType_Env;
    this->Activate = ESBObject_Enable;
    this->ObjectControlActionType = ESBObjCtrlActionType_None;
    this->bWithStorage = false;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
}


