#include "SBQuestTaskTypeTaskCondition.h"

USBQuestTaskTypeTaskCondition::USBQuestTaskTypeTaskCondition() {
    this->MissionType = ESBMission_TaskCondition;
    this->ConditionType = ESBQuestTaskConditonType::CompleteCount;
    this->IntValue = 1;
    this->ShowType = ESBUITaskConditionDisplayType_ShowChild;
}


