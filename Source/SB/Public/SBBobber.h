#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "ESBFishingBobberState.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowActorInterface.h"
#include "SBBobber.generated.h"

class AActor;
class ASBCharacter;
class UAnimSequence;
class UCurveFloat;
class USkeletalMeshComponent;

UCLASS()
class SB_API ASBBobber : public APawn, public ISBShowActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    AActor* BindingFish;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TEnumAsByte<ESBFishingBobberState> State;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    bool bReel;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FRotator FishRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float FightingFishVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float TensionRate;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float LiftUpBobberScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCurveFloat*> FightingMovePatterns;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* TimingFinalPullSpeed;
    
private:
    UPROPERTY(Transient)
    UCurveFloat* CurrentMovePattern;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> Caster;
    
public:
    ASBBobber(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetState(TEnumAsByte<ESBFishingBobberState> FishingBobberState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetReel(bool bIsReel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetAttachEnd(ASBCharacter* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_PullHit(bool bInArea);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_FishTurn(float NextFishDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_CastingToWaiting();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBFishingBobberState> GetState();
    

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

