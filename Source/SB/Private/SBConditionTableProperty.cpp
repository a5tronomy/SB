#include "SBConditionTableProperty.h"

FSBConditionTableProperty::FSBConditionTableProperty() {
    this->ID = 0;
    this->ConditionType = ESBConditionType_None;
    this->ConditionEq = ESBEQ_None;
    this->CheckValue = 0;
    this->CheckStatCalcType = ESBConditionCalcuationType_None;
    this->ActorTargetType = ZoneEvent_ActorTargetToPlayer;
    this->GameOptionType = ESBGameOptionType::None;
    this->bUseActorTragetType = false;
}

