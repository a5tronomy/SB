#include "SBQuestPathNodeActor.h"
#include "Components/SceneComponent.h"

ASBQuestPathNodeActor::ASBQuestPathNodeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SBQuestPathComponent0"));
    this->bActivated = false;
    this->ShouldTouchedPrevNode = false;
    this->NodeIndex = 0;
    this->bSphere = false;
    this->Radius = 1.00f;
    this->NextNode = NULL;
    this->PrevNode = NULL;
    this->TargetPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SBQuestPathTargetPoint0"));
    this->ActorRootComponent = (USceneComponent*)RootComponent;
    this->TargetPoint->SetupAttachment(RootComponent);
}


