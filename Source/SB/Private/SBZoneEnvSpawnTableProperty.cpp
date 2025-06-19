#include "SBZoneEnvSpawnTableProperty.h"

FSBZoneEnvSpawnTableProperty::FSBZoneEnvSpawnTableProperty() {
    this->ID = 0;
    this->InitActivate = ESBObject_None;
    this->InitEnvActiveState = ESBENV_State_None;
    this->SaveType = ESBZoneObjSaveType_None;
    this->RewardSpawnBucketType = ESBItemBucketType_None;
    this->RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->InteractionRange = 0.00f;
    this->InteractionUpperHeight = 0.00f;
    this->InteractionLowerHeight = 0.00f;
    this->InteractionAngle = 0.00f;
    this->InteractionTargetRange = 0.00f;
    this->InteractionDotUIAngle = 0.00f;
    this->TriggerCount = 0;
    this->PuzzleDataType = ESBPuzzleDataType_None;
    this->PuzzleEq = ESBEQ_None;
    this->bResetByWarpSafeLocation = false;
    this->ResetFilterType = ESBZoneEnvResetFilterType_None;
    this->WorldMapDisplayType = ESBUIWorldMapTargetDisplayType_None;
    this->WorldMapOverlapDistance = 0.00f;
    this->OverrideCustomTrackNearDistance = 0.00f;
    this->DontCheckZAxisCustomTrackNear = false;
    this->InteractionRelevantType = ESBInteractRelevantType_None;
    this->bMaintainNewGamePlus = false;
    this->SaveMinIntervalByAutoActivateCamp = 0.00f;
    this->ScanOverrideStencilValue = ESBCustomDepthStencilValue::None;
    this->OverrideNikkeGoodsDetectDistanceMax = 0.00f;
}

