#include "SBTickManagedActor.h"

ASBTickManagedActor::ASBTickManagedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickingGroup = TG_PrePhysics;
}


