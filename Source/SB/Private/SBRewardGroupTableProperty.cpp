#include "SBRewardGroupTableProperty.h"

FSBRewardGroupTableProperty::FSBRewardGroupTableProperty() {
    this->ID = 0;
    this->GiveType = ESBRewardGiveType_Drop;
    this->MustAcquisition = false;
    this->ItemCategory = ESBItemCategory_None;
    this->ItemRarity = ESBItemRarityType_None;
    this->DropType = ESBRewardGroupDrop_All;
    this->DropRateRarity = ESBItemRarityType_None;
    this->DropRate = 0;
    this->ItemMinCount = 0;
    this->ItemMaxCount = 0;
    this->StatParentDependency = false;
    this->ItemStatLevelMin = 0;
    this->ItemStatLevelMax = 0;
    this->OverrideInteractionTime = 0;
    this->RewardUIType = ESBRewardUIType::Default;
}

