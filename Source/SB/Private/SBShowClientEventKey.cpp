#include "SBShowClientEventKey.h"

USBShowClientEventKey::USBShowClientEventKey() {
    this->ClientEvent = ESBShowClientEvent_CompletedMountingEquipment;
    this->EquipmentAttachTime = 0.00f;
    this->bFreeMoveMountingEquipment = false;
    this->FreeMoveMounting_InterpType = InterpType_Liner;
}


