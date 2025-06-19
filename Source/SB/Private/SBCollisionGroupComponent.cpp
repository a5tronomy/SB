#include "SBCollisionGroupComponent.h"

USBCollisionGroupComponent::USBCollisionGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pCollisionData = NULL;
    this->ShapeScale = 1.00f;
    this->bIgnoreSingleShapeRecord = false;
    this->bRegisterdTick = false;
}


