#include "SBBTDecorator_SbTimeLimit.h"

USBBTDecorator_SbTimeLimit::USBBTDecorator_SbTimeLimit() {
    this->NodeName = TEXT("SB_TimeLimit");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->TimerName = TEXT("Timer");
    this->LimitTime = 1.00f;
    this->ReactInterval = 1.00f;
}


