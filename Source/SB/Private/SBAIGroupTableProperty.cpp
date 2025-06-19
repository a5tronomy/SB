#include "SBAIGroupTableProperty.h"

FSBAIGroupTableProperty::FSBAIGroupTableProperty() {
    this->ID = 0;
    this->MinGroupActorCount = 0;
    this->TargetShareCondition = ESBAIGroupTargetShareCondition_Detect;
    this->TargetShareConditionValue = 0.00f;
    this->MaxAttackerCount = 0;
    this->ReattackWaitingTime = 0.00f;
    this->AttackerSelectMethod = ESBAttackerSelectMethod_NearDistance;
    this->ValidProjectileCount = 0;
    this->InvalidProjectileOffsetMinDistance = 0.00f;
    this->InvalidProjectileOffsetMaxDistance = 0.00f;
    this->CautionMinDistance = 0.00f;
    this->CautionMaxDistance = 0.00f;
    this->bUseMetaAIFormation = false;
    this->bImmediatelyBattleAlarm = false;
}

