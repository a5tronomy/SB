#include "SBUIActionEventSkillTreeUnlock.h"

FSBUIActionEventSkillTreeUnlock::FSBUIActionEventSkillTreeUnlock() {
    this->SkillTreeType = ESBUISkillTreeType::ETC;
    this->ProgressType = ESBSkillTreeUnlockProgressType::None;
    this->UnlockPresentationType = ESBUISkillUnlockPresentationType::None;
}

