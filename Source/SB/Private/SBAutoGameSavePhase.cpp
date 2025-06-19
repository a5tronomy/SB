#include "SBAutoGameSavePhase.h"

FSBAutoGameSavePhase::FSBAutoGameSavePhase() {
    this->RemainNextPhaseTime = 0.00f;
    this->bDonePreSave = false;
    this->bDoneRealSave = false;
    this->CurrentPhaseTime = 0.00f;
}

