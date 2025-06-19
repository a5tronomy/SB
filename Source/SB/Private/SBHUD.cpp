#include "SBHUD.h"

ASBHUD::ASBHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bDrawPlayerState = false;
}


