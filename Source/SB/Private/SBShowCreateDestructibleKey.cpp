#include "SBShowCreateDestructibleKey.h"

USBShowCreateDestructibleKey::USBShowCreateDestructibleKey() {
    this->DestructibleMesh = NULL;
    this->LocationBaseTarget = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->AllowFloorTraceDistance = 500.00f;
    this->AllowFloorTraceStartZSubLength = 20.00f;
    this->bUseHardSleeping = true;
    this->CollisionType = ECC_Destructible;
    this->DissolveFadeBeginTime = 0.00f;
    this->DissolveFadeDuration = 1.00f;
    this->bDestroyAfterDissolve = true;
    this->ChunkAttachedParticle = NULL;
    this->ChunkAttachedParticleDestroyTime = 1.00f;
    this->CollisionResponseToChannel.AddDefaulted(4);
    this->BaseDamage = 0.00f;
    this->DamageRadius = 0.00f;
    this->ImpulseStrength = 0.00f;
    this->bFullDamage = false;
    this->bRegisterActor = false;
}


