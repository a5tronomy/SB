#include "SBZoneEnvProgressProperty.h"

FSBZoneEnvProgressProperty::FSBZoneEnvProgressProperty() {
    this->bAlwaysUpdateProgress = false;
    this->ProgressMaxValue = 0.00f;
    this->NotifyFireType = ESBEnvProgressNotifyFire_Always;
}

