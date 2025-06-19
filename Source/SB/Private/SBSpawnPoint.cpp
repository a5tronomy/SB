#include "SBSpawnPoint.h"

ASBSpawnPoint::ASBSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FormationData = NULL;
    this->AnimationPreviewTime = 0.00f;
    this->bIsSpawnToWallOrCeiling = false;
}


