#include "SBSaveGameData_ZoneEnvProgressInfo.h"

FSBSaveGameData_ZoneEnvProgressInfo::FSBSaveGameData_ZoneEnvProgressInfo() {
    this->CurrrentProgressValue = 0.00f;
    this->MaxProgressValue = 0.00f;
    this->TargetSpeed = 0.00f;
    this->SpeedInterpTime = 0.00f;
    this->InterpStartSpeed = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->CurrentInterpTime = 0.00f;
    this->RangeStartProgressValue = 0.00f;
    this->RangeEndProgressValue = 0.00f;
}

