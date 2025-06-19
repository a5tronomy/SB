#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetListView.generated.h"

UENUM()
enum ESBUMGWidgetListView {
    ESBUMGWidgetListView_None,
    ESBUMGWidgetListView_Visibility,
    ESBUMGWidgetListView_AddItem,
    ESBUMGWidgetListView_RemoveItem,
    ESBUMGWidgetListView_ClearList,
    ESBUMGWidgetListView_FocusRow,
    ESBUMGWidgetListView_ScrollToTop,
    ESBUMGWidgetListView_ScrollToBottom,
    ESBUMGWidgetListView_ScrollIndexIntoView,
    ESBUMGWidgetListView_GetSelectedIndex,
    ESBUMGWidgetListView_GetNumItems,
    ESBUMGWidgetListView_UpdateItem,
    ESBUMGWidgetListView_RegenerateAllEntries,
    ESBUMGWidgetListView_SendWidgetEvent,
    ESBUMGWidgetListView_IsRefreshPending,
    ESBUMGWidgetListView_OnDoubleClicked,
    ESBUMGWidgetListView_OnClicked,
    ESBUMGWidgetListView_OnPressed,
    ESBUMGWidgetListView_OnReleased,
};

