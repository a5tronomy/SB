#include "SBLaserComponent.h"

USBLaserComponent::USBLaserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxActiveDistance = 0.00f;
    this->OverrideSignificanceManagerDistance = 0.00f;
    this->TickSkipFrame = 0;
    this->DisableTickByLastRenderTimeOnScreen = 0.00f;
    this->CheckDistanceToTarget = 0.00f;
    this->bHitToCharacter = true;
    this->bPlayerCharacterOnly = false;
    this->bBlockingLaserHitCharacter = false;
    this->bZoneEventActorDestruction = false;
    this->bIgnoreNoDamageState = false;
    this->HitSound = NULL;
    this->HitSoundAttenuation = NULL;
    this->LaserSound = NULL;
    this->LaserSoundAttenuation = NULL;
    this->OnSound = NULL;
    this->OnSoundAttenuation = NULL;
    this->OffSound = NULL;
    this->OffSoundAttenuation = NULL;
    this->bRegisterdTick = false;
    this->MaxLaserLength = 0.00f;
    this->MaxBounces = 0;
    this->HitInterval = 0.00f;
    this->bActiveOnceHit = false;
    this->bActiveLaser = false;
    this->BeamNiagaraSystem = NULL;
    this->bUseStoryMode = false;
    this->StoryMode_BeamNiagaraSystem = NULL;
    this->CurrentTickSkipFrame = 0;
    this->bLastFrameSkip = false;
    this->AsyncTraceIndex = -1;
    this->bStoryMode = false;
}

bool USBLaserComponent::IsActiveLaser() {
    return false;
}


