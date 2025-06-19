#include "SBGearStatTableProperty.h"

FSBGearStatTableProperty::FSBGearStatTableProperty() {
    this->ID = 0;
    this->GearStatType = ESBGearStatType_None;
    this->ActorStatType = ActorStatType_None;
    this->StatLevel = 0;
    this->Rarity = ESBItemRarityType_None;
    this->StatValueMin = 0.00f;
    this->StatValueMax = 0.00f;
}

