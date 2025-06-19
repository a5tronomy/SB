#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBAdjustInteractPosType.h"
#include "ESBBufferDataSlot.h"
#include "ESBInputAxisType.h"
#include "ESBMeshClipingApplyType.h"
#include "ESBObjectState.h"
#include "ESBSkelMeshSlot.h"
#include "ESBZoneEnvActiveBoundType.h"
#include "ESBZoneEnvActiveState.h"
#include "SBActorSectorInfo.h"
#include "SBEngineActorPoolingInterface.h"
#include "SBEnvProgressData.h"
#include "SBEnvStateProperty.h"
#include "SBEnvZoneProperty.h"
#include "SBNavigationObjectBase.h"
#include "SBShowActorInterface.h"
#include "SBZoneEnvProgressInfo.h"
#include "SBZoneEnvActor.generated.h"

class AActor;
class UAnimSequence;
class UMeshComponent;
class UPrimitiveComponent;
class USBCharacterSoundSet;
class USBEventMoveDataComponent;
class USBSkeletalMeshComponent;
class USBZoneEnvGrabComponent;
class USBZoneEnvMovementComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class SB_API ASBZoneEnvActor : public ASBNavigationObjectBase, public ISBShowActorInterface, public ISBEngineActorPoolingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseEndPhysicsTick;
    
    UPROPERTY(EditAnywhere)
    bool bFixedSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StateTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ScanEffectStateTagName;
    
    UPROPERTY(Transient)
    bool bScanTargeted;
    
    UPROPERTY()
    bool bScanNoBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScanExclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreRenderControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScanOverrided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractableMarkerDistanceOverride;
    
    UPROPERTY(Transient)
    TArray<FSBZoneEnvProgressInfo> ProgressInfoList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBEnvZoneProperty> ZoneProperty;
    
    UPROPERTY(EditAnywhere)
    FName EnvActorName;
    
    UPROPERTY()
    TArray<FSBEnvStateProperty> EnvStateProperty;
    
    UPROPERTY(EditAnywhere)
    bool ResetBufferDataAtRelease;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAdjustInteractPosType> InteractAdjustPosType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvActiveBoundType> ActiveBoundType;
    
    UPROPERTY(EditAnywhere)
    FVector BoundExtent;
    
    UPROPERTY(EditAnywhere)
    FName MainPrimitiveComponentName;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> LevelSequenceBindActors;
    
    UPROPERTY(EditAnywhere)
    bool bEnableChangeWorldLevelEvent;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCollsiionPlayerAttachToSeq;
    
    UPROPERTY(EditAnywhere)
    float FloorCheckDistance;
    
    UPROPERTY(EditAnywhere)
    bool bPhotoModeSubject;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreCollisionAtInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreTraceInteractinPoint;
    
    UPROPERTY(EditAnywhere)
    float InteractionValidAreaTraceRadius;
    
    UPROPERTY(EditAnywhere)
    AActor* CampRespawnActor;
    
    UPROPERTY(EditAnywhere)
    bool bEnterTriggerWithFloor;
    
    UPROPERTY(EditAnywhere)
    FName LevelSequenceTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveInputIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBCharacterSoundSet* SoundSet;
    
    UPROPERTY(EditAnywhere)
    bool bResetRopeWhenWarpSafeLocation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAdjustSpawnLocation;
    
    UPROPERTY(EditAnywhere)
    bool bDisableComponentsClothTick;
    
    UPROPERTY(EditAnywhere)
    float ComponentsClothTickDistance;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreBlockingWhenCharacterPenetrating;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType4;
    
    UPROPERTY(Transient)
    FName BindZoneAlias;
    
    UPROPERTY(Transient)
    FName EnvSpawnAlias;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* EnvSkeletalMeshComponent;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* EnvStaticMeshComponent;
    
    UPROPERTY(Instanced, Transient)
    UMeshComponent* PhysicsEnablePrimitiveComponent;
    
    UPROPERTY(Transient)
    FVector PhysicCompInitRelativeLocation;
    
    UPROPERTY(Transient)
    FRotator PhysicCompInitRelativeRotation;
    
    UPROPERTY(Transient)
    TMap<FName, int32> ProgressValueMap;
    
    UPROPERTY(Transient)
    TMap<FName, int32> StateProgressMaxCountMap;
    
    UPROPERTY(Transient)
    bool bNeedEnableTick;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* OriginComponent;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> InteractionPointComponents;
    
    UPROPERTY(Instanced, Transient)
    USBEventMoveDataComponent* EventMoveDataComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* QuestMarkerComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActorActiveVolumeNameArray;
    
    UPROPERTY(Transient)
    bool bActiveActor;
    
    UPROPERTY(Transient)
    bool bIgnoreHiddenInGame;
    
    UPROPERTY(Transient)
    FString ActiveLevelSequencePath;
    
    UPROPERTY(Transient)
    bool bExistFloor;
    
    UPROPERTY(Transient)
    FVector LastFloorHitLocation;
    
    UPROPERTY(Transient)
    FVector CachedActorBoundExtents;
    
    UPROPERTY(Transient)
    FVector CachedBeginActorBoundExtents;
    
    UPROPERTY(Transient)
    int32 PendingEventIndex;
    
    UPROPERTY(Instanced, Transient)
    TArray<UStaticMeshComponent*> MeshClipingBoundCompList;
    
    UPROPERTY(Instanced, Transient)
    TArray<UStaticMeshComponent*> MeshClipingExclusivePlaneCompList;
    
    UPROPERTY(Transient)
    bool bOcclusion;
    
    UPROPERTY(Transient)
    uint64 LastCheckOcclusionFrameCount;
    
    UPROPERTY(Transient)
    FSBActorSectorInfo SectorInfo;
    
    UPROPERTY(Transient)
    bool bHideByEventContents;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreArriveWhenHitProjectile;
    
