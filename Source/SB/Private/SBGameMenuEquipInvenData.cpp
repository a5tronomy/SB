#include "SBGameMenuEquipInvenData.h"

FSBGameMenuEquipInvenData::FSBGameMenuEquipInvenData() {
    this->SlotType = ESBUIEquipSlotType_None;
    this->Rarity = ESBItemRarityType_None;
    this->Equiped = false;
    this->ShowCount = false;
    this->Count = 0;
    this->ChargeCount = 0;
    this->StoreCount = 0;
    this->DataIndex = 0;
    this->EnhanceLevel = 0;
    this->RedDotState = ESBUIRedDotState_None;
    this->OverrideHide = false;
    this->bFavorites = false;
}

