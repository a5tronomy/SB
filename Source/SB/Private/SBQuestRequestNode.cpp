#include "SBQuestRequestNode.h"

USBQuestRequestNode::USBQuestRequestNode() {
    this->ID = 0;
    this->title = FText::FromString(TEXT("<None>"));
    this->Description = FText::FromString(TEXT("<None>"));
    this->RequestDescription = FText::FromString(TEXT("<None>"));
    this->Report = FText::FromString(TEXT("<None>"));
    this->RequestType = ESBQuestRequestType::Normal;
    this->UIType = ESBQuestUIType::ShowAll;
    this->DisplayRequestBoardType = ESBDisplayRequestBoardType::BaseBoard;
    this->FailConditionEventType = ESBCondition_EnterZone;
    this->FailConditionResultType = ESBResult_None;
    this->AcquireSound = NULL;
    this->AcquireSubtitleType = ESBSequencerSubtitleType_ShowImmidate;
    this->AcquireSubtitleDuration = 0.00f;
    this->AcquireSubtitleTitle = FText::FromString(TEXT("<None>"));
    this->AcquireSubtitleMessage = FText::FromString(TEXT("<None>"));
    this->bMaintainNewGamePlus = false;
}


