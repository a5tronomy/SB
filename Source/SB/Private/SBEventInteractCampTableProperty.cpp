#include "SBEventInteractCampTableProperty.h"

FSBEventInteractCampTableProperty::FSBEventInteractCampTableProperty() {
    this->ID = 0;
    this->InteractType = ESBInteractCamp_Interact;
    this->bShowResetZoneUI = false;
    this->DoingSaveType = ESBZoneEventInteractSave_None;
}

