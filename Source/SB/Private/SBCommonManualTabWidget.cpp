#include "SBCommonManualTabWidget.h"

USBCommonManualTabWidget::USBCommonManualTabWidget() {
    this->LeftIcon = NULL;
    this->LeftIcon_LeftSpace = NULL;
    this->LeftIcon_RightSpace = NULL;
    this->RightIcon = NULL;
    this->RightIcon_LeftSpace = NULL;
    this->RightIcon_RightSpace = NULL;
    this->TabButtonContainer = NULL;
    this->TabBtnWidth = 250.00f;
    this->TabBtnMinPadding = 15.00f;
    this->LeftIconResourceAction = TEXT("UI_LeftShoulder");
    this->RightIconResourceAction = TEXT("UI_RightShoulder");
    this->LeftIconLeftSpaceValue = 60.00f;
    this->LeftIconRightSpaceValue = 30.00f;
    this->RightIconLeftSpaceValue = 30.00f;
    this->RightIconRightSpaceValue = 60.00f;
    this->TabButtonClass = NULL;
    this->TabChangedSound = NULL;
}

void USBCommonManualTabWidget::UpdateTabButton(FName InButtonAlias, TEnumAsByte<ESBUIRedDotState> InRedDotState) {
}

void USBCommonManualTabWidget::SetVisibilityTabButton(FName InButtonAlias, ESlateVisibility InVisibility) {
}

void USBCommonManualTabWidget::SetVisibilityMoveButton(ESlateVisibility InVisibility) {
}

void USBCommonManualTabWidget::FocusTabButton(FName InButtonAlias) {
}

void USBCommonManualTabWidget::DefocusTabButton() {
}


