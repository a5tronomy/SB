#include "SBSoundActor.h"

ASBSoundActor::ASBSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMuteWhenLoading = false;
    this->bMuteWhenWarp = false;
}


