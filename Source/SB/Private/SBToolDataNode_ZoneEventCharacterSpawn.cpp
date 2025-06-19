#include "SBToolDataNode_ZoneEventCharacterSpawn.h"

USBToolDataNode_ZoneEventCharacterSpawn::USBToolDataNode_ZoneEventCharacterSpawn() {
    this->ID = 0;
    this->InitActivate = ESBObject_Enable;
    this->SpawnType = ESBSpawn_EnterZone;
    this->SpawnRotationType = ESBSpawnRotationType_SpawnPointRot;
    this->bEnableSave = false;
    this->bEnableTransitZone = false;
    this->bEnableTransitZoneByEnemyActor = false;
    this->TransitStayZoneSaveType = StayZoneSaveType_Save;
    this->SaveType = ESBZoneObjSaveType_None;
    this->SaveSubProperty = ESBSaveSubProperty_All;
    this->SpawnRuleType = ESBSpawnRule_Once;
    this->RespawnIntervalTimeMin = 0.00f;
    this->RespawnIntervalTimeMax = 0.00f;
    this->bResetZoneKeepObject = false;
    this->KeepObjResetTransformType = ESBZoneResetKeepObjTMType_None;
    this->bKeepObjApplyResetState = false;
    this->bSaveWithBlackBoard = false;
    this->bSpawnToActive = true;
    this->DrawDistance = 0.00f;
    this->bDisableDrawDistanceScale = false;
    this->AlwaysTickDistance = 0.00f;
    this->bKeepSBCharacterWhenActiveAreaControlVolume = false;
    this->bMultiSpawnPoint = false;
    this->GoPathAfterSpawn = true;
    this->RewardSpawnBucketType = ESBItemBucketType_None;
    this->RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->bHidden = false;
    this->bAIGroupLeader = false;
    this->MetaAI_InitThink = ESBMetaAIThink::None;
    this->InteractionRange = 0.00f;
    this->InteractionAngle = 0.00f;
    this->InteractionTargetRange = 0.00f;
    this->InteractionDotUIAngle = 360.00f;
    this->InteractionUpperHeight = 0.00f;
    this->InteractionLowerHeight = 0.00f;
    this->AdjustInteractTargetPosType = ESBAdjustInteractPosType_None;
    this->OwnerRotationType = ESBInteractionOwnerRotation_None;
    this->EventDelayTime = 0.00f;
    this->bEnableActorTickAtSpawning = false;
    this->bPendingTheaterByNiike = false;
    this->WorldMapDisplayType = ESBUIWorldMapTargetDisplayType_None;
    this->WorldMapOverlapDistance = 0.00f;
    this->InteractionRelevantType = ESBInteractRelevantType_None;
    this->OverrideCustomTrackNearDistance = 0.00f;
    this->DontCheckZAxisCustomTrackNear = false;
}


