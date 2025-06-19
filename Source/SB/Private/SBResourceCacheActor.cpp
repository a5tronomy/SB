#include "SBResourceCacheActor.h"

ASBResourceCacheActor::ASBResourceCacheActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadDistance = 5000.00f;
    this->UnloadDistance = 5000.00f;
}


