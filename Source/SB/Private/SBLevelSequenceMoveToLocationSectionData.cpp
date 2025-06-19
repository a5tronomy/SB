#include "SBLevelSequenceMoveToLocationSectionData.h"

FSBLevelSequenceMoveToLocationSectionData::FSBLevelSequenceMoveToLocationSectionData() {
    this->Type = ESBLevelSequenceMoveToLocationType_Play;
    this->CheckLocation = false;
    this->UseBraking = false;
    this->OverrideBrakingInputType = SBMoveInputType_Walk;
    this->OverrideBrakingDistStart = 0.00f;
    this->OverrideBrakingDistEnd = 0.00f;
    this->EndAnimRetentionSpeedTime = 0.00f;
    this->UseSpeedAnimGraph = false;
    this->UseManualStop = false;
    this->UseTargetRotation = false;
    this->FinishOrStopMovementOff = false;
    this->FinishOrStopDroneMovementOff = false;
    this->PlayUsePlayerBattleStateChange = false;
    this->PlayPlayerBattleState = false;
    this->FinishFrameJumpToEndSection = false;
    this->FinishUseDroneAIControl = false;
    this->FinishDroneAIState = false;
    this->bCheckImprovedPlaySeqTime = false;
}

