#include "SBLevelSequenceLookAtTargetSectionData.h"

FSBLevelSequenceLookAtTargetSectionData::FSBLevelSequenceLookAtTargetSectionData() {
    this->ActionType = SBLevelSequenceLookAtTargetType_Head;
    this->bCheckTrackingTarget = false;
    this->bClearDisableLookAtIK = false;
    this->LookAtZOffset = 0.00f;
    this->RotationSpeed = 0.00f;
}

