#include "SBToolDataNode_Condition.h"

USBToolDataNode_Condition::USBToolDataNode_Condition() {
    this->ID = 0;
    this->ConditionType = ESBConditionType_None;
    this->ConditionEq = ESBEQ_None;
    this->CheckValue = 0;
    this->ActorTargetType = ZoneEvent_ActorTargetToEventor;
    this->CheckStatCalcType = ESBConditionCalcuationType_None;
    this->bUseActorTragetType = false;
    this->GameOptionType = ESBGameOptionType::None;
}


