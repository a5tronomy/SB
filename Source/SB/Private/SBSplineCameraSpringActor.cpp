#include "SBSplineCameraSpringActor.h"
#include "GameFramework/SpringArmComponent.h"

ASBSplineCameraSpringActor::ASBSplineCameraSpringActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCamControl = false;
    this->MaxCamControlDegree = 30.00f;
    this->WaitInputRollback = 0.10f;
    this->RemainRollbackTime = 0.50f;
    this->RollbackEasingFunc = EEasingFunc::EaseIn;
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->RunningWaitInput = 0.00f;
    this->RunningRemainRollback = 0.00f;
    this->CameraBoom->SetupAttachment(CameraRoot);
}


