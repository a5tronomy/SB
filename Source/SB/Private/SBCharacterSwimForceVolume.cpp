#include "SBCharacterSwimForceVolume.h"

ASBCharacterSwimForceVolume::ASBCharacterSwimForceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->ForceValue = 300.00f;
}


