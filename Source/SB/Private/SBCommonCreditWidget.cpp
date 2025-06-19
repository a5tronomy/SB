#include "SBCommonCreditWidget.h"

USBCommonCreditWidget::USBCommonCreditWidget() {
    this->ScrollSpeed = 1.00f;
    this->HoldScrollSpeedStartFactor = 4.00f;
    this->HoldScrollSpeedEndFactor = 48.00f;
    this->ScrollHoldTimeMax = 5.00f;
    this->ScrollSpeedHoldCurve = NULL;
    this->SpeedStepArray.AddDefaulted(4);
    this->State = ESBCommonCreditState::None;
    this->ListView = NULL;
    this->bNotifyEndScroll = false;
    this->bAllowClose = false;
    this->bModeScrollControl = false;
    this->CurrentSpeedStep = 0;
    this->VoiceIndex = 0;
    this->CloseHoldTime = 1.00f;
    this->CloseProgress = 0.00f;
    this->bClosePress = false;
    this->bInputPressDPadRight = false;
    this->bInputPressAccept = false;
    this->bInputPressFaceTop = false;
    this->bInputPressFaceLeft = false;
    this->bClosePressLast = false;
    this->ClosePressTime = 0.00f;
    this->bDebugAllowClose = false;
    this->ScrollHoldTime = 0.00f;
}

bool USBCommonCreditWidget::IsAllowClose() {
    return false;
}







void USBCommonCreditWidget::ChangeState(ESBCommonCreditState inState) {
}


