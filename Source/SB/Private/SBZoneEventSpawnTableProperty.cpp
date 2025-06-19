#include "SBZoneEventSpawnTableProperty.h"

FSBZoneEventSpawnTableProperty::FSBZoneEventSpawnTableProperty() {
    this->ID = 0;
    this->InitActivate = ESBObject_None;
    this->SpawnType = ESBSpawn_EnterZone;
    this->SpawnRotationType = ESBSpawnRotationType_None;
    this->SaveType = ESBZoneObjSaveType_None;
    this->SaveSubProperty = ESBSaveSubProperty_None;
    this->bResetZoneKeepObject = false;
    this->KeepObjResetTransformType = ESBZoneResetKeepObjTMType_None;
    this->bKeepObjApplyResetState = false;
    this->bSaveWithBlackBoard = false;
    this->bSpawnToActive = false;
    this->DrawDistance = 0.00f;
    this->bDisableDrawDistanceScale = false;
    this->AlwaysTickDistance = 0.00f;
    this->bKeepSBCharacterWhenActiveAreaControlVolume = false;
    this->bEnableActorTickAtSpawning = false;
    this->GoPathAfterSpawn = false;
    this->RewardSpawnBucketType = ESBItemBucketType_None;
    this->RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->bHidden = false;
    this->bAIGroupLeader = false;
    this->MetaAI_InitThink = ESBMetaAIThink::None;
    this->InteractionRange = 0.00f;
    this->InteractionAngle = 0.00f;
    this->InteractionTargetRange = 0.00f;
    this->InteractionDotUIAngle = 0.00f;
    this->InteractionUpperHeight = 0.00f;
    this->InteractionLowerHeight = 0.00f;
    this->OwnerRotationType = ESBInteractionOwnerRotation_None;
    this->bEnableTransitZone = false;
    this->bEnableTransitZoneByEnemyActor = false;
    this->TransitStayZoneSaveType = StayZoneSaveType_None;
    this->AdjustInteractTargetPosType = ESBAdjustInteractPosType_None;
    this->SpawnRuleType = ESBSpawnRule_Once;
    this->RespawnIntervalTimeMin = 0.00f;
    this->RespawnIntervalTimeMax = 0.00f;
    this->WorldMapDisplayType = ESBUIWorldMapTargetDisplayType_None;
    this->WorldMapOverlapDistance = 0.00f;
    this->OverrideCustomTrackNearDistance = 0.00f;
    this->DontCheckZAxisCustomTrackNear = false;
    this->InteractionRelevantType = ESBInteractRelevantType_None;
    this->bMultiSpawnPoint = false;
    this->bPendingTheaterByNiike = false;
}

