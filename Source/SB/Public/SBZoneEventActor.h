#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESBElementReaction.h"
#include "ESBElementType.h"
#include "ESBSkelMeshSlot.h"
#include "ESBZoneEventHitAttackerType.h"
#include "ESBZoneObjectSaveType.h"
#include "SBResetZoneCollisionUpdateInfo.h"
#include "SBShowActorInterface.h"
#include "SBWorldActor.h"
#include "SBZoneEventActor.generated.h"

class AActor;
class UAnimSequence;
class UPrimitiveComponent;
class USBCollisionGroupComponent;
class USBDestructibleComponent;
class USBZoneEventActorTriggerInfo;
class USceneComponent;
class UShapeComponent;

UCLASS()
class SB_API ASBZoneEventActor : public ASBWorldActor, public ISBShowActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USBCollisionGroupComponent* CollisionGroupComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* DummyRoot;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorRootComponentName;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorTableAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> ZoneEventActorSaveType;
    
    UPROPERTY(EditAnywhere)
    bool bDynamicZoneEventActor;
    
    UPROPERTY(EditAnywhere)
    bool bLineTraceBlock;
    
    UPROPERTY(EditAnywhere)
    bool bStaticZoneEventActor;
    
    UPROPERTY(EditAnywhere)
    FVector RootTransformOffsetPosition;
    
    UPROPERTY(EditAnywhere)
    bool bCanReleasedActor;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysReset;
    
    UPROPERTY(EditAnywhere)
    float SlopeMoveDrawDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDontRestoreByCode;
    
    UPROPERTY(EditAnywhere)
    bool bStabilityActiveSimulatePhysics;
    
    UPROPERTY(EditAnywhere)
    bool bStabilityActiveSimulatePhysics_WakeAllRigidBodies;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePhysicsControl;
    
    UPROPERTY(EditAnywhere)
    bool bDisableSimulatingPhysicsWhenCurrentFloor;
    
    UPROPERTY(EditAnywhere)
    FString ZLockPrimitiveComponentName;
    
    UPROPERTY(EditAnywhere)
    float ZLockDelayTime;
    
    UPROPERTY(EditAnywhere)
    float ZLockVelocity;
    
    UPROPERTY(EditAnywhere)
    float ZLockAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float ZUnockAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float ZLockZeroVelocityTime;
    
    UPROPERTY(EditAnywhere)
    bool ZLockWithXY;
    
    UPROPERTY(Transient)
    float ZLockCurrentTime;
    
    UPROPERTY(Transient)
    uint32 ZLockStateAngularVelocityValidCount;
    
    UPROPERTY(Transient)
    uint32 ZLockStateAngularVelocityValidCheckFrame;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bZLockState;
    
    UPROPERTY(EditAnywhere)
    float UnwalkableSlopeVelocity;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterLinearDamping;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableFromLevelSequence;
    
    UPROPERTY(Transient)
    bool bCurrentForceDisableFromLevelSequence;
    
    UPROPERTY(EditAnywhere)
    float DestructionTimer;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bActiveEvent;
    
    UPROPERTY(EditAnywhere)
    bool bOnHitWhenDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bCheckBlockLocation;
    
    UPROPERTY(EditAnywhere)
    bool bDontDestroyWhenDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreBlockingHitWhenDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreBlockingHitWithoutPlayer;
    
    UPROPERTY(EditAnywhere)
    int32 RemainDestructCount;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CountEventStepArray;
    
    UPROPERTY(EditAnywhere)
    FString MainPrimitiveComponentNameBeforeDestruction;
    
    UPROPERTY(EditAnywhere)
    FString MainPrimitiveComponentNameAfterDestruction;
    
    UPROPERTY(EditAnywhere)
    float DestructionDelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float DestructionDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    USBZoneEventActorTriggerInfo* TriggerInfo;
    
    UPROPERTY(EditAnywhere)
    FName SpecialTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> DestructionCollisionResponse;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBElementType> ElementType;
    
    UPROPERTY(EditAnywhere)
    float ElementAmount;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreHiddenWhenOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceNotOcclusionFromLevelSequence;
    
    UPROPERTY(Transient)
    float DestructionEventDelayTime;
    
    UPROPERTY(Transient)
    bool bDestruction;
    
    UPROPERTY(Instanced, Transient)
    TArray<UShapeComponent*> DestructionShapeComponentsArray;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USBDestructibleComponent> DestructibleComponent;
    
    UPROPERTY(Transient)
    bool bIndependentObject;
    
    UPROPERTY(Transient)
    bool bRelease;
    
    UPROPERTY(Transient)
    bool bDynamicObject;
    
    UPROPERTY(Transient)
    bool bInitExistMainCompProp;
    
    UPROPERTY(Transient)
    bool bInitSimulatePhys;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionEnabled::Type> InitMainCompCollisionEnabled;
    
    UPROPERTY(Transient)
    FVector InitMainCompLocation;
    
    UPROPERTY(Transient)
    FRotator InitMainCompRotation;
    
    UPROPERTY(Transient)
    int32 ResetZoneCollisionUpdateTickCount;
    
    UPROPERTY(Transient)
    TArray<FSBResetZoneCollisionUpdateInfo> ResetZoneCollisionUpdateMeshList;
    
    UPROPERTY(Transient)
    bool bPendingFloorCheck;
    
    UPROPERTY(Transient)
    bool bExistFloor;
    
    UPROPERTY(Transient)
    FVector LastExistFloorHitLocation;
    
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* FloorCheckPrimitiveComponent;
    
    UPROPERTY(Transient)
    TArray<FVector> FloorCheckMoveHistroy;
    
    UPROPERTY(Transient)
    FVector CachedActorBoundExtents;
    
    UPROPERTY(Transient)
    bool bActorTickEnable;
    
    UPROPERTY(Transient)
    bool bActiveSector;
    
    UPROPERTY(Transient)
    bool bOcclusion;
    
    UPROPERTY(Transient)
    uint64 LastCheckOcclusionFrameCount;
    
    UPROPERTY(Transient)
    uint64 PlayerFloorFrameCounter;
    
    UPROPERTY(Transient)
    uint64 DestructionFrameCounter;
    
    UPROPERTY(Transient)
    bool bHideByEventContents;
    
    UPROPERTY(Transient)
    bool bRegisterDestruction;
    
public:
    ASBZoneEventActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStaticZoneEventActor(bool inStatic);
    
    UFUNCTION(BlueprintCallable)
    void SetDestructibleComponent(USBDestructibleComponent* inDestructibleComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAllCollisionGroup(bool bActiveCollision);
    
    UFUNCTION()
    void OnCollisionPhysicsOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCollisionPhysicsOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyShowEvent(FName EventTagName, FName CustomNameValue);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBElementReaction> GetReactionElement();
    
    UFUNCTION(BlueprintCallable)
    float GetElementAmount(TEnumAsByte<ESBElementType> inElementType, bool inNormalized);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventUnderWater(FVector inHitLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventTurnOnElement(TEnumAsByte<ESBElementType> inElementType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventTurnOffElement(TEnumAsByte<ESBElementType> inElementType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventSpawnDestructibleComponent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventPostDestruction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitElement(TEnumAsByte<ESBElementType> inElementType, float inAmount, float inNormalizedAmount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitDestructionState(bool inDestruction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventHit(FVector inHitLocation, FVector inHitDirection, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventDestructionStep(FVector inHitLocation, FVector inHitDirection, int32 inDestructionStep, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventDestruction(FVector inHitLocation, FVector inHitDirection, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAtLocation(FVector Impulse, FVector Location);
    

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
    
};

