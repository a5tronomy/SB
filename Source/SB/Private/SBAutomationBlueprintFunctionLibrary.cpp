#include "SBAutomationBlueprintFunctionLibrary.h"

USBAutomationBlueprintFunctionLibrary::USBAutomationBlueprintFunctionLibrary() {
}

bool USBAutomationBlueprintFunctionLibrary::IsSelfieMode() {
    return false;
}

bool USBAutomationBlueprintFunctionLibrary::IsPhotoMode() {
    return false;
}

bool USBAutomationBlueprintFunctionLibrary::IsEnableHitStopIK() {
    return false;
}

bool USBAutomationBlueprintFunctionLibrary::IsEnableFootIKWhenSequence() {
    return false;
}

FVector USBAutomationBlueprintFunctionLibrary::GetSelfieHeadLookAtTarget() {
    return FVector{};
}

FRotator USBAutomationBlueprintFunctionLibrary::GetSelfieCameraRotation() {
    return FRotator{};
}

FVector USBAutomationBlueprintFunctionLibrary::GetSelfieCameraLocation() {
    return FVector{};
}

ESBPhotoModeSelfieDirection USBAutomationBlueprintFunctionLibrary::GetSelfieCameraDirection() {
    return ESBPhotoModeSelfieDirection::ESBPhotoModeSelfieDirection_None;
}


