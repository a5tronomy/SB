#include "SBLevelSequenceObserver.h"

USBLevelSequenceObserver::USBLevelSequenceObserver() {
    this->bFinishAutoDestoryActor = false;
    this->fireNotify = false;
}

void USBLevelSequenceObserver::OnFinishLevelSequence() {
}


