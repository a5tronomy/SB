#include "SBMultiPlayRuleTableProperty.h"

FSBMultiPlayRuleTableProperty::FSBMultiPlayRuleTableProperty() {
    this->ID = 0;
    this->GameRuleType = GameRuleType_None;
    this->bRandom = false;
    this->RewardItemCount = 0;
    this->RewardBonusRate = 0;
    this->WaitTimeBeforeStarting = 0;
    this->Duration = 0;
    this->WaitTimeBeforeReturn = 0;
    this->RespawnTime = 0;
    this->LifeCount = 0;
    this->ZoneEventFirstTimer1 = 0.00f;
    this->ZoneEventIntervalTimer1 = 0.00f;
    this->ZoneEventFirstTimer2 = 0.00f;
    this->ZoneEventIntervalTimer2 = 0.00f;
    this->ZoneEventFirstTimer3 = 0.00f;
    this->ZoneEventIntervalTimer3 = 0.00f;
}

