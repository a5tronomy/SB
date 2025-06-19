#include "SBListViewWidget.h"

USBListViewWidget::USBListViewWidget() : UListView(FObjectInitializer::Get()) {
    this->MinEmptySlotAmount = 0;
    this->bFillEmptySlot = false;
    this->bScrollbarAlwaysTakeUpLayout = false;
}


