#include "SBSequencerSkipWidget.h"

USBSequencerSkipWidget::USBSequencerSkipWidget() {
    this->SkipProgress = 0.00f;
    this->LastInputState = false;
    this->bRecordMode = false;
    this->NextSkipAllowTime = 0.00f;
    this->bSkipOptionHide = false;
    this->bActiveSkipMouseCursor = false;
}

void USBSequencerSkipWidget::UpdateSkipHold(bool bPressed) {
}

void USBSequencerSkipWidget::UpdateOptionVisibleSkipUI() {
}


