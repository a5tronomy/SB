#include "SBOccluderTurnOffVolume.h"

ASBOccluderTurnOffVolume::ASBOccluderTurnOffVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

void ASBOccluderTurnOffVolume::OnEndOverlapActor(AActor* Overlapped, AActor* Other) {
}

void ASBOccluderTurnOffVolume::OnBeginOverlapActor(AActor* Overlapped, AActor* Other) {
}


