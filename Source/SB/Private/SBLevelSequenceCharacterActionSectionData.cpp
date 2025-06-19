#include "SBLevelSequenceCharacterActionSectionData.h"

FSBLevelSequenceCharacterActionSectionData::FSBLevelSequenceCharacterActionSectionData() {
    this->ActionType = SBLevelSequenceCharacterActionType_CharacterControl;
    this->bEveryUpdate = false;
    this->bUsePlayableLevelSeq = false;
    this->bPlayableLevelSeqValue = false;
    this->bUseChangeMovement = false;
    this->ChangeMovement = MOVE_None;
    this->bUseSetDisableRootClothCollision = false;
    this->bDisableRootClothCollision = false;
    this->bUseLockCharacterHiddenInGame = false;
    this->bLockCharacterHiddenInGame = false;
    this->ValidLandingLocationZOffset = 0.00f;
    this->bUseValidLandgMovement = false;
    this->ValidLandingMovement = MOVE_None;
    this->bUseFinishMovement = false;
    this->FinishMovement = MOVE_None;
    this->bUseFinishStopActiveMovement = false;
}

