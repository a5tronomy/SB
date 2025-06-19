#include "SBEquipmentTableProperty.h"

FSBEquipmentTableProperty::FSBEquipmentTableProperty() {
    this->ID = 0;
    this->Type = EquipmentType_None;
    this->SubType = EquipmentSubType_None;
    this->UnmountingEquipmentMassScale = 0.00f;
    this->bUnmountingEquipmentNoRemove = false;
    this->bDisableCompletedMountingEquipment = false;
    this->bWorldStaticAndDynamicCollisionUnmounting = false;
    this->bReleasablyMounted = false;
    this->AttachType = Root;
    this->ActiveIdleAdditiveBody = AdditiveBody_None;
    this->AdditiveBodyAlpha = 0.00f;
    this->IdleAdditiveAnimationMaxAlpha = 0.00f;
    this->IsEnableLowAngleEvent = false;
    this->bDisablePostProcessWhenPhotoModePoseSnapshot = false;
    this->OverrideMaterialMeshSlot = EquipmentType_None;
    this->bUseHidePonytail = false;
    this->HideMeshSlot = EquipmentType_None;
    this->bLongHair = false;
    this->ForceBodyType = EquipmentForceBody_None;
}

