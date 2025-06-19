#include "SBEquipStatViewerTableProperty.h"

FSBEquipStatViewerTableProperty::FSBEquipStatViewerTableProperty() {
    this->ID = 0;
    this->StatType = ActorStatType_None;
    this->CalculatedStatType = ESBActorCalculatedStatType_None;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->MaxValueInNewGamePlus = 0.00f;
    this->DisplayMaxValue = false;
    this->DisplayMaxTag = false;
    this->EnhanceCharLevelType = ESBCharacterLevelType_None;
    this->DisplayEnhanceCharLevel = false;
    this->DisplayAlways = false;
    this->DontDisplayUI = false;
    this->DisplayDecimal = false;
}

