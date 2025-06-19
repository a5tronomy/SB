#include "SBSplineTexture.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ASBSplineTexture::ASBSplineTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FrameCount = 60;
    this->bUseConstantVelocity = false;
    this->TextureRenderTargetFormat = RTF_RGBA16f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineTexture = NULL;
    this->TextureSize = 0;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void ASBSplineTexture::Bake() {
}


