#include "SBQuestElementNode.h"

USBQuestElementNode::USBQuestElementNode() {
    this->ID = 0;
    this->TitleName_ = FText::FromString(TEXT("<None>"));
    this->QuestDescription_ = FText::FromString(TEXT("<None>"));
    this->QuestType = ESBQuest_Epic;
    this->QuestUIType = ESBQuestUIType::ShowAll;
    this->FailConditionEventType = ESBCondition_EnterZone;
    this->FailConditionResultType = ESBResult_None;
}


