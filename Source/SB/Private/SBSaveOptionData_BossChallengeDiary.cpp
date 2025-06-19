#include "SBSaveOptionData_BossChallengeDiary.h"

FSBSaveOptionData_BossChallengeDiary::FSBSaveOptionData_BossChallengeDiary() {
    this->bClear = false;
    this->TotalPlayTime = 0.00f;
    this->BossClearDate = 0;
    this->DifficultyType = ESBGameDifficultyType::NormalMode;
    this->BossChallengePresetType = ESBBossChallengePresetType::LastSaveSlot;
    this->bEquipSuitItem = false;
    this->PlayerAccumulatedDamage = 0.00f;
    this->PrefectParryCount = 0;
    this->PerfectDodgeCount = 0;
    this->TachyModePlayCount = 0;
    this->UseBulletCount = 0;
    this->UseGrenadeCategoryItemCount = 0;
    this->UsePositionCategoryItemCount = 0;
}

