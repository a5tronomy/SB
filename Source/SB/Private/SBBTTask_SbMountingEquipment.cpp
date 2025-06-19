#include "SBBTTask_SbMountingEquipment.h"

USBBTTask_SbMountingEquipment::USBBTTask_SbMountingEquipment() {
    this->NodeName = TEXT("SB_MountingEquipment");
    this->MoveState = MoveState_None;
    this->MoveToDistanceOfApproach = 100.00f;
}


