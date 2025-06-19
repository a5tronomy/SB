#include "SBEffectVolume.h"

ASBEffectVolume::ASBEffectVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->bActiveVolume = true;
    this->Priority = 0.00f;
    this->AttachActor = NULL;
    this->SafePointActorOnDead = NULL;
    this->bPlayerActorOnly = false;
    this->bIgnorePriority = false;
    this->bUseEveryZone = false;
    this->bUseActiveEventMoveType = false;
    this->ActiveEventMoveType = SBEventMove_SideToSide;
    this->bActiveHoldAtBalanceMove = false;
    this->bAcquireSpawnItem = false;
}


