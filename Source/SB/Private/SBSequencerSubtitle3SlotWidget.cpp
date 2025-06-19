#include "SBSequencerSubtitle3SlotWidget.h"

USBSequencerSubtitle3SlotWidget::USBSequencerSubtitle3SlotWidget() {
    this->Type = ESBSequencerSubtitleType_ShowImmidate;
    this->Duration = 0.00f;
    this->SubtitleVisibleType = ESBGameOptionSubtitleVisibleType::Enable;
    this->SubtitleSizeType = ESBGameOptionSubtitleSizeType::Large;
    this->SubtitleAuthorType = ESBGameOptionSubtitleAuthorType::Show;
    this->ContentType = ESBSequenceContentType_Default;
    this->DefaultLetterPlayTime = 0.00f;
    this->bFinishTypewriter = false;
}


void USBSequencerSubtitle3SlotWidget::NotifyTypewriterFinish() {
}





