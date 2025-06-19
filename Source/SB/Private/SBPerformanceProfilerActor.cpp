#include "SBPerformanceProfilerActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ASBPerformanceProfilerActor::ASBPerformanceProfilerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->CameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->CameraPreviewDistance = 0.00f;
    this->LimitValue = 60.00f;
    this->MoveDistancePerSecond = 150.00f;
    this->bStart = false;
    this->CurrentDistance = 0.00f;
    this->RemainCheckDistance = 0.00f;
    this->bCheckGPU = false;
    this->bCheckLevel = false;
    this->MoveSpeedScale = 1.00f;
    this->ViewTargetActor = NULL;
    this->RecordCount = 0;
    this->LockCameraDistance = 0.00f;
    this->MaxUsedMem = 0.00f;
    this->bCheckFinishedLevelStreaming = true;
    this->CheckFinishedLevelStreamingTime = 2.00f;
    this->bPrintProfileLog = true;
    this->CameraComponent->SetupAttachment(RootComponent);
    this->CameraSpline->SetupAttachment(RootComponent);
}


