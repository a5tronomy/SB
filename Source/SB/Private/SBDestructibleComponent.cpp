#include "SBDestructibleComponent.h"

USBDestructibleComponent::USBDestructibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DissolveFadeBeginTime = -1.00f;
    this->DissolveFadeDuration = -1.00f;
    this->DissolveFadeParameterName = TEXT("DissolveValue");
    this->bDestroyActorWhenAfterDissolve = false;
    this->bEnableCollisionWhenAfterDissolve = false;
    this->ChunkNiagaraSystem = NULL;
    this->ChunkParticleSystem = NULL;
    this->ChunkParticleDestroyTime = 0.00f;
    this->HitParticleSystem = NULL;
    this->HitParticleSystemMaxSpawnCount = 0;
    this->bRegisterdTick = false;
    this->bTickDissolve = false;
    this->DissolveCurrentTime = 0.00f;
    this->bSpawnFracture = false;
    this->SpawnFractureTime = 0.00f;
    this->HitParticleSystemSpawnCount = 0;
    this->bCompletedDissolve = false;
    this->RestoreChunkCurrentStep = 0;
}

void USBDestructibleComponent::SetHitParticleSystem(TArray<FSBChunkParticleInfo> ChunkParticleInfos, int32 MaxSpawnCount) {
}

void USBDestructibleComponent::SetDissolveFade(float BeginTime, float Duration, FName ParameterName, bool DestroyActorWhenAfterDissolve, bool EnableCollisionWhenAfterDissolve) {
}

void USBDestructibleComponent::SetChunkNiagaraSystem(UNiagaraSystem* inNiagaraSystem, float DestroyTime) {
}

void USBDestructibleComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void USBDestructibleComponent::OnCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


