#include "SBForceFeedbackEffect.h"

USBForceFeedbackEffect::USBForceFeedbackEffect() {
    this->ChannelDetails.AddDefaulted(1);
    this->Concurrency = NULL;
    this->ConcurrencyPriority = 0;
}


