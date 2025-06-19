#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetComboBox.generated.h"

UENUM()
enum ESBUMGWidgetComboBox {
    ESBUMGWidgetComboBox_None,
    ESBUMGWidgetComboBox_Visibility,
    ESBUMGWidgetComboBox_AddItem,
    ESBUMGWidgetComboBox_RemoveItem,
    ESBUMGWidgetComboBox_SelectItem,
    ESBUMGWidgetComboBox_ClearList,
    ESBUMGWidgetComboBox_FocusRow,
    ESBUMGWidgetComboBox_ScrollToTop,
    ESBUMGWidgetComboBox_ScrollToBottom,
    ESBUMGWidgetComboBox_ScrollIndexIntoView,
    ESBUMGWidgetComboBox_GetSelectedIndex,
    ESBUMGWidgetComboBox_GetHoveredIndex,
    ESBUMGWidgetComboBox_GetFocusedIndex,
    ESBUMGWidgetComboBox_GetNumItems,
    ESBUMGWidgetComboBox_UpdateItem,
    ESBUMGWidgetComboBox_RegenerateAllEntries,
    ESBUMGWidgetComboBox_SendWidgetEvent,
    ESBUMGWidgetComboBox_RefreshItems,
    ESBUMGWidgetComboBox_IsRefreshPending,
    ESBUMGWidgetComboBox_OpenContentPopup,
    ESBUMGWidgetComboBox_CloseContentPopup,
    ESBUMGWidgetComboBox_IsOpenContentPopup,
    ESBUMGWidgetComboBox_OnDoubleClicked,
    ESBUMGWidgetComboBox_OnClicked,
    ESBUMGWidgetComboBox_OnPressed,
    ESBUMGWidgetComboBox_OnReleased,
};

