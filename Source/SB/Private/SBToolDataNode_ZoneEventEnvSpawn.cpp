#include "SBToolDataNode_ZoneEventEnvSpawn.h"

USBToolDataNode_ZoneEventEnvSpawn::USBToolDataNode_ZoneEventEnvSpawn() {
    this->ID = 0;
    this->EnvBlueprint = NULL;
    this->InitActivate = ESBObject_Enable;
    this->InitEnvActiveState = ESBENV_State_None;
    this->bEnableSave = false;
    this->SaveType = ESBZoneObjSaveType_None;
    this->bResetByWarpSafeLocation = false;
    this->ResetFilterType = ESBZoneEnvResetFilterType_None;
    this->InteractionRange = 0.00f;
    this->InteractionUpperHeight = 0.00f;
    this->InteractionLowerHeight = 0.00f;
    this->InteractionAngle = 0.00f;
    this->InteractionDotUIAngle = -1.00f;
    this->InteractionTargetRange = 0.00f;
    this->EventDelayTime = 0.00f;
    this->WorldMapDisplayType = ESBUIWorldMapTargetDisplayType_None;
    this->WorldMapOverlapDistance = 0.00f;
    this->InteractionRelevantType = ESBInteractRelevantType_None;
    this->OverrideCustomTrackNearDistance = 0.00f;
    this->DontCheckZAxisCustomTrackNear = false;
    this->TriggerCount = 0;
    this->SaveMinIntervalByAutoActivateCamp = -1.00f;
    this->bMaintainNewGamePlus = false;
    this->RewardSpawnBucketType = ESBItemBucketType_Zone;
    this->RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->RewardGroupSpawnFormation = NULL;
    this->PuzzleDataType = ESBPuzzleDataType_None;
    this->PuzzleEq = ESBEQ_None;
    this->ScanOverrideStencilValue = ESBCustomDepthStencilValue::None;
    this->OverrideNikkeGoodsDetectDistanceMax = 0.00f;
}


