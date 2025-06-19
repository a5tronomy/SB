#include "SBToolDataNode_ZoneEventActor.h"

USBToolDataNode_ZoneEventActor::USBToolDataNode_ZoneEventActor() {
    this->ID = 0;
    this->bCollisionHitToActor = false;
    this->CollisionActorDistance = 0.00f;
    this->EventInterval = 0.00f;
    this->DestructCountMax = 0;
    this->DestructionTimer = 0.00f;
    this->DespawnDelayTime = -1.00f;
    this->TargetFilterExtentX = 0.00f;
    this->TargetFilterExtentY = 0.00f;
    this->TargetFilterCheckHeight = 0.00f;
    this->ScaleTickDistance = 0.00f;
    this->DestructionEvent_DelayMinTime = 0.00f;
    this->DestructionEvent_DelayMaxTime = 0.00f;
    this->DestructionEvent_RewardBucketType = ESBItemBucketType_World;
    this->DestructionEvent_RewardOverrideSaveType = ESBItemOverrideSaveType_None;
    this->DestructionEvent_RewardRemoveItemWithResetZone = false;
    this->RewardGroupSpawnFormation = NULL;
}


