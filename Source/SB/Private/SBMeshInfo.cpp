#include "SBMeshInfo.h"

FSBMeshInfo::FSBMeshInfo() {
    this->AttachType = Root;
    this->MeshSlot = ESBMesh_Body;
    this->MeshComponent = NULL;
    this->CollisionObjectType = ECC_WorldStatic;
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->bBodyNoCollisionIfNotKeep = false;
    this->CustomDepthStencilValue = 0;
    this->bDetachWhenReleaseActor = false;
    this->OverrideClothPhysicsAsset = NULL;
    this->bOverrideMinLod = false;
    this->ForcedLodModel = 0;
    this->MinLodModel = 0;
    this->CurrentForceLodIndex = 0;
    this->TempPhysicsBlendWeight = 0.00f;
    this->TempClothBlendWeight = 0.00f;
    this->bPhysicsReset = false;
    this->PhysicsResetFadeInTime = 0.00f;
    this->PhysicsResetFadeOutTime = 0.00f;
    this->bRefreshMaskFilter = false;
    this->bBlueprintComponent = false;
    this->bTempHiddenInGame = false;
    this->bLongHair = false;
    this->ForceBodyType = EquipmentForceBody_None;
}

