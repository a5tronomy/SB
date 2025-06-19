#include "SBDeactiveMovingComponent.h"

USBDeactiveMovingComponent::USBDeactiveMovingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->bDeactiveBlockWallAction = false;
    this->bDeactiveCliffAction = false;
    this->bDeactiveSlideSlip = false;
}


