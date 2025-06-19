#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBSkelMeshSlot.h"
#include "SBEngineActorPoolingInterface.h"
#include "SBShowActorInterface.h"
#include "SBItem.generated.h"

class UAnimSequence;
class UPrimitiveComponent;
class USBShowData;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class SB_API ASBItem : public AActor, public ISBShowActorInterface, public ISBEngineActorPoolingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool RequireSpawnCheckLocation;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckRadius;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckHeight;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckStartDist;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckEndDist;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnOffset;
    
    UPROPERTY(EditAnywhere)
    bool AlwaysInteractionAllow;
    
    UPROPERTY(EditAnywhere)
    bool InteractionAutoXYOnlyCheck;
    
    UPROPERTY(EditAnywhere)
    USBShowData* ShowSpawn;
    
    UPROPERTY(EditAnywhere)
    USBShowData* ShowInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bForceActivePhysics;
    
    UPROPERTY(EditAnywhere)
    bool bUsePooling;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseRequirePhysics;
    
    UPROPERTY(Transient)
    uint32 BucketGuid;
    
    UPROPERTY(Transient)
    FGuid PocketGuid;
    
    UPROPERTY(Transient)
    float InteractionDelayTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FName> Arguemnts;
    
    UPROPERTY(Transient)
    bool bFinishSimulatePhysics;
    
    UPROPERTY(Transient)
    bool bExistFloor;
    
    UPROPERTY(Transient)
    FVector LastExistFloorHitLocation;
    
    UPROPERTY(Transient)
    FVector TargetLocation;
    
    UPROPERTY(Transient)
    float RemainSpawnTime;
    
    UPROPERTY(Transient)
    bool bUseSpawnShow;
    
    UPROPERTY(Transient)
    bool bActionSpawn;
    
    UPROPERTY(Transient)
    TArray<FName> ActorActiveVolumeNameArray;
    
    UPROPERTY(Transient)
    bool bActiveItem;
    
    UPROPERTY(Transient)
    bool bIgnoreHiddenInGame;
    
    UPROPERTY(Transient)
    FName FloorLevelName;
    
    UPROPERTY(Transient)
    float ShowInteractionRemainTime;
    
    UPROPERTY(Transient)
    FVector SpawnLocation;
    
    UPROPERTY(Transient)
    FRotator SpawnRotation;
    
    UPROPERTY(Transient)
    FString ResourcePath;
    
    UPROPERTY(Transient)
    bool bGainSimulateForceStop;
    
    UPROPERTY(Transient)
    bool bActionSimulateForceStop;
    
    UPROPERTY(Transient)
    float AutoGainRemainTime;
    
    UPROPERTY(Transient)
    bool bUIMode;
    
    UPROPERTY(Transient)
    FVector LastLocation;
    
    UPROPERTY(Transient)
    float RemainCheckFinishSimulate;
    
    UPROPERTY(Transient)
    bool bIgnoreFinishSimulatePhysics;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> PrimitiveComps;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* StaticMeshComp;
    
    UPROPERTY(Transient)
    FVector CachedActorBoundExtents;
    
public:
    ASBItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetInteractionDelayTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventUIModeChange(bool bChangedUIMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitItem();
    

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

