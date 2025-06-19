#include "SBForceFeedbackConcurrency.h"

USBForceFeedbackConcurrency::USBForceFeedbackConcurrency() {
    this->MaxCount = 1;
    this->bLimitToOwner = false;
    this->ResolutionRule = ESBForceFeedbackConcurrencyRule::PreventNew;
}


