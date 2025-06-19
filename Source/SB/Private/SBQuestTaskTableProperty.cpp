#include "SBQuestTaskTableProperty.h"

FSBQuestTaskTableProperty::FSBQuestTaskTableProperty() {
    this->ID = 0;
    this->MissionType = ESBMission_None;
    this->CustomInt = 0;
    this->CustomInt2 = 0;
    this->CustomFloat = 0.00f;
    this->ConditionCount = 0;
    this->UIType = ESBTaskUI_Default;
    this->DescriptionUIType = ESBQuestTaskDescriptionUIType::Always;
    this->TaskConditionUIType = ESBUITaskConditionDisplayType_ShowChild;
    this->HideHUD = false;
}

