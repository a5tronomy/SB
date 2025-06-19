#include "SBProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "SBCollisionGroupComponent.h"

ASBProjectile::ASBProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DummyRoot = (USceneComponent*)RootComponent;
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->CollisionGroupComponent = CreateDefaultSubobject<USBCollisionGroupComponent>(TEXT("CollisionGroup"));
    this->ProjectileType = ProjectileType_Missile;
    this->PhysicsShapeComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PhysicsShapeComponent"));
    this->DestroyWaitSecondTime = 0.00f;
    this->bRotationByDirection = true;
    this->bRotationByStartTransform = false;
    this->BeamTrackingCurve = NULL;
    this->SkillGuid = 0;
    this->ShotTime = 0.00f;
    this->LifeTime = 0.00f;
    this->bTPSAutoTargeted = false;
    this->TPSCheckRadius = 0.00f;
    this->BulletMagnetRadiusScale = 1.00f;
    this->BoidSplineMoveDuration = 0.00f;
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->ParticleComponent->SetupAttachment(RootComponent);
    this->PhysicsShapeComponent->SetupAttachment(RootComponent);
}

void ASBProjectile::SetRotationByDirection(bool inEnable) {
}

void ASBProjectile::SetDestroyWaitTime(float inSecond) {
}

void ASBProjectile::OnPhysicsShapeHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBProjectile::OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




FVector ASBProjectile::GetStartLocation() const {
    return FVector{};
}

FVector ASBProjectile::GetEndLocation() const {
    return FVector{};
}

FVector ASBProjectile::GetCurrentLocation() const {
    return FVector{};
}












