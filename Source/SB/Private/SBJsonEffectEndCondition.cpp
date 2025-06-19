#include "SBJsonEffectEndCondition.h"

FSBJsonEffectEndCondition::FSBJsonEffectEndCondition() {
    this->bActive = false;
    this->CheckDelayTime = 0.00f;
    this->IsGround = ConditionCheckType_None;
    this->IsJump = ConditionCheckType_None;
    this->IsSwimming = ConditionCheckType_None;
    this->IsSprint = ConditionCheckType_None;
    this->IsWallHit = ConditionCheckType_None;
    this->IsEventMoving = ConditionCheckType_None;
    this->IsRunPathWay = ConditionCheckType_None;
    this->IsAttachedLevelSeq = ConditionCheckType_None;
    this->IsSlopeMoving = ConditionCheckType_None;
    this->CheckActorStat = ActorStatType_None;
    this->CheckActorStatMaxRatePercent = false;
    this->CheckActorStatCompare = ESBCompare::Equal;
    this->CheckActorStatValue = 0.00f;
    this->bCheckConstructorTargetFilter = false;
    this->bCheckEncroachmentTargetDead = false;
    this->ItemCompare = ESBCompare::Equal;
    this->ItemCount = 0;
    this->ExecChainEffect = false;
}

