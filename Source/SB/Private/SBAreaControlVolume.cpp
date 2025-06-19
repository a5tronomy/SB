#include "SBAreaControlVolume.h"
#include "Components/SceneComponent.h"

ASBAreaControlVolume::ASBAreaControlVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockType = SBAreaControlVolumeBlockType_InnerBlock;
    this->SaveType = ESBZoneObjSaveType_None;
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MoveLocationWhenBlockingHitComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MoveLocationWhenBlockingHit"));
}



