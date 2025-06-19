#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowActorInterface.generated.h"

class UAnimSequence;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USBShowActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBShowActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool PlaySingleShow(const FString& inShowPath, bool inFullPath, FVector InTargetLocation) PURE_VIRTUAL(PlaySingleShow, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ActorStopCustomAnim(FGuid InAnimGuid, FName inComponentTag, float InOutBlendTime) PURE_VIRTUAL(ActorStopCustomAnim,);
    
    UFUNCTION(BlueprintCallable)
    virtual FGuid ActorPlayCustomAnimSequenceMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) PURE_VIRTUAL(ActorPlayCustomAnimSequenceMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FGuid ActorPlayCustomAnimSequence(UAnimSequence* pAnimSeqAsset, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) PURE_VIRTUAL(ActorPlayCustomAnimSequence, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FGuid ActorPlayCustomAnimNameMeshSlot(TEnumAsByte<ESBSkelMeshSlot> InSlotIndex, const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) PURE_VIRTUAL(ActorPlayCustomAnimNameMeshSlot, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FGuid ActorPlayCustomAnimName(const FString& InAnimName, FName inComponentTag, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, float Priority, bool bClearAllAnim) PURE_VIRTUAL(ActorPlayCustomAnimName, return FGuid{};);
    
};

