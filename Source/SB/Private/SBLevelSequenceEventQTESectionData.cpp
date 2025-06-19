#include "SBLevelSequenceEventQTESectionData.h"

FSBLevelSequenceEventQTESectionData::FSBLevelSequenceEventQTESectionData() {
    this->UseTakeSelectNext = false;
    this->RequireWaitInput = false;
    this->VisibleProgress = false;
    this->UseSuccessFinishTakeSkip = false;
    this->UseFailFinishTakeSkip = false;
    this->ImmediateSuccessTakeSkip = false;
    this->ImmediateSuccessNoWaitWidgetAnimFinish = false;
    this->UseSuccessTimeSpeedChange = false;
    this->SuccessTimeSpeed = 0.00f;
    this->UseSectionFinishShowResult = false;
    this->HitDelayTime = 0.00f;
    this->bIgnoreOptionSuccess = false;
    this->SingleGoalInputCount = 0;
    this->SingleCustomWidgetLocation = false;
    this->SingleHitShowData = NULL;
    this->SingleDualSenseData = NULL;
}

