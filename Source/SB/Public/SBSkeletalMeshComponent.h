#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBEventMoveIKData.h"
#include "SBMovementBoneData.h"
#include "BoneAnimScaleIgnoreInfo.h"
#include "ESBMeshAttachType.h"
#include "ESBPhysicHitType.h"
#include "ESBSkelMeshSlot.h"
#include "MaterialDefaultInfo.h"
#include "VertexShakeInfo.h"
#include "SBSkeletalMeshComponent.generated.h"

class UPhysicsAsset;
class USceneComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FVector LastKeepAllBodiesBoneLocation;
    
    UPROPERTY(Transient)
    FQuat LastKeepAllBodiesBoneQuat;
    
    UPROPERTY(Transient)
    TArray<float> HistoryResetPhysVelocty;
    
    UPROPERTY(Transient)
    TArray<float> HistoryResetPhysDegree;
    
    UPROPERTY(Transient)
    int32 CurrentHistoryResetPhysNum;
    
    UPROPERTY(Transient)
    int32 CurrentMaxHistoryResetPhysNum;
    
    UPROPERTY(Transient)
    float RemainResetPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBMeshAttachType> MeshSlotAttachType;
    
    UPROPERTY(Transient)
    TArray<FMaterialDefaultInfo> MaterialParamDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> DynamicPhysicControlBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> DynamicPhysicExclusiveBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CustomAnimStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomAnimWeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseDynamicBound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SBSkeletalMeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideOffsetLODViewAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OverrideOffsetLODValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AdditiveBoundsBoxExtent;
    
    UPROPERTY(EditAnywhere)
    bool bDisableComponentsClothTick;
    
    UPROPERTY(EditAnywhere)
    float ComponentsClothTickDistance;
    
    UPROPERTY(Transient)
    TMap<FName, FSBEventMoveIKData> IKTargetInfoMap;
    
    UPROPERTY(Transient)
    TArray<FSBEventMoveIKData> DurationIKDataList;
    
    UPROPERTY(Transient)
    bool bPlayDynamicPhysicBoneControl;
    
    UPROPERTY(Transient)
    float RemainDynamicPhysicBoneDuration;
    
    UPROPERTY(Transient)
    float DynamicPhysicBoneDuration;
    
    UPROPERTY(Transient)
    float DynamicPhysicBoneBlendInTime;
    
    UPROPERTY(Transient)
    float DynamicPhysicBoneBlendOutTime;
    
    UPROPERTY(Transient)
    float DynamicPhysicBoneWeight;
    
    UPROPERTY(Transient)
    float DynamicPhysicBoneIgnoreRemainTime;
    
    UPROPERTY(Transient)
    FVector PhysicalHitForceVector;
    
    UPROPERTY(Transient)
    FName PhysicalHitForceTargetBone;
    
    UPROPERTY(Transient)
    FVector PhysicalHitForceLocation;
    
    UPROPERTY(Transient)
    float PhysicalHitForcePower;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBPhysicHitType> PhysicalHitType;
    
    UPROPERTY(Transient)
    bool bSetDynamicPhysicBelowAll;
    
    UPROPERTY(Transient)
    FVertexShakeInfo VertexShakeInfo;
    
    UPROPERTY(Transient)
    FBoneAnimScaleIgnoreInfo BoneAnimScaleIgnoreInfo;
    
    UPROPERTY(Transient)
    FName RestoreAttachBoneName;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* RestoreAttachComponent;
    
    UPROPERTY(Transient)
    TArray<FSBMovementBoneData> MovementBoneDataList;
    
    UPROPERTY(Transient)
    bool bReturnRelativeBlendOffset;
    
    UPROPERTY(Transient)
    float CurrentRelativeBlendOffsetTime;
    
    UPROPERTY(Transient)
    float RelativeBlendToTargetTime;
    
    UPROPERTY(Transient)
    float RelativeBlendReturnTime;
    
    UPROPERTY(Transient)
    FVector RelativeBlendOffset;
    
    UPROPERTY(Transient)
    FVector BackupRelativeLocation;
    
    UPROPERTY(Transient)
    float CurrentPhysicsWeightBlendTime;
    
    UPROPERTY(Transient)
    float PhysicsWeightBlendTime;
    
    UPROPERTY(Transient)
    float TargetPhysicsWeight;
    
    UPROPERTY(Transient)
    float CurrentMassScale;
    
public:
    USBSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPhysicsBodySimulate(FVector InForce, const FName& InBoneName, bool bNewSimulate, float InBlendWeight, bool InSetBelowAllBody, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAssetAndKeepTransform(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravityPhysicsBones(bool bFlag, const TArray<FName>& InBoneArray);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomAnimWeight(float InAnimWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomAnimStateName(FName InAnimStateName);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendPhysicsWeight(bool bInEnablePhysic, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideMaterials();
    
    UFUNCTION(BlueprintCallable)
    FName GetSBSkeletalMeshTag();
    
    UFUNCTION(BlueprintCallable)
    float GetCustomAnimWeight();
    
    UFUNCTION(BlueprintCallable)
    FName GetCustomAnimStateName();
    
    UFUNCTION(BlueprintCallable)
    void FindEventMoveIKData(FName InBoneName, FSBEventMoveIKData& OutIKData);
    
    UFUNCTION(BlueprintCallable)
    void ClearBlendPhysicsWeight();
    
};

