#include "SBAimTargetComponent.h"

USBAimTargetComponent::USBAimTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckTargetCollisionRadius = 30.00f;
    this->AimSlowdownPercent = 50.00f;
}


