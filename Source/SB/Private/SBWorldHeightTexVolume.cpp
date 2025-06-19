#include "SBWorldHeightTexVolume.h"

ASBWorldHeightTexVolume::ASBWorldHeightTexVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->TextureSize = 2048;
    this->CollisionChannels.AddDefaulted(1);
    this->bUseCustomCollisionCheckHeight = false;
    this->bUseCustomCollisionHeightForMinMaxRange = false;
    this->CustomCollisionCheckStartHeight = 1048576.00f;
    this->CustomCollisionCheckEndHeight = -1048576.00f;
    this->CollisionCapsuleHalfHeight = 0.50f;
    this->CollisionCapsuleRadius = 1.00f;
    this->strGeneratedTexturePackage = TEXT("/Game/Generated/WorldHeightTexture");
    this->strGeneratedTextureName = TEXT("WorldHeightTexture");
    this->bGenerateTexture = false;
    this->GenBaseX = 0.00f;
    this->GenBaseY = 0.00f;
    this->GenBaseZ = 0.00f;
    this->GenSideSize = 0.00f;
    this->GenHeightUnitSize = 0.00f;
}


