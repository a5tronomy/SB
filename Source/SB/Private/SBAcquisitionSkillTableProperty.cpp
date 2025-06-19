#include "SBAcquisitionSkillTableProperty.h"

FSBAcquisitionSkillTableProperty::FSBAcquisitionSkillTableProperty() {
    this->ID = 0;
    this->Type = ESBAcquisitionSkillType_Active;
    this->UsableSlot = ESBSkillSlotType_None;
    this->ConsumeItemAmount = 0;
    this->ConsumeSP = 0;
    this->bExceptReset = false;
    this->OrCheckRequiredAcquisition = false;
    this->VisibleCondition = ESBAcquisitionSkillVisibleCondition::AlwaysShow;
    this->AcquisitionOnCreated = false;
    this->SkillEnergyVisibleType = ESBSkillEnergyVisibleType::Hidden;
    this->SkillImportanceType = ESBSkillImportanceType::Medium;
}

