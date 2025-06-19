#include "SBCameraMoveData.h"

FSBCameraMoveData::FSBCameraMoveData() {
    this->CurrentTime = 0.00f;
    this->FadeInDuration = 0.00f;
    this->TotalDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->bUseBasedCharacterBone = false;
    this->TargetCharacter = NULL;
    this->bUseBasedCharacterCustomAnim = false;
    this->FovCurve = NULL;
}

