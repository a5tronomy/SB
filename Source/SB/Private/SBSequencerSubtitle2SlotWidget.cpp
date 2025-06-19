#include "SBSequencerSubtitle2SlotWidget.h"

USBSequencerSubtitle2SlotWidget::USBSequencerSubtitle2SlotWidget() {
    this->FadeOutTimeHide = 0.50f;
    this->FadeOutTimeFold = 0.20f;
    this->bFadeOut = false;
    this->SubtitleVisibleType = ESBGameOptionSubtitleVisibleType::Enable;
    this->SubtitleSizeType = ESBGameOptionSubtitleSizeType::Large;
}

void USBSequencerSubtitle2SlotWidget::NotifyFoldFinish() {
}


