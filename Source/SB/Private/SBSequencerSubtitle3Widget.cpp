#include "SBSequencerSubtitle3Widget.h"

USBSequencerSubtitle3Widget::USBSequencerSubtitle3Widget() {
    this->SubtitleVisibleType = ESBGameOptionSubtitleVisibleType::Enable;
    this->SubtitleSizeType = ESBGameOptionSubtitleSizeType::Large;
    this->SubtitleBGType = ESBGameOptionSubtitleBGType::Hide;
    this->SubtitleAuthorType = ESBGameOptionSubtitleAuthorType::Show;
    this->MaxSlotCount = 0;
    this->MaxLineCount = 0;
    this->MessageWrapWidth = 0.00f;
    this->TypewirterSkipTime = 0.30f;
    this->ContentType = ESBSequenceContentType_Default;
}

bool USBSequencerSubtitle3Widget::RefreshOptionSubtitleVisible() {
    return false;
}

bool USBSequencerSubtitle3Widget::RefreshOptionSubtitleSize() {
    return false;
}

bool USBSequencerSubtitle3Widget::RefreshOptionSubtitleBG() {
    return false;
}

bool USBSequencerSubtitle3Widget::RefreshOptionSubtitleAuthor() {
    return false;
}

void USBSequencerSubtitle3Widget::ClickJumpSubtitle() {
}


