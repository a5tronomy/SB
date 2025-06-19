#include "SBZoneEventActor.h"
#include "Components/SceneComponent.h"
#include "SBCollisionGroupComponent.h"

ASBZoneEventActor::ASBZoneEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // this->bUseWorldSector = true;
    this->CollisionGroupComponent = CreateDefaultSubobject<USBCollisionGroupComponent>(TEXT("CollisionGroup"));
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ZoneEventActorRootComponentName = TEXT("RootTransform");
    this->ZoneEventActorSaveType = ESBZoneObjSaveType_Save;
    this->bDynamicZoneEventActor = false;
    this->bLineTraceBlock = false;
    this->bStaticZoneEventActor = false;
    this->bCanReleasedActor = false;
    this->bAlwaysReset = false;
    this->SlopeMoveDrawDistance = 0.00f;
    this->bDontRestoreByCode = false;
    this->bStabilityActiveSimulatePhysics = true;
    this->bStabilityActiveSimulatePhysics_WakeAllRigidBodies = true;
    this->bDisablePhysicsControl = false;
    this->bDisableSimulatingPhysicsWhenCurrentFloor = false;
    this->ZLockDelayTime = 5.00f;
    this->ZLockVelocity = 2.30f;
    this->ZLockAngularVelocity = 20.00f;
    this->ZUnockAngularVelocity = 80.00f;
    this->ZLockZeroVelocityTime = 5.00f;
    this->ZLockWithXY = true;
    this->ZLockCurrentTime = -1.00f;
    this->ZLockStateAngularVelocityValidCount = 0;
    this->ZLockStateAngularVelocityValidCheckFrame = 0;
    this->bZLockState = false;
    this->UnwalkableSlopeVelocity = 0.00f;
    this->UnderWaterLinearDamping = 20.00f;
    this->UnderWaterAngularDamping = 20.00f;
    this->bForceDisableFromLevelSequence = false;
    this->bCurrentForceDisableFromLevelSequence = false;
    this->DestructionTimer = 0.00f;
    this->bDisableDestruction = false;
    this->bActiveEvent = true;
    this->bOnHitWhenDestruction = false;
    this->bCheckBlockLocation = true;
    this->bDontDestroyWhenDestruction = false;
    this->bIgnoreBlockingHitWhenDestruction = false;
    this->bIgnoreBlockingHitWithoutPlayer = false;
    this->RemainDestructCount = 1;
    this->DestructionDelayMinTime = 0.00f;
    this->DestructionDelayMaxTime = 0.00f;
    this->TriggerInfo = NULL;
    this->DestructionCollisionResponse = ECR_Block;
    this->ElementType = Element_None;
    this->ElementAmount = 0.00f;
    this->bIgnoreHiddenWhenOcclusion = false;
    this->bForceNotOcclusionFromLevelSequence = false;
    this->DestructionEventDelayTime = 0.00f;
    this->bDestruction = false;
    this->bIndependentObject = true;
    this->bRelease = false;
    this->bDynamicObject = false;
    this->bInitExistMainCompProp = false;
    this->bInitSimulatePhys = false;
    this->InitMainCompCollisionEnabled = ECollisionEnabled::NoCollision;
    this->ResetZoneCollisionUpdateTickCount = 0;
    this->bPendingFloorCheck = false;
    this->bExistFloor = false;
    this->FloorCheckPrimitiveComponent = NULL;
    this->bActorTickEnable = false;
    this->bActiveSector = false;
    this->bOcclusion = false;
    this->LastCheckOcclusionFrameCount = 0;
    this->PlayerFloorFrameCounter = 0;
    this->DestructionFrameCounter = 0;
    this->bHideByEventContents = false;
    this->bRegisterDestruction = false;
}

void ASBZoneEventActor::SetStaticZoneEventActor(bool inStatic) {
}

void ASBZoneEventActor::SetDestructibleComponent(USBDestructibleComponent* inDestructibleComponent) {
}

void ASBZoneEventActor::SetActiveAllCollisionGroup(bool bActiveCollision) {
}

void ASBZoneEventActor::OnCollisionPhysicsOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZoneEventActor::OnCollisionPhysicsOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZoneEventActor::OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZoneEventActor::OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


TEnumAsByte<ESBElementReaction> ASBZoneEventActor::GetReactionElement() {
    return ElementReaction_None;
}

float ASBZoneEventActor::GetElementAmount(TEnumAsByte<ESBElementType> inElementType, bool inNormalized) {
    return 0.0f;
}











void ASBZoneEventActor::AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange) {
}

void ASBZoneEventActor::AddImpulseAtLocation(FVector Impulse, FVector Location) {
}


