#include "SBJsonSkillStepEndCondition.h"

FSBJsonSkillStepEndCondition::FSBJsonSkillStepEndCondition() {
    this->bActive = false;
    this->IsGround = ConditionCheckType_None;
    this->IsSwimming = ConditionCheckType_None;
    this->bOverlapTargetFilterRadius = false;
    this->IsRuleMoveActive = ConditionCheckType_None;
    this->IsTargetDead = ConditionCheckType_None;
}

