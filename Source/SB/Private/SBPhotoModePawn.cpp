#include "SBPhotoModePawn.h"
#include "Camera/CameraComponent.h"
#include "SBPhotoModePawnMovementComponent.h"

ASBPhotoModePawn::ASBPhotoModePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBPhotoModePawnMovementComponent>(TEXT("MovementComponent0"))) {
    this->bDisableCustomTimeDilation = true;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("SBCameraComponent"));
    this->DOF_VisualizeMID = NULL;
    this->ZoomBlurMID = NULL;
    this->ChromaticAberrationMID = NULL;
    this->HueMID = NULL;
    this->NoLightMID = NULL;
    this->Camera->SetupAttachment(RootComponent);
}


