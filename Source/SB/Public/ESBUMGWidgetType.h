#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetType.generated.h"

UENUM()
enum ESBUMGWidgetType {
    ESBUMGWidgetType_None,
    ESBUMGWidgetType_Button,
    ESBUMGWidgetType_Text,
    ESBUMGWidgetType_Overlay,
    ESBUMGWidgetType_Image,
    ESBUMGWidgetType_ScaleBox,
    ESBUMGWidgetType_VerticalBox,
    ESBUMGWidgetType_HorizontalBox,
    ESBUMGWidgetType_SBUserWidget,
    ESBUMGWidgetType_CanvasPanel,
    ESBUMGWidgetType_ProgressBar,
    ESBUMGWidgetType_Border,
    ESBUMGWidgetType_EditableText,
    ESBUMGWidgetType_MultiLineEditableText,
    ESBUMGWidgetType_ListView,
    ESBUMGWidgetType_ExtendedListView,
    ESBUMGWidgetType_RichText,
    ESBUMGWidgetType_TileView,
    ESBUMGWidgetType_ComboBox,
};

