#include "SBCameraBasedUpdateComponent.h"

USBCameraBasedUpdateComponent::USBCameraBasedUpdateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAutoScale = false;
    this->AutoScaleUnitDistance = 1000.00f;
    this->UpdateGridDistance = 5000.00f;
    this->AutoScaleMinScale = 3.00f;
    this->AutoScaleMaxScale = 15.00f;
    this->AutoScaleIncreasePerUnit = 2.00f;
    this->bUsingForOceanPlane = false;
}


