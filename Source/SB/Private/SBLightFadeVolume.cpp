#include "SBLightFadeVolume.h"

ASBLightFadeVolume::ASBLightFadeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
}

void ASBLightFadeVolume::OnEndOverlapActor(AActor* Overlapped, AActor* Other) {
}

void ASBLightFadeVolume::OnBeginOverlapActor(AActor* Overlapped, AActor* Other) {
}


