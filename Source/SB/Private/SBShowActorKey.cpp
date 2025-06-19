#include "SBShowActorKey.h"

USBShowActorKey::USBShowActorKey() {
    this->bUseActorHidden = false;
    this->bActorHiddenState = true;
    this->bSetVisibleWhenUnlockHidden = false;
    this->bAlwaysActorTickWhenHidden = false;
    this->bUseActorEnableCollision = false;
    this->bActorEnableCollisionState = false;
    this->bPhysicsBodyCollisionIgnore = false;
    this->DisableClothCollisionMeshSlot = ESBMesh_Body;
    this->ClothWindMeshSlot = ESBMesh_Body;
    this->bCharacterTransformAxis = true;
    this->ClothWindFadeInTime = 0.00f;
    this->ClothWindFadeOutTime = 0.00f;
    this->ClothWindDirectionType = ClothWindDirectionType_Direction;
    this->ClothWindDirectionScale = 1.00f;
    this->bAlwaysTickPoseAndRefreshBones = false;
    this->bPhysicsReset = false;
    this->PhysicsResetSlot = ESBMesh_Body;
    this->PhysicsWeightFadeInTime = 0.00f;
    this->PhysicsWeightFadeOutTime = 0.00f;
    this->bClothReset = false;
    this->ClothResetFrameCount = 0;
    this->bClothResetOnlyPonytail = false;
    this->bClothResetOnlyBody = false;
}


