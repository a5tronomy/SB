#include "SBIndicator.h"

USBIndicator::USBIndicator() {
    this->ButtonHorizontalBox = NULL;
    this->IndicatorLockChannel = 0;
    this->IndicatorHiddenChannel = 0;
    this->WidthSpace = 40.00f;
}

void USBIndicator::UpdateLockChannel(int32 InLockChannel) {
}

void USBIndicator::UpdateIndicatorType(FName InIndicatorType, int32 InLockChannel) {
}

void USBIndicator::UpdateHiddenChannel(int32 InHiddenChannel) {
}

void USBIndicator::RefreshIndicator() {
}


