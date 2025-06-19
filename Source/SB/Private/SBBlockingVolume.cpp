#include "SBBlockingVolume.h"

ASBBlockingVolume::ASBBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyBlock_RuleMove = false;
    this->ControlActive_LaserOwnerActor = NULL;
}


