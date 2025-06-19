#include "SBItemPocket.h"

FSBItemPocket::FSBItemPocket() {
    this->BucketType = ESBItemBucketType_None;
    this->OwnerActorGUID = 0;
    this->EventSpawnId = 0;
    this->bFinishSimulatePhysics = false;
    this->Spawned = false;
}

