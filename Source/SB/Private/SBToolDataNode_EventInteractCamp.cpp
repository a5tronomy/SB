#include "SBToolDataNode_EventInteractCamp.h"

USBToolDataNode_EventInteractCamp::USBToolDataNode_EventInteractCamp() {
    this->ID = 0;
    this->InteractType = ESBInteractCamp_Interact;
    this->bShowResetZoneUI = false;
    this->DoingSaveType = ESBZoneEventInteractSave_Immediate;
}


