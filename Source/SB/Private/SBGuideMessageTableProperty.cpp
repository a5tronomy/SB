#include "SBGuideMessageTableProperty.h"

FSBGuideMessageTableProperty::FSBGuideMessageTableProperty() {
    this->ID = 0;
    this->Priority = 0;
    this->MessageType = ESBUIGuideMessage_BasicMain;
    this->DisplayTime = 0.00f;
    this->DisplayPositionX = 0.00f;
    this->DisplayType = ESBUIGuideMessageDisplayType_Default;
    this->GuideStartType = ESBGuideStartType_None;
    this->StartValue = 0;
    this->GuideCompleteType = ESBGuideCompleteType_None;
    this->CompleteValue = 0;
    this->CustomBool = false;
    this->Command = SkillCommandState_None;
    this->ActorCondition = ESBActorCondition_None;
    this->FishingMode = ESBFishingModeType_None;
    this->bAffectedByVisibleOption = false;
    this->ForceSlotIndex = 0;
    this->DontShowInNewGamePlus = false;
}

