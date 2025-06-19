#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetTileView.generated.h"

UENUM()
enum ESBUMGWidgetTileView {
    ESBUMGWidgetTileView_None,
    ESBUMGWidgetTileView_Visibility,
    ESBUMGWidgetTileView_AddItem,
    ESBUMGWidgetTileView_RemoveItem,
    ESBUMGWidgetTileView_ClearList,
    ESBUMGWidgetTileView_FocusRow,
    ESBUMGWidgetTileView_ScrollToTop,
    ESBUMGWidgetTileView_ScrollToBottom,
    ESBUMGWidgetTileView_ScrollIndexIntoView,
    ESBUMGWidgetTileView_GetSelectedIndex,
    ESBUMGWidgetTileView_UpdateItem,
    ESBUMGWidgetTileView_RegenerateAllEntries,
    ESBUMGWidgetTileView_NavigateToIndex,
    ESBUMGWidgetTileView_SetEnableItemSelect,
    ESBUMGWidgetTileView_GetNumItems,
    ESBUMGWidgetTileView_SendWidgetEvent,
    ESBUMGWidgetTileView_OnClicked,
    ESBUMGWidgetTileView_OnDoubleClicked,
    ESBUMGWidgetTileView_OnPressed,
    ESBUMGWidgetTileView_OnReleased,
    ESBUMGWidgetTileView_SetSelectedIndex,
};

