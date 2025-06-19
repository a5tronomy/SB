#include "SBRestorationWorldActor.h"
#include "Components/SceneComponent.h"

ASBRestorationWorldActor::ASBRestorationWorldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ActorSaveType = ESBZoneObjSaveType_Save;
    this->ViewDistance = 0.00f;
    this->bInitSimulatePhys = false;
}


