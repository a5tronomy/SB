#include "SBAchievementTableProperty.h"

FSBAchievementTableProperty::FSBAchievementTableProperty() {
    this->ID = 0;
    this->EventType = ESBAchievementEventType_None;
    this->CategoryType = ESBAchievementCategoryType_None;
    this->CheckParamOr = false;
    this->ParamType1 = ESBAchievementParamType_None;
    this->OpType1 = ESBOperation_EQ;
    this->ParamType2 = ESBAchievementParamType_None;
    this->OpType2 = ESBOperation_EQ;
    this->ParamType3 = ESBAchievementParamType_None;
    this->OpType3 = ESBOperation_EQ;
    this->ParamType4 = ESBAchievementParamType_None;
    this->OpType4 = ESBOperation_EQ;
    this->CompleteValue = 0;
    this->CompleteIncreaseMultiMapLevel = 0;
    this->ProgressAchievementValueOnCompleted = 0;
    this->ProgressAchievementValueOnCompleted2 = 0;
    this->ProgressAchievementArrayValueOnCompleted = 0;
    this->bMaintainNewGamePlus = false;
}

