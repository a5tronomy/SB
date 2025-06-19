#include "SBSplineCameraActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "SBSplineCameraComponent.h"

ASBSplineCameraActor::ASBSplineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetSpline = CreateDefaultSubobject<USplineComponent>(TEXT("TargetSpline"));
    this->CameraSpline = CreateDefaultSubobject<USBSplineCameraComponent>(TEXT("CameraSpline"));
    this->bUseCameraRotationData = false;
    this->bUseCameraCurrentFocalLength = false;
    this->bUseCameraManualFocusDistance = false;
    this->CameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRoot"));
    this->CurrentProgress = 0.00f;
    this->StartProgress = 0.00f;
    this->EditorViewProgress = 0.00f;
    this->GamePlayDummyHide = true;
    this->PlayerAutoTracking = false;
    this->TargetDummy = CreateDefaultSubobject<USceneComponent>(TEXT("TargetDummy"));
    this->CameraSpline->SetupAttachment(RootComponent);
    this->TargetSpline->SetupAttachment(RootComponent);
}


