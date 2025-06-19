#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceEventPlayerActionType.generated.h"

UENUM()
enum ESBLevelSequenceEventPlayerActionType {
    SBLevelSequenceEventPlayerActionType_SetCamaraLock,
    SBLevelSequenceEventPlayerActionType_SlopeMoveImmidateAccel,
    SBLevelSequenceEventPlayerActionType_FinishSequence,
    SBLevelSequenceEventPlayerActionType_PlayerControl,
    SBLevelSequenceEventPlayerActionType_UpdateVolumeInfo,
    SBLevelSequenceEventPlayerActionType_ViewTargetPlayer,
    SBLevelSequenceEventPlayerActionType_ClearCameraCurrentArmLength,
    SBLevelSequenceEventPlayerActionType_ResetLastMoveFowardInput,
    SBLevelSequenceEventPlayerActionType_PauseSequence,
    SBLevelSequenceEventPlayerActionType_ValidLandingLocation,
    SBLevelSequenceEventPlayerActionType_AllMeshSlotForceLOD,
    SBLevelSequenceEventPlayerActionType_OpenCredit,
    SBLevelSequenceEventPlayerActionType_EnterLobby,
};

