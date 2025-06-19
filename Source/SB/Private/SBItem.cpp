#include "SBItem.h"

ASBItem::ASBItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequireSpawnCheckLocation = true;
    this->SpawnCheckRadius = 50.00f;
    this->SpawnCheckHeight = 20.00f;
    this->SpawnCheckStartDist = 1000.00f;
    this->SpawnCheckEndDist = 200.00f;
    this->AlwaysInteractionAllow = false;
    this->InteractionAutoXYOnlyCheck = false;
    this->ShowSpawn = NULL;
    this->ShowInteraction = NULL;
    this->bForceActivePhysics = false;
    this->bUsePooling = false;
    this->bUseRequirePhysics = false;
    this->BucketGuid = 0;
    this->InteractionDelayTime = 0.00f;
    this->bFinishSimulatePhysics = false;
    this->bExistFloor = false;
    this->RemainSpawnTime = 0.00f;
    this->bUseSpawnShow = false;
    this->bActionSpawn = false;
    this->bActiveItem = false;
    this->bIgnoreHiddenInGame = false;
    this->ShowInteractionRemainTime = 0.00f;
    this->bGainSimulateForceStop = false;
    this->bActionSimulateForceStop = false;
    this->AutoGainRemainTime = 0.00f;
    this->bUIMode = false;
    this->RemainCheckFinishSimulate = 0.00f;
    this->bIgnoreFinishSimulatePhysics = false;
    this->SkeletalMeshComp = NULL;
    this->StaticMeshComp = NULL;
}

float ASBItem::GetInteractionDelayTime() {
    return 0.0f;
}




