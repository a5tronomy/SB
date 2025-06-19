#include "SBSequencerInteractionSelectWidget.h"

USBSequencerInteractionSelectWidget::USBSequencerInteractionSelectWidget() {
    this->FocusIndex = 0;
    this->DesignType = ESBTheaterInteractionDesignType_Select;
    this->bUseInputCancel = true;
    this->ContentType = ESBSequenceContentType_Default;
    this->bModeWaitInput = false;
    this->bSkipTaked = false;
    this->bInputComplete = false;
    this->SelectIndex = 0;
    this->TheaterSceneID = 0;
    this->RemainInputBlockTime = 0.00f;
}

void USBSequencerInteractionSelectWidget::SetSelectAndFocusIndex(int32 InIndex) {
}


bool USBSequencerInteractionSelectWidget::IsSelect() {
    return false;
}

void USBSequencerInteractionSelectWidget::ClickSelect(int32 Index) {
}

void USBSequencerInteractionSelectWidget::ClickInputAcceptYesNoPositive() {
}

void USBSequencerInteractionSelectWidget::ClickInputAcceptYesNoNegative() {
}

void USBSequencerInteractionSelectWidget::ClickInputAcceptAdamFusionPositive() {
}

void USBSequencerInteractionSelectWidget::ClickInputAcceptAdamFusionNegative() {
}


