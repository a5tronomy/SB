#include "SBShowTrailKey.h"

USBShowTrailKey::USBShowTrailKey() {
    this->PSTemplate = NULL;
    this->WidthScaleMode = ETrailWidthMode_FromCentre;
    this->bAutoDeactiveAnimChanged = true;
    this->bHiddenWhenAttachHidden = false;
    this->Target = MovementTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = true;
    this->TargetEquipment = EquipmentType_Weapon;
}


