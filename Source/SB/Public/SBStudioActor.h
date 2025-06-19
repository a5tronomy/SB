#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBCharaterAdditiveBodyType.h"
#include "ESBSkelMeshSlot.h"
#include "SBMeshInfo.h"
#include "SBPostProcessWeightedBlendables.h"
#include "SBShowActorInterface.h"
#include "SBStudioSequenceParameter.h"
#include "Templates/SubclassOf.h"
#include "SBStudioActor.generated.h"

class ALevelSequenceActor;
class ASBItem;
class UAnimSequence;
class UCameraComponent;
class USBSkeletalMeshComponent;
class USBStudioSequenceDataAsset;
class USBStudioSequenceObserver;
class USBStudioShowDataAsset;
class USceneComponent;

UCLASS()
class SB_API ASBStudioActor : public AActor, public ISBShowActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> MeshInfoTagList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FSBMeshInfo> MeshInfoList;
    
    UPROPERTY(EditAnywhere)
    float CameraSplineMoveFactor;
    
    UPROPERTY(EditAnywhere)
    float CameraSplineDampingAlpha;
    
    UPROPERTY(EditAnywhere)
    float CameraRotationDampingAlpha;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USBSkeletalMeshComponent* MeshBody;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> MeshBodyTMMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StudioTag;
    
    UPROPERTY(Transient)
    bool bStateEnter;
    
    UPROPERTY(Transient)
    float ExitTryRemainTime;
    
    UPROPERTY(Transient)
    FGuid ExitLoadingGuid;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LastViewTarget;
    
    UPROPERTY(Transient)
    bool bLastCameraMoveableWhenPaused;
    
    UPROPERTY(Transient)
    int32 RemainSetViewTargetCount;
    
    UPROPERTY(EditAnywhere)
    FName BodyCustomAnimNodeName;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> BodyCustomAnimNodeNameMap;
    
    UPROPERTY(EditAnywhere)
    FName BodyCustomAnimAdditiveNodeName;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBSkelMeshSlot>, FName> MeshSlotCustomAnimNodeNameMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> TagCustomAnimNodeNameMap;
    
    UPROPERTY(EditAnywhere)
    FName DefaultSBSkeletalTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALevelSequenceActor> TemplateSequenceActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBStudioSequenceDataAsset* SequenceResourceDataAsset;
    
    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<USBStudioSequenceObserver>> ActiveSequenceMap;
    
    UPROPERTY(Transient)
    float KawaiiPhysicsAlpha;
    
    UPROPERTY(Transient)
    bool bShortPonyTail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBStudioShowDataAsset* ShowResourceDataAsset;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* ItemRoot;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBItem> SpawnItemActor;
    
    UPROPERTY(Transient)
    FVector SpawnItemOrigLocation;
    
    UPROPERTY(Transient)
    FRotator SpawnItemOrigRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemRotationSpeed;
    
    UPROPERTY(Transient)
    bool bItemVisible;
    
    UPROPERTY(Transient)
    bool bEnableStudioTickableWhenPaused;
    
    UPROPERTY(Transient)
    bool bLastActiveWaterPP;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UCameraComponent> CacheCameraCompoennt;
    
    UPROPERTY(Transient)
    bool bCaptureCameraPivot;
    
    UPROPERTY(Transient)
    FTransform CaptureCameraTM;
    
    UPROPERTY(Transient)
    FTransform CaptureCameraPivot1TM;
    
    UPROPERTY(Transient)
    FTransform CaptureCameraPivot2TM;
    
    UPROPERTY(Transient)
    float TargetSplineProgress;
    
    UPROPERTY(Transient)
    float LastSplineProgress;
    
    UPROPERTY(Transient)
    FName LastSplineComponentTag;
    
    UPROPERTY(Transient)
    float TargetCameraRotationYaw;
    
    UPROPERTY(Transient)
    float LastCameraRotationYaw;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<USceneComponent>> CacheSplineRootArray;
    
    UPROPERTY(Transient)
    TMap<FName, FSBPostProcessWeightedBlendables> PostProcessWeightedBlendablesMap;
    
    UPROPERTY(Transient)
    bool bCacheParentSpline;
    
    UPROPERTY(Transient)
    int32 ClothResetCount;
    
    UPROPERTY(Transient)
    FName ClothResetComponentTag;
    
    UPROPERTY(Transient)
    bool bFirstClothReset;
    
    UPROPERTY(Transient)
    bool bDepthOfFieldCheckFocalDistance;
    
    UPROPERTY(Transient)
    bool bEnableDepthOfFieldForceAllowSupportsSlightOutOfFocus;
    
    UPROPERTY(EditAnywhere)
    float ResetPhysicsBlnedTime;
    
    UPROPERTY(EditAnywhere)
    float ResetPhysicsHoldTime;
    
    UPROPERTY(Transient)
    float RemainResetPhysics;
    
    UPROPERTY(Transient)
    FName VisibleComponentTag;
    
    UPROPERTY(Transient)
    bool bDisableIdleAdditiveAnim;
    
    UPROPERTY(Transient)
    FName IdleAdditiveAnimationVisibleComponentTag;
    
    UPROPERTY(Transient)
    FName DisableIdleAdditiveAnimVisibleComponentTag;
    
    UPROPERTY(Transient)
    int32 InputMoveStopRemainCount;
    
public:
    ASBStudioActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateSkelMeshPosition();
    
    UFUNCTION(BlueprintCallable)
    void StopShow(FName inShowTag);
    
    UFUNCTION(BlueprintCallable)
    void StopLevelSequence(FName inSequenceTag);
    
    UFUNCTION(BlueprintCallable)
    void StopAllShow();
    
    UFUNCTION(BlueprintCallable)
    void StopAllLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    bool PlayStudioShow(const FString& inShowPath);
    
    UFUNCTION(BlueprintCallable)
    bool PlayShow(FName inShowTag, FSBStudioSequenceParameter inLevelSeqParam, bool bSamePlayThenStop);
    
    UFUNCTION(BlueprintCallable)
    bool PlayLevelSequence(FName inSequenceTag, FSBStudioSequenceParameter InParam, bool bSamePlayThenStop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetupTarget(FName inTargetTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetMesh(FName inComponentTag, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_InputMoveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_InputMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void ItemVisible(bool bVisible, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool IsShortPonyTail();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingShow(FName inShowTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingLevelSequence(FName inSequenceTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingAnyLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableIdleAdditiveAnim();
    
    UFUNCTION(BlueprintCallable)
    float GetKawaiiPhysicsAlpha();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESBCharaterAdditiveBodyType> GetIdleAdditiveAnimType();
    
    UFUNCTION(BlueprintCallable)
    float GetIdleAdditiveAnimAlpha();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimByMeshSlotAlpha(FName inComponentTag, TEnumAsByte<ESBSkelMeshSlot> InMeshSlotType);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAlpha(FName inComponentTag);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCustomAnimAdditiveAlpha(FName inComponentTag);
    
    UFUNCTION(BlueprintCallable)
    FName GetBodyMeshName(FName inSBSkeletalTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventNotification(const FName& inEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyMeshInfo(FName inComponentTag, USBSkeletalMeshComponent* PinActor, TEnumAsByte<ESBSkelMeshSlot> inMeshInfoSlot);
    

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

