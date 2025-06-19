#include "SBSkillTreeBase.h"

USBSkillTreeBase::USBSkillTreeBase() {
    this->SkillCategory = NULL;
    this->SkillSlotPanel = NULL;
    this->SkillLinePanel = NULL;
    this->SkillTreeType = ESBUISkillTreeType::ETC;
    this->bLockTree = false;
    this->UnlockAnimationType = ESBSkillTreeUnlockAnimationType::LowerSlotWithLine;
    this->NewGamePlusUnlockAnimationType = ESBSkillTreeUnlockAnimationType::LowerSlotWithLine;
    this->SlotFocusChangedSound = NULL;
}

void USBSkillTreeBase::UnbindToUnlockAnimationFinished() {
}

void USBSkillTreeBase::SetUnlockPresentationProgress(float InValue) {
}

void USBSkillTreeBase::ReadyUnlockAnimationByNewGamePlus() {
}

void USBSkillTreeBase::ReadyUnlockAnimationByAchievement(FName AchievementAlias) {
}

void USBSkillTreeBase::PlayUnlockAnimationByNewGamePlus() {
}

void USBSkillTreeBase::PlayUnlockAnimationByAchievement(FName AchievementAlias) {
}

void USBSkillTreeBase::PlayUnlockAnimation() {
}

UWidget* USBSkillTreeBase::NavigationTreeCustom(EUINavigation InNavigation, USBSkillSlotBase* inSkillSlot, int32 InSubNavigationIndex) {
    return NULL;
}

UWidget* USBSkillTreeBase::NavigationTree(EUINavigation InNavigation) {
    return NULL;
}

USBUserWidget* USBSkillTreeBase::GetSkillCategory() const {
    return NULL;
}

void USBSkillTreeBase::BindToUnlockAnimationFinished(FSBSkillTresUnlockFinishEvent Delegate) {
}


