#include "SBShowPlayableActor.h"
#include "Components/SceneComponent.h"
#include "SBSkeletalMeshComponent.h"

ASBShowPlayableActor::ASBShowPlayableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MeshBody = CreateDefaultSubobject<USBSkeletalMeshComponent>(TEXT("Mesh_Body"));
    this->BodyCustomAnimNodeName = TEXT("CustomAnimNode");
    this->MeshBody->SetupAttachment(Root);
}

float ASBShowPlayableActor::GetCurrentCustomAnimAlpha() {
    return 0.0f;
}


