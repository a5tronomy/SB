#include "SBUIActionRequestTableProperty.h"

FSBUIActionRequestTableProperty::FSBUIActionRequestTableProperty() {
    this->ID = 0;
    this->Priority = 0;
    this->BlockAction = false;
    this->IgnoreLoadingScreen = false;
    this->AffectedByVisibleOption = false;
    this->DebugClearAllow = false;
    this->SkipInNewGamePlus = false;
    this->ConditionFailPass = false;
    this->ExecuteType = ESBUIActionExecuteType_None;
    this->Time = 0.00f;
    this->Delay = 0.00f;
    this->FinishType = ESBUIActionFinishType_None;
}

