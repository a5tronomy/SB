#include "SBSoundOcclusionActor.h"
#include "Components/SceneComponent.h"

ASBSoundOcclusionActor::ASBSoundOcclusionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ShapeType = ESBSoundOcclusionActorShapeType::Box;
    this->SphereRadius = 32.00f;
    this->CapsuleRadius = 22.00f;
    this->CapsuleHalfHeight = 44.00f;
    this->CollisionComponent = NULL;
}


