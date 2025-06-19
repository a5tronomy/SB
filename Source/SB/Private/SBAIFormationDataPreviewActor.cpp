#include "SBAIFormationDataPreviewActor.h"
#include "SBAIFormationDataPreviewComponent.h"

ASBAIFormationDataPreviewActor::ASBAIFormationDataPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USBAIFormationDataPreviewComponent>(TEXT("SBAIFormationDataPreviewActor0"));
    this->ActorRootComponent = (USBAIFormationDataPreviewComponent*)RootComponent;
    this->ArrowComponent = NULL;
    this->SpriteComponent = NULL;
}


