#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBAreaControlVolumeBlockType.h"
#include "ESBSkelMeshSlot.h"
#include "ESBZoneObjectSaveType.h"
#include "SBShowActorInterface.h"
#include "SBTableAliasName.h"
#include "SBWorldActor.h"
#include "SBAreaControlVolume.generated.h"

class ASBCharacter;
class UAnimSequence;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class SB_API ASBAreaControlVolume : public ASBWorldActor, public ISBShowActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBTableAliasName AreaControlVolumeAlias;
    
    UPROPERTY(EditAnywhere)
    FString MainPrimitiveComponentName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAreaControlVolumeBlockType> BlockType;
    
    UPROPERTY(Transient)
    TArray<FName> AdmissionPossibleTribeArray;
    
    UPROPERTY(Transient)
    TArray<FName> AdmissionPossibleCharacterTagArray;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* DummyRoot;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* MoveLocationWhenBlockingHitComponent;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> CollisionControlComponents;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> ForceMovePlayerCharacter;
    
public:
    ASBAreaControlVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void EventSetActive(bool Inactive, bool inFromStorage);
    

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

