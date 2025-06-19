#include "SBRadialForceComponent.h"

USBRadialForceComponent::USBRadialForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectTypesToAffect.AddDefaulted(4);
    this->DestructibleCheckRadius = 0.00f;
    this->bIncludeZoneEventActor = false;
}


