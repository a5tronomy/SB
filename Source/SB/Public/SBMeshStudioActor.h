#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBMeshStudioType.h"
#include "ESBSkelMeshSlot.h"
#include "SBMeshInfo.h"
#include "SBShowActorInterface.h"
#include "SBMeshStudioActor.generated.h"

class UAnimSequence;
class UMaterialInstance;
class USBSkeletalMeshComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class SB_API ASBMeshStudioActor : public AActor, public ISBShowActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBMeshStudioType MeshStudioType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneCaptureComponent2D* Capturer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USBSkeletalMeshComponent* SkeletalMeshBody;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MeshInfoTagList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FSBMeshInfo> MeshInfoList;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName CaptureTMTag;
    
    UPROPERTY(Transient)
    TMap<FString, UMaterialInstance*> CanMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTransform> MeshBodyTMMap;
    
    UPROPERTY(Transient)
    bool bDisableIdleAdditiveAnim;
    
    UPROPERTY(EditAnywhere)
    FName DefaultSBSkeletalTag;
    
    UPROPERTY(EditAnywhere)
    FName BodyCustomAnimNodeName;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> BodyCustomAnimNodeNameMap;
    
    UPROPERTY(EditAnywhere)
    FName BodyCustomAnimAdditiveNodeName;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBSkelMeshSlot>, FName> MeshSlotCustomAnimNodeNameMap;
    
    UPROPERTY(Transient)
    bool bShortPonyTail;
    
private:
    UPROPERTY(Transient)
    int32 ClothResetCount;
    
    UPROPERTY(Transient)
    FName ClothResetComponentTag;
    
    UPROPERTY(Transient)
    bool bFirstClothReset;
    
public:
    ASBMeshStudioActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    bool SetStaticMeshFromAssetPath(const FString& InPath, FName InTag);
    
    UFUNCTION()
    bool SetSkeletalMeshFromAssetPath(const FString& InPath, FName InTag);
    
    UFUNCTION()
    bool SetMaterialFromAssetPath(const FString& InMaterialPath);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetupTarget(FName inTargetTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_SetMesh(FName inComponentTag, TEnumAsByte<ESBSkelMeshSlot> inMeshInfoSlot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_PreSetMesh(bool IsSkeletal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_PostSetMesh(bool IsSkeletal);
    
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

