#include "SBZoneCampTableProperty.h"

FSBZoneCampTableProperty::FSBZoneCampTableProperty() {
    this->ID = 0;
    this->CampType = ESBZoneCampType_None;
    this->OverrideCampDetectDistance_Max = 0.00f;
    this->CampDisplayType = ESBUICampWorldMapDisplayType_None;
    this->WorldMapOverlapDistance = 0.00f;
}

