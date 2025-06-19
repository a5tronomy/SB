#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceCharacterActionType.generated.h"

UENUM()
enum ESBLevelSequenceCharacterActionType {
    SBLevelSequenceCharacterActionType_CharacterControl,
    SBLevelSequenceCharacterActionType_ValidLandingLocation,
    SBLevelSequenceCharacterActionType_LockCharacterHiddenInGame,
    SBLevelSequenceCharacterActionType_FinishSequence,
    SBLevelSequenceCharacterActionType_LookAtTargetForceDisable,
    SBLevelSequenceCharacterActionType_NotifyShowEvent,
};

