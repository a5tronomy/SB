#include "SBShowDepthOfFieldKey.h"

USBShowDepthOfFieldKey::USBShowDepthOfFieldKey() {
    this->Priority = 0;
    this->bPlayerCharacterOnly = true;
    this->DOFFocalDistanceType = ESBDOFFocalDistanceType::Value;
    this->bFocalDistanceTargetToMainCharacter = true;
    this->FocalDistanceTargetIndex = 0;
}


