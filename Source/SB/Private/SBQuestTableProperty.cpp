#include "SBQuestTableProperty.h"

FSBQuestTableProperty::FSBQuestTableProperty() {
    this->ID = 0;
    this->QuestType = ESBQuest_Epic;
    this->QuestUIType = ESBQuestUIType::ShowAll;
    this->RequestType = ESBQuestRequestType::Normal;
    this->DisplayRequestBoardType = ESBDisplayRequestBoardType::BaseBoard;
    this->FailConditionEventType = ESBCondition_EnterZone;
    this->FailConditionResultType = ESBResult_None;
    this->AcquireSubtitleType = ESBSequencerSubtitleType_ShowImmidate;
    this->AcquireSubtitleDuration = 0.00f;
    this->bMaintainNewGamePlus = false;
}

