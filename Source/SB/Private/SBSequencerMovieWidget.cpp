#include "SBSequencerMovieWidget.h"

USBSequencerMovieWidget::USBSequencerMovieWidget() {
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->bMovieAutoDestroy = false;
}

UBinkMediaPlayer* USBSequencerMovieWidget::SequenceBinkPlayer() {
    return NULL;
}

void USBSequencerMovieWidget::ReleaseBinkPlayer() {
}

bool USBSequencerMovieWidget::IsValidBinkPlayer() {
    return false;
}


