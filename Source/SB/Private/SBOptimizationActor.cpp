#include "SBOptimizationActor.h"

ASBOptimizationActor::ASBOptimizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseWorldSector = true;
    this->bKeepTransformWhenDisableTick = true;
    this->DisableOptimizationDistance = 0.00f;
    this->bDisableOptimization = false;
    this->UnderWaterLinearDamping = 20.00f;
    this->UnderWaterAngularDamping = 20.00f;
    this->bUseSequencer = false;
    this->bVisible = true;
    this->ViewDistance = 0.00f;
    this->OverlapPhysicsActorCount = 0;
    this->CheckIgnorePawnHitCount = 0;
    this->IgnorePawnKeepTime = 0.00f;
    this->bForceDisableFromLevelSequence = false;
    this->bCurrentForceDisableFromLevelSequence = false;
    this->bHideByEventContents = false;
    this->bIsIntervalUpdate = true;
}

void ASBOptimizationActor::UpdateWaterHeight(const TArray<FName>& ActiveSockets, UStaticMeshComponent* pFloatingMesh, float WaterHeightOffset, float AverageStrength, float MaxStrength) {
}

void ASBOptimizationActor::OnCollisionPhysicsOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBOptimizationActor::OnCollisionPhysicsOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBOptimizationActor::OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}





