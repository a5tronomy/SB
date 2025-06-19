#include "SBBTTask_SbUseSkill.h"

USBBTTask_SbUseSkill::USBBTTask_SbUseSkill() {
    this->NodeName = TEXT("SB_UseSkill");
    this->bSubTarget = false;
    this->bRageSkill = false;
    this->bUseSkillCommand = false;
    this->bUsePostStep = false;
    this->bAutoTarget = false;
    this->SkillComboType = ESBAISkillComboType::None;
}


