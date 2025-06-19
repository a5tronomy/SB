#include "SBSkeletalMeshComponent.h"

USBSkeletalMeshComponent::USBSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHistoryResetPhysNum = 0;
    this->CurrentMaxHistoryResetPhysNum = 0;
    this->RemainResetPhysics = 0.00f;
    this->MeshSlot = ESBMesh_Body;
    this->MeshSlotAttachType = Root;
    this->CustomAnimWeight = 0.00f;
    this->bUseDynamicBound = false;
    this->OverrideOffsetLODViewAngle = 0.00f;
    this->OverrideOffsetLODValue = 0;
    this->bDisableComponentsClothTick = false;
    this->ComponentsClothTickDistance = 0.00f;
    this->bPlayDynamicPhysicBoneControl = false;
    this->RemainDynamicPhysicBoneDuration = 0.00f;
    this->DynamicPhysicBoneDuration = 0.00f;
    this->DynamicPhysicBoneBlendInTime = 0.00f;
    this->DynamicPhysicBoneBlendOutTime = 0.00f;
    this->DynamicPhysicBoneWeight = 0.00f;
    this->DynamicPhysicBoneIgnoreRemainTime = 0.00f;
    this->PhysicalHitForcePower = 0.00f;
    this->PhysicalHitType = ESBPhysicHitType_AddForceDir;
    this->bSetDynamicPhysicBelowAll = false;
    this->RestoreAttachComponent = NULL;
    this->bReturnRelativeBlendOffset = false;
    this->CurrentRelativeBlendOffsetTime = 0.00f;
    this->RelativeBlendToTargetTime = 0.00f;
    this->RelativeBlendReturnTime = 0.00f;
    this->CurrentPhysicsWeightBlendTime = 0.00f;
    this->PhysicsWeightBlendTime = 0.00f;
    this->TargetPhysicsWeight = 0.00f;
    this->CurrentMassScale = 1.00f;
}

void USBSkeletalMeshComponent::SetPhysicsBodySimulate(FVector InForce, const FName& InBoneName, bool bNewSimulate, float InBlendWeight, bool InSetBelowAllBody, bool bIncludeSelf) {
}

void USBSkeletalMeshComponent::SetPhysicsAssetAndKeepTransform(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
}

void USBSkeletalMeshComponent::SetEnableGravityPhysicsBones(bool bFlag, const TArray<FName>& InBoneArray) {
}

void USBSkeletalMeshComponent::SetCustomAnimWeight(float InAnimWeight) {
}

void USBSkeletalMeshComponent::SetCustomAnimStateName(FName InAnimStateName) {
}

void USBSkeletalMeshComponent::SetBlendPhysicsWeight(bool bInEnablePhysic, float InBlendTime) {
}

void USBSkeletalMeshComponent::ResetOverrideMaterials() {
}

FName USBSkeletalMeshComponent::GetSBSkeletalMeshTag() {
    return NAME_None;
}

float USBSkeletalMeshComponent::GetCustomAnimWeight() {
    return 0.0f;
}

FName USBSkeletalMeshComponent::GetCustomAnimStateName() {
    return NAME_None;
}

void USBSkeletalMeshComponent::FindEventMoveIKData(FName InBoneName, FSBEventMoveIKData& OutIKData) {
}

void USBSkeletalMeshComponent::ClearBlendPhysicsWeight() {
}


