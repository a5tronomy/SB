#include "SBIndicatorButtonData.h"

FSBIndicatorButtonData::FSBIndicatorButtonData() {
    this->Type = ESBIndicatorButtonType::Default;
    this->IsClickable = false;
    this->ButtonTargetLogicType = ESBUILogicType_NONE;
    this->LockChannel = ESBUIIndicatorLockChannel_None;
    this->HiddenChannel = ESBUIIndicatorHiddenChannel_None;
}

