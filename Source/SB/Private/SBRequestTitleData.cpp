#include "SBRequestTitleData.h"

FSBRequestTitleData::FSBRequestTitleData() {
    this->RedDotState = ESBUIRedDotState_None;
    this->RequestState = ESBUIRequestState::None;
    this->bTracking = false;
    this->DisplayRequestBoardType = ESBDisplayRequestBoardType::BaseBoard;
}

