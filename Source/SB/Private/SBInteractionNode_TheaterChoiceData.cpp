#include "SBInteractionNode_TheaterChoiceData.h"

USBInteractionNode_TheaterChoiceData::USBInteractionNode_TheaterChoiceData() {
    this->TextVisibleType = ESBConditionResultVisibleType_None;
    this->SelectDataPriority = 1;
    this->bForceLock = false;
    this->bDisableRelevantDot = false;
    this->bUseInputCancel = true;
    this->QuestSymbolType = ESBQuestSymbolUIType_None;
    this->DesignType = ESBTheaterInteractionDesignType_Select;
}


