#include "SBJsonEffectAction_SummonActor.h"

FSBJsonEffectAction_SummonActor::FSBJsonEffectAction_SummonActor() {
    this->bDamageShareWithOwner = false;
    this->bDespawnWithOwner = false;
    this->SpawnLocationType = SummonActorSpawnLocationType_BasedOnOwnerActor;
    this->SpawnRotationType = SummonActorSpawnRotationType_Default;
    this->SpawnPointFormationIndex = 0;
    this->DrawDistance = 0.00f;
    this->bDontDestroy = false;
    this->bVisible = false;
    this->bClone = false;
    this->bCheckValidLocation = false;
    this->CheckValidCapsuleRadius = 0.00f;
    this->CheckValidCapsuleHalfHeight = 0.00f;
    this->LimitCount = 0;
    this->bOnGround = false;
    this->CheckGroundStartZOffset = 0.00f;
    this->CheckGroundEndZOffset = 0.00f;
    this->DespawnDistanceToOwner = 0.00f;
    this->bCheckBlocking = false;
}

