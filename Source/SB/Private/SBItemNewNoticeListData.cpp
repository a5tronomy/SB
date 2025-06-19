#include "SBItemNewNoticeListData.h"

FSBItemNewNoticeListData::FSBItemNewNoticeListData() {
    this->ItemCount = 0;
    this->Category = ESBItemCategory_None;
    this->Rarity = ESBItemRarityType_None;
    this->bGet = false;
    this->bNew = false;
    this->ActionFadeOut = false;
    this->RemainShowTime = 0.00f;
    this->MarkForceFadeOut = false;
}

