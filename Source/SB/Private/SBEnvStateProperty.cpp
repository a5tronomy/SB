#include "SBEnvStateProperty.h"

FSBEnvStateProperty::FSBEnvStateProperty() {
    this->PlayType_Active = ESBPlayType_Play;
    this->StartTime_Active = 0.00f;
    this->RestoreActiveSequence = false;
    this->PlayType_OutTransit = ESBPlayType_Play;
    this->StartTime_OutTransit = 0.00f;
    this->RestoreTransitSequence = false;
}

