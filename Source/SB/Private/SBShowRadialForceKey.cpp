#include "SBShowRadialForceKey.h"

USBShowRadialForceKey::USBShowRadialForceKey() {
    this->bUseRegisterActor = false;
    this->LocationBaseTarget = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->Radius = 0.00f;
    this->Falloff = RIF_Constant;
    this->ObjectTypesToAffect.AddDefaulted(4);
    this->bFireImpulse = false;
    this->ImpulseStrength = 0.00f;
    this->bImpulseVelChange = false;
    this->bIgnoreOwningActor = false;
    this->ForceStrength = 0.00f;
    this->DestructibleDamage = 0.00f;
    this->DestructibleCheckRadius = 0.00f;
    this->bIncludeZoneEventActor = false;
}


