#include "SBTheaterSelectDataTableProperty.h"

FSBTheaterSelectDataTableProperty::FSBTheaterSelectDataTableProperty() {
    this->ID = 0;
    this->DesignType = ESBTheaterInteractionDesignType_None;
    this->TextVisibleType = ESBConditionResultVisibleType_None;
    this->SelectDataPriority = 0;
    this->bUseInputCancel = false;
    this->QuestSymbolType = ESBQuestSymbolUIType_None;
    this->bForceLock = false;
    this->bDisableRelevantDot = false;
}

