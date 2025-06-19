#include "SBSoundComponent.h"

USBSoundComponent::USBSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMuteWhenLoading = false;
    this->bMuteWhenWarp = false;
}

void USBSoundComponent::SetStopWhenOwnerDestroyed(bool bInStopWhenOwnerDestroyed) {
}








