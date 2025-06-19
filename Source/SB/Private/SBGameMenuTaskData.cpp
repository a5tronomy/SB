#include "SBGameMenuTaskData.h"

FSBGameMenuTaskData::FSBGameMenuTaskData() {
    this->UIType = ESBTaskUI_Default;
    this->DescriptionUIType = ESBQuestTaskDescriptionUIType::Always;
    this->CurrentValue = 0;
    this->CompleteValue = 0;
    this->bComplete = false;
}

