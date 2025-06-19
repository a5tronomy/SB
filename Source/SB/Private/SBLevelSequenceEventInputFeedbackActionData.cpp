#include "SBLevelSequenceEventInputFeedbackActionData.h"

FSBLevelSequenceEventInputFeedbackActionData::FSBLevelSequenceEventInputFeedbackActionData() {
    this->SequenceEventType = ESBTheaterSequenceEventType_InputCounter_Hit;
    this->ActionType = FSBLevelSequenceEventInputFeedbackActionType_LevelSequencePlay;
    this->Sequence = NULL;
}

