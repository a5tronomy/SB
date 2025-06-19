#include "SBSequencerBaseWidget.h"

USBSequencerBaseWidget::USBSequencerBaseWidget() {
    this->Duration = 0.00f;
    this->RequireInput = false;
    this->Input = NULL;
    this->inputSB = NULL;
    this->StartFrame = 0;
    this->SectionStartFrame = 0;
}

void USBSequencerBaseWidget::FinishBlock(int32 InSelect) {
}





