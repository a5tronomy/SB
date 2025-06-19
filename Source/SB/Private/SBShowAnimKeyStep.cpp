#include "SBShowAnimKeyStep.h"

FSBShowAnimKeyStep::FSBShowAnimKeyStep() {
    this->bHoldEndTime = false;
    this->bStopAtMove = false;
    this->bStopAtLand = false;
    this->PlayRate = 0.00f;
    this->Priority = 0.00f;
    this->bFixedBodyLookAtLocation = false;
    this->LookAtTargetZOffset = 0.00f;
}

