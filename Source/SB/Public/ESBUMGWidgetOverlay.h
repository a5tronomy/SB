#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetOverlay.generated.h"

UENUM()
enum ESBUMGWidgetOverlay {
    ESBUMGWidgetOverlay_None,
    ESBUMGWidgetOverlay_Visibility,
    ESBUMGWidgetOverlay_Translation,
    ESBUMGWidgetOverlay_Invalidate,
    ESBUMGWidgetOverlay_RenderOpacity,
};

