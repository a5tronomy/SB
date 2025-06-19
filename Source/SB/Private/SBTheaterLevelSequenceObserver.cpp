#include "SBTheaterLevelSequenceObserver.h"

USBTheaterLevelSequenceObserver::USBTheaterLevelSequenceObserver() {
    this->RequireRelease = false;
    this->fireNotify = false;
    this->TakeDataUID = 0;
    this->bStopEndFrame = true;
}

void USBTheaterLevelSequenceObserver::OnFinishLevelSequence() {
}


