#include "SBTypeWriterWidget.h"

USBTypeWriterWidget::USBTypeWriterWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LetterPlayTime = 0.03f;
    this->LetterSpacePlayTime = 0.10f;
    this->EndHoldTime = 0.15f;
    this->MinDesiredWidth = 2000.00f;
    this->MarginWidth = 20.00f;
}

void USBTypeWriterWidget::SkipToLineEnd() {
}

void USBTypeWriterWidget::PlayLine(const FText& InLine, float InDuration) {
}



bool USBTypeWriterWidget::HasFinishedPlayingLine() const {
    return false;
}

void USBTypeWriterWidget::GetCurrentLine(FText& OutLine) const {
}


