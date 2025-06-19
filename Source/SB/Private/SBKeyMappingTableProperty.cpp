#include "SBKeyMappingTableProperty.h"

FSBKeyMappingTableProperty::FSBKeyMappingTableProperty() {
    this->ID = 0;
    this->RecommendationStrength = ESBKeyMappingStrengthType::Free;
    this->bAllowCombinationKey = false;
    this->AxisScaleType = ESBKeyMappingAxisScaleType::Positive;
    this->ViewerPriority = 0;
}

