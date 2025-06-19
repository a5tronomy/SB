#include "SBCharacterLevelTableProperty.h"

FSBCharacterLevelTableProperty::FSBCharacterLevelTableProperty() {
    this->LevelType = ESBCharacterLevelType_None;
    this->Level = 0;
    this->Stat1 = ActorStatType_None;
    this->StatValue1 = 0;
    this->Stat2 = ActorStatType_None;
    this->StatValue2 = 0;
    this->RequiredItemAmount1 = 0;
    this->RequiredItemAmount2 = 0;
}

