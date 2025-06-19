#include "SBCharacterEditorComponent.h"

USBCharacterEditorComponent::USBCharacterEditorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bVisibleDronLocation = false;
    this->bVisibleCharacterBinding = false;
    this->BlueprintObject = NULL;
    this->BindingIdleBlendSpace = NULL;
    this->BindingPhysicsAsset = NULL;
    this->BindingCharacterObject = NULL;
    this->bVisibleEyeTracking = false;
    this->EyeForwardAxis = EAxis::None;
    this->EyeForwardAxisInverse = false;
    this->EyeRightAxis = EAxis::None;
    this->EyeRightAxisInverse = false;
    this->EyeBetweenDistance = 0.00f;
    this->EyeAngleHorizontal = 0.00f;
    this->EyeAngleVertical = 0.00f;
    this->PoseSnapshotData = NULL;
    this->PonytailSnapshotData = NULL;
    this->HairSnapshotData = NULL;
    this->TachyWingSnapshotData = NULL;
}


