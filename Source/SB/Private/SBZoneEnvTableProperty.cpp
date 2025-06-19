#include "SBZoneEnvTableProperty.h"

FSBZoneEnvTableProperty::FSBZoneEnvTableProperty() {
    this->ID = 0;
    this->EnvType = ESBENV_Switch;
    this->RewardSpawnBucketType = ESBItemBucketType_None;
    this->RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->bUseAutoActivateCamp = false;
    this->TriggerCount = 0;
    this->InteractionRange = 0.00f;
    this->InteractionUpperHeight = 0.00f;
    this->InteractionLowerHeight = 0.00f;
    this->InteractionAngle = 0.00f;
    this->InteractionTargetRange = 0.00f;
    this->InteractionDotUIAngle = 0.00f;
    this->bForceFoldInteraction = false;
    this->CampType = ESBZoneCampType_None;
    this->CampObjectType = ESBZoneCampObjectType_None;
    this->PuzzleDataType = ESBPuzzleDataType_None;
    this->PuzzleEq = ESBEQ_None;
    this->ScanDisplayType = ESBScanDisplayType_None;
    this->NikkeGoodsDetectDistance_Max = 0.00f;
}

