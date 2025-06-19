#include "SBSequencerQTEInputInfo.h"

FSBSequencerQTEInputInfo::FSBSequencerQTEInputInfo() {
    this->InputType = ESBLevelSequenceTheaterQTEType_GamePad_FaceButton_Left;
    this->InputGoalCount = 0;
    this->InputCurrentCount = 0;
    this->CheckLeftStickHit = false;
    this->CheckRightStickHit = false;
    this->ShowResult = false;
    this->StartSequenceTime = 0.00f;
    this->EndSequenceTime = 0.00f;
    this->bFireFadeIn = false;
    this->bFireFadeOut = false;
    this->bResult = false;
    this->bFireResult = false;
    this->bBindInput = false;
}

