#include "SBEventZoneEventActorControlTableProperty.h"

FSBEventZoneEventActorControlTableProperty::FSBEventZoneEventActorControlTableProperty() {
    this->ID = 0;
    this->ZoneEventActorControlType = ESBEventZoneEventActorControlType_None;
    this->DestructionTime = 0.00f;
    this->bDisableDestruction = false;
}

