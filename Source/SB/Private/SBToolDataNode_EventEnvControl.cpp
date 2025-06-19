#include "SBToolDataNode_EventEnvControl.h"

USBToolDataNode_EventEnvControl::USBToolDataNode_EventEnvControl() {
    this->ID = 0;
    this->EnvControlType = ESBZoneEnvCtrlType_BaseState;
    this->Activate = ESBObject_None;
    this->AddProgressValue = 0;
    this->SetStateProgressValue = 0;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->ProgressSlotIndex = 0;
    this->ProgressSpeed = 0.00f;
    this->ProgressSpeedInterpTime = 0.00f;
    this->CurrentProgressValue = 0.00f;
    this->StartProgressValue = 0.00f;
    this->EndProgressValue = 0.00f;
}


