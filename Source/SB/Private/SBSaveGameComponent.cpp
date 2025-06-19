#include "SBSaveGameComponent.h"

USBSaveGameComponent::USBSaveGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModeType = ESBSaveGameCompMode_Save;
    this->bInSideDontSave = false;
    this->DefaultExtents = 50.00f;
}


