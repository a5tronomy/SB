#include "SBSequencerSubtitle2Widget.h"

USBSequencerSubtitle2Widget::USBSequencerSubtitle2Widget() {
    this->SubtitleVisibleType = ESBGameOptionSubtitleVisibleType::Enable;
    this->SubtitleSizeType = ESBGameOptionSubtitleSizeType::Large;
    this->SubtitleBGType = ESBGameOptionSubtitleBGType::Hide;
    this->MaxSlotCount = 2;
    this->MaxLineCount = 2;
    this->MessageWrapWidth = 0.00f;
    this->bindCount = 0;
}

void USBSequencerSubtitle2Widget::RefreshOptionSubtitleVisible() {
}

void USBSequencerSubtitle2Widget::RefreshOptionSubtitleSize() {
}

void USBSequencerSubtitle2Widget::RefreshOptionSubtitleBG() {
}


