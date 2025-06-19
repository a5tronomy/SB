#include "SBSequencerInputCounterWidget.h"

USBSequencerInputCounterWidget::USBSequencerInputCounterWidget() {
    this->ActionKey = ESBLevelSequenceTheaterInputCounterActionType_None;
    this->InputType = ESBLevelSequenceTheaterInputCounterType_GamePad_FaceButton_Left;
    this->SequencerStartTime = 0.00f;
    this->SequencerEndTime = 0.00f;
    this->SequencerCurrentTime = 0.00f;
    this->CheckLeftStickHit = false;
    this->CheckRightStickHit = false;
    this->InputCurrentCount = 0;
    this->ShowResult = false;
    this->targetWidget = NULL;
    this->bSkipTaked = false;
    this->bModeWaitInput = false;
    this->bUpdatedTakeNext = false;
    this->bBindInput = false;
    this->BindIndex = 0;
    this->bForceSuccess = false;
    this->LastHitAllowTime = 0.00f;
    this->HitShowData = NULL;
    this->HitEventName = TEXT("Hit");
}

UTexture2D* USBSequencerInputCounterWidget::GetTextureInputType(USBTextureStyleSetData* InStyle, TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> InInputType) {
    return NULL;
}

bool USBSequencerInputCounterWidget::GetResult(bool bForceCheck) {
    return false;
}

float USBSequencerInputCounterWidget::GetProgressPercent() {
    return 0.0f;
}

bool USBSequencerInputCounterWidget::GetInputInfoResult(int32 idx) {
    return false;
}

void USBSequencerInputCounterWidget::ClearWidget() {
}


