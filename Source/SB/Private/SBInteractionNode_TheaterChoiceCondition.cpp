#include "SBInteractionNode_TheaterChoiceCondition.h"

USBInteractionNode_TheaterChoiceCondition::USBInteractionNode_TheaterChoiceCondition() {
    this->ConditionType = ESBConditionType_None;
    this->ConditionEq = ESBEQ_None;
    this->ConditionId = 0;
    this->CheckValue = 0;
    this->CheckStatCalcType = ESBConditionCalcuationType_None;
    this->ActorTargetType = ZoneEvent_ActorTargetToPlayer;
    this->ResultValue = false;
}


