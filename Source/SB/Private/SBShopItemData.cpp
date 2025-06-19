#include "SBShopItemData.h"

FSBShopItemData::FSBShopItemData() {
    this->Rarity = ESBItemRarityType_None;
    this->LimitedCount = 0;
    this->RemainCount = 0;
    this->IsDiscount = false;
    this->RedDotState = ESBUIRedDotState_None;
    this->bAddedByFriendShipLevelUp = false;
    this->bNeedPlayAddGoods = false;
}

