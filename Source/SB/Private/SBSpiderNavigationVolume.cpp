#include "SBSpiderNavigationVolume.h"

ASBSpiderNavigationVolume::ASBSpiderNavigationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Name = TEXT("None");
    this->bDebug_ShowNormal = false;
    this->bDebug_ShowNeighbors = false;
    this->GridStepSize = 100.00f;
    this->TracerRadius = 10.00f;
    this->BounceNavigationDistance = 3.00f;
    this->TraceDistanceModificator = 1.50f;
    this->ClosePointsFilterModificator = 0.10f;
    this->ConnectionSphereRadiusModificator = 1.90f;
    this->TraceDistanceForEdgesModificator = 1.90f;
    this->EgdeDeviationModificator = 0.15f;
    this->IDAllocator = -1;
    this->NavigationDataAsset = NULL;
}

void ASBSpiderNavigationVolume::SaveGrid() {
}

void ASBSpiderNavigationVolume::OnEndOverlapActor(AActor* Overlapped, AActor* Other) {
}

void ASBSpiderNavigationVolume::OnBeginOverlapActor(AActor* Overlapped, AActor* Other) {
}

void ASBSpiderNavigationVolume::DrawDebugRelations(float InShowDuration) {
}

bool ASBSpiderNavigationVolume::BuildGrid(bool bForceBuild) {
    return false;
}


