#include "SBShopItemTableProperty.h"

FSBShopItemTableProperty::FSBShopItemTableProperty() {
    this->ID = 0;
    this->ShopType = ESBShopType_None;
    this->LimitedCount = 0;
    this->MoneyItemCount1 = 0;
    this->Discount_MoneyItemCount1 = 0;
    this->MoneyItemCount2 = 0;
    this->Discount_MoneyItemCount2 = 0;
    this->MoneyItemCount3 = 0;
    this->Discount_MoneyItemCount3 = 0;
    this->MoneyItemCount4 = 0;
    this->Discount_MoneyItemCount4 = 0;
    this->ForceDirtyRedDot = false;
    this->FriendShip = 0.00f;
}

