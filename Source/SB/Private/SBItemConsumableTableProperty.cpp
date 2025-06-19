#include "SBItemConsumableTableProperty.h"

FSBItemConsumableTableProperty::FSBItemConsumableTableProperty() {
    this->ID = 0;
    this->ConsumeImmidiate = false;
    this->ConsumeCoolTime = 0;
    this->ConsumeEnergyType = SkillEnergyType_None;
    this->ConsumeEnergyAmount = 0.00f;
    this->NotRemoveItem = false;
}

