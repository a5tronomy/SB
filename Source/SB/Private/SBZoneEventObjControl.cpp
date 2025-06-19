#include "SBZoneEventObjControl.h"

FSBZoneEventObjControl::FSBZoneEventObjControl() {
    this->ID = 0;
    this->ObjectType = ESBLevelObjType_None;
    this->Activate = ESBObject_None;
    this->ObjectControlActionType = ESBObjCtrlActionType_None;
    this->bWithStorage = false;
}

