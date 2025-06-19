#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetButton.generated.h"

UENUM()
enum ESBUMGWidgetButton {
    ESBUMGWidgetButton_None,
    ESBUMGWidgetButton_OnClicked,
    ESBUMGWidgetButton_OnPressed,
    ESBUMGWidgetButton_OnReleased,
    ESBUMGWidgetButton_OnHovered,
    ESBUMGWidgetButton_OnUnhovered,
    ESBUMGWidgetButton_Visibility,
    ESBUMGWidgetButton_NormalImage,
    ESBUMGWidgetButton_HoveredImage,
    ESBUMGWidgetButton_PressedImage,
    ESBUMGWidgetButton_NormalColorAndOpacity,
    ESBUMGWidgetButton_HoveredColorAndOpacity,
    ESBUMGWidgetButton_PressedColorAndOpacity,
    ESBUMGWidgetButton_OnDoubleClicked,
};

