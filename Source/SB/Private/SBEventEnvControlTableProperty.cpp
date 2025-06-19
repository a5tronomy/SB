#include "SBEventEnvControlTableProperty.h"

FSBEventEnvControlTableProperty::FSBEventEnvControlTableProperty() {
    this->ID = 0;
    this->EnvControlType = ESBZoneEnvCtrlType_None;
    this->Activate = ESBObject_None;
    this->AddProgressValue = 0;
    this->SetStateProgressValue = 0;
    this->ProgressSlotIndex = 0;
    this->ProgressSpeed = 0.00f;
    this->ProgressSpeedInterpTime = 0.00f;
    this->CurrentProgressValue = 0.00f;
    this->StartProgressValue = 0.00f;
    this->EndProgressValue = 0.00f;
}

