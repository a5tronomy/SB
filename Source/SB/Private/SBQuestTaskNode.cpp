#include "SBQuestTaskNode.h"

USBQuestTaskNode::USBQuestTaskNode() {
    this->ID = 0;
    this->Description = FText::FromString(TEXT("<None>"));
    this->UIType = ESBTaskUI_HideProgress;
    this->DescriptionUIType = ESBQuestTaskDescriptionUIType::Always;
    this->HideHUD = false;
    this->MissionType = ESBMission_None;
}


