#include "SBLevelSequenceTheaterReactionTriggerSectionData.h"

FSBLevelSequenceTheaterReactionTriggerSectionData::FSBLevelSequenceTheaterReactionTriggerSectionData() {
    this->DualSenseTriggerData = NULL;
    this->InputKey = SBLevelSequenceTheaterReactionTriggerType_None;
    this->InputPressTime = 0.00f;
    this->bPressMaxStop = false;
    this->ScreenHorizontalAlignment = HAlign_Fill;
    this->ScreenVerticalAlignment = VAlign_Fill;
    this->VisibleProgress = false;
}