protected:
    UPROPERTY(Transient)
    FVector ControlInputVector;
    
    UPROPERTY(Transient)
    FVector LocalControlInputVector;
    
    UPROPERTY(Transient)
    FVector LastControlInputVector;
    
    UPROPERTY(Transient)
    FVector LocalLastControlInputVector;
    
    UPROPERTY(Transient)
    int32 LastStencilValue;
    
    UPROPERTY(Transient)
    int32 PendingStencilValue;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionEnabled::Type> InitCollisionAtRootComponent;
    
    UPROPERTY(Transient)
    bool bInitRootComponentActivate;
    
    UPROPERTY(Transient)
    bool bInitEnableSimulatePhysics;
    
    UPROPERTY(Transient)
    bool bTickEnabled;
    
public:
    UPROPERTY(EditAnywhere)
    bool bStaticUntilInteraction;
    
    UPROPERTY(EditAnywhere)
    float ActiveTimeAfterInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bDisableOptimization;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBPTickEnabled;
    
    UPROPERTY(EditAnywhere)
    float TickDistance;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreHiddenWhenOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bForceNotOcclusionFromLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bDisableOcclusionFromLevelSequence;
    
    UPROPERTY(EditAnywhere)
    bool bControlInertiaTensorScale;
    
    UPROPERTY(EditAnywhere)
    FVector InertiaTensorScale_HighFrame;
    
    UPROPERTY(EditAnywhere)
    float ControlInertiaTensorScaleHighFrame;
    
    UPROPERTY(EditAnywhere)
    FName ControlInertiaTensorScaleTargetObjectName;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UStaticMeshComponent> ControlInertiaTensorScaleTargetObject;
    
    ASBZoneEnvActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void StartPuzzle(const TArray<bool>& ConditionResultArr, const TArray<FString>& StringDataArr_, bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    void SetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetPuzzleData(const FString& PuzzleData);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingCustomDepthStencil();
    
    UFUNCTION(BlueprintCallable)
    void SetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvActorName(FName InEnvName);
    
    UFUNCTION(BlueprintCallable)
    void SetBPTickEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, bool Data);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySingleShow(const FString& inShowPath, bool inFullPath, FVector InTargetLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyShowEvent(FName EventTagName, FName CustomNameValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyChangeWorldLevel();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_ReleaseActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_InitActor();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_HitProjectile();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_HitLaser(bool IsHit, UPrimitiveComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable)
    void MakeBufferData();
    
    UFUNCTION(BlueprintCallable)
    bool IsPuzzleSuccess();
    
    UFUNCTION(BlueprintCallable)
    bool IsGrabAllow();
    
    UFUNCTION(BlueprintCallable)
    bool IsGrabActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsDataEmpty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputRightAxisY(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputRightAxisX(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputLeftAxisY(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputLeftAxisX(float Value);
    
    UFUNCTION()
    void InputAxis(float Value, TEnumAsByte<ESBInputAxisType> InputAxisType);
    
    UFUNCTION(BlueprintCallable)
    void InitPhysicsChannel();
    
    UFUNCTION(BlueprintCallable)
    bool HaveBufferData();
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot);
    
    UFUNCTION(BlueprintCallable)
    FName GetStateTagname();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStateProgressMaxCount(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    FString GetPuzzleData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetProgressValue(FName InTagName);
    
    UFUNCTION(BlueprintPure)
    FVector GetPendingMovementLocalInputVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPendingMovementInputVector() const;
    
    UFUNCTION(BlueprintPure)
    USBZoneEnvMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastMovementLocalInputVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastMovementInputVector() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetEnvSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    USBSkeletalMeshComponent* GetEnvSBSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    USBZoneEnvGrabComponent* GetEnvGrabComponent();
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventUpdateProgress(int32 ProgressIndex, float InCurProgress, float InMaxProgress, float InAlphaValue, float StartProgressValue, float EndProgressValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventUpdateBufferData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventTriggerResult(bool Condition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventResetEnv(FName TagName, TEnumAsByte<ESBZoneEnvActiveState> InEnvActiveState, TEnumAsByte<ESBObjectState> InEnvObjectState, const TArray<FSBEnvProgressData>& ProgressDataList);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventResetByWarpSafeLocation(FName TagName, TEnumAsByte<ESBZoneEnvActiveState> InEnvActiveState, TEnumAsByte<ESBObjectState> InEnvObjectState, bool bSuccessResetEnv, bool bEventorDeadEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventResetBySpawnData(FName TagName, TEnumAsByte<ESBZoneEnvActiveState> InEnvActiveState, TEnumAsByte<ESBObjectState> InEnvObjectState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitEnv(FName TagName, TEnumAsByte<ESBZoneEnvActiveState> InEnvActiveState, TEnumAsByte<ESBObjectState> InEnvObjectState, const TArray<FSBEnvProgressData>& ProgressDataList, int32 StateProgressCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DataInitEvent();
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeMovementInputVector();
    
    UFUNCTION(BlueprintCallable)
    void CompletePuzzle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeStateProgressCount(FName StateName, int32 CountValue, int32 PreCountValue, bool bInitEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeEnvState(FName PreTagName, FName ChangeTagName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeEnvActiveState(TEnumAsByte<ESBZoneEnvActiveState> InEnvActiveState);
    
    UFUNCTION(BlueprintCallable)
    void AddMovementInput(FVector WorldDirection, FVector LocalDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    int32 AddEnvProgressInfo(USplineComponent* ProgressSpline, FRuntimeFloatCurve InterpGraph);
    

    // Fix for true pure virtual functions not being implemented
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

