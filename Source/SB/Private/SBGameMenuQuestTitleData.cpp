#include "SBGameMenuQuestTitleData.h"

FSBGameMenuQuestTitleData::FSBGameMenuQuestTitleData() {
    this->bTracking = false;
    this->QuestType = ESBUIQuestJournalTitleType_Epic;
    this->QuestState = ESBState_NotAcquire;
    this->RedDotState = ESBUIRedDotState_None;
}

