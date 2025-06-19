#include "SBHoldButton.h"

USBHoldButton::USBHoldButton() {
    this->ProgressImage = NULL;
    this->TextBlock = NULL;
    this->text = FText::FromString(TEXT("None"));
    this->HoldMaxTime = 1.00f;
    this->bUseReleaseSpeed = false;
    this->ReleaseTime = 1.00f;
    this->FillType = ESBUIFillCurve::Linear;
}

void USBHoldButton::ResetProgress() {
}

float USBHoldButton::GetProgress() const {
    return 0.0f;
}

ESBUIHoldButtonStateType USBHoldButton::GetPrevState() {
    return ESBUIHoldButtonStateType::None;
}

ESBUIHoldButtonStateType USBHoldButton::GetCurrnetState() {
    return ESBUIHoldButtonStateType::None;
}

void USBHoldButton::ChangeState(ESBUIHoldButtonStateType InStateType) {
}


