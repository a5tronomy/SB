#include "SBSignificanceDebugActor.h"
#include "Components/TextRenderComponent.h"

ASBSignificanceDebugActor::ASBSignificanceDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SBSigManDebugTextRender"));
    this->DummyRoot = NULL;
    this->TextRenderComponent = (UTextRenderComponent*)RootComponent;
    this->bNeedUpdate = false;
}


