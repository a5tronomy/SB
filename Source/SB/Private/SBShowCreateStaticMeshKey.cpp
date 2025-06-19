#include "SBShowCreateStaticMeshKey.h"

USBShowCreateStaticMeshKey::USBShowCreateStaticMeshKey() {
    this->StaticMesh = NULL;
    this->LocationBaseTarget = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = false;
    this->TargetEquipment = EquipmentType_None;
    this->bAttach = false;
    this->bInGenerateOverlapEvents = false;
    this->bHiddenInGame = false;
    this->bRenderHiddenDepthInSceneCapture = false;
    this->bReceivesDecals = false;
    this->bOverrideCastShadow = false;
    this->bCastShadow = false;
    this->bRegisterActor = false;
    this->bEnableRelativeLocationCurve = false;
    this->bEnableRelativeRotationCurve = false;
    this->bEnableScaleCurve = false;
    this->PhotoModeShowHiddenFlag = ESBPhotoModeShowHiddenFlag::None;
}


