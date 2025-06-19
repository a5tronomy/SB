#include "SBZoneEventUIActionTableProperty.h"

FSBZoneEventUIActionTableProperty::FSBZoneEventUIActionTableProperty() {
    this->ID = 0;
    this->UIActionType = ESBEventUIActionType_None;
    this->UILogicType = ESBUILogicType_NONE;
    this->DrawDuration = 0.00f;
    this->EventorType = ZoneEventEventorType_None;
    this->bHUDInputLock = false;
    this->bGameMenuInputLock = false;
}

