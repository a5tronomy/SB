#include "SBShowData.h"

USBShowData::USBShowData() {
    this->Version = 0;
    this->Annotation = TEXT("None");
    this->bCutScenePhotoMode = false;
    this->StartTime = 0.00f;
    this->EndTime = 1.00f;
    this->bLoop = false;
    this->LoopCount = 0;
    this->bUseStep = false;
    this->bUseKeyLimitFrame = true;
}


