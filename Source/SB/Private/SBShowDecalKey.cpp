#include "SBShowDecalKey.h"

USBShowDecalKey::USBShowDecalKey() {
    this->DecalMaterial = NULL;
    this->LifeTime = 1.00f;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->FadeScreenSize = 0.00f;
    this->bWorldDecal = false;
    this->bOnGround = false;
    this->GroundCheckDistance = 1000.00f;
    this->bUseMultiplyRandomScale = false;
    this->RandomScaleOffsetMin = 0.00f;
    this->RandomScaleOffsetMax = 1.00f;
    this->bUseAddRandomRotation = false;
    this->bCurveNormalizedAge = true;
    this->bUseScaleCurve = false;
    this->bScaleCurveNormalizedAge = true;
    this->bAttachTargetOnlyDecal = false;
    this->ApplyMeshSlotWhenTargetOnlyDecal = ESBMesh_All;
    this->bIgnoreHairSlot = false;
    this->bWithBindingCharacter = true;
    this->bAutoDecalSizeWhenAttach = false;
    this->AutoDecalSizeScale = 1.00f;
    this->SortOrder = 0;
    this->DecalChannelMask = 0;
}


