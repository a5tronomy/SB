#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESBProjectileState.h"
#include "ESBProjectileType.h"
#include "ESBSkelMeshSlot.h"
#include "ESBSkillHitResult.h"
#include "SBEngineActorPoolingInterface.h"
#include "SBProjectileUpdateInfo.h"
#include "SBShowActorInterface.h"
#include "SBProjectile.generated.h"

class UAnimSequence;
class UCurveFloat;
class UNiagaraComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USBCollisionGroupComponent;
class USceneComponent;
class USphereComponent;

UCLASS()
class SB_API ASBProjectile : public AActor, public ISBShowActorInterface, public ISBEngineActorPoolingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USBCollisionGroupComponent* CollisionGroupComponent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileType> ProjectileType;
    
    UPROPERTY(EditAnywhere, Instanced)
    USphereComponent* PhysicsShapeComponent;
    
    UPROPERTY(EditAnywhere)
    float DestroyWaitSecondTime;
    
    UPROPERTY(EditAnywhere)
    bool bRotationByDirection;
    
    UPROPERTY(EditAnywhere)
    bool bRotationByStartTransform;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* BeamTrackingCurve;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SkillGuid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBProjectileUpdateInfo ProjectileUpdateInfo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ShotTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    bool bTPSAutoTargeted;
    
    UPROPERTY(EditAnywhere)
    float TPSCheckRadius;
    
    UPROPERTY(EditAnywhere)
    float BulletMagnetRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoidSplineMoveDuration;
    
    ASBProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRotationByDirection(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyWaitTime(float inSecond);
    
private:
    UFUNCTION()
    void OnPhysicsShapeHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION()
    void OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ReleaseActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_InitActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ChangeState(TEnumAsByte<ESBProjectileState> inState);
    
    UFUNCTION(BlueprintPure)
    FVector GetStartLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEndLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentLocation() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventShotBoids(int32 OwnerSkillGuid);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnHitted(FVector inHittedLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnHitDestruction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnHit(FVector inHitLocation, TEnumAsByte<ESBSkillHitResult> inResultType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnDead();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnBounce();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventOnArrive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventCreateBoids(int32 OwnerSkillGuid, float ProjectileLifeTime, float ShotWaitTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventBeam(FVector StartPos, FVector EndPos, FVector ForwardVector, float Length, FVector HitSurfaceNormal, FVector HitPos, int32 Hit);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool PlaySingleShow(const FString& inShowPath, bool inFullPath, FVector InTargetLocation) override PURE_VIRTUAL(PlaySingleShow, return false;);
    
    UFUNCTION(BlueprintCallable)
    void ActorStopCustomAnim(FGuid InAnimGuid, FName inComponentTag, float InOutBlendTime) override PURE_VIRTUAL(ActorStopCustomAnim,);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimSequenceMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimSequenceMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimSequence(UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimSequence, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimNameMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimNameMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FGuid ActorPlayCustomAnimName(const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) override PURE_VIRTUAL(ActorPlayCustomAnimName, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    bool IsPoolingActor() override PURE_VIRTUAL(IsPoolingActor, return false;);
    
};

