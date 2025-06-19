#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetImage.generated.h"

UENUM()
enum ESBUMGWidgetImage {
    ESBUMGWidgetImage_None,
    ESBUMGWidgetImage_BrushFromTexture,
    ESBUMGWidgetImage_BrushFromMediaSource,
    ESBUMGWidgetImage_BrushFromMaterial,
    ESBUMGWidgetImage_Visibility,
    ESBUMGWidgetImage_Translation,
    ESBUMGWidgetImage_ColorAndOpacity,
    ESBUMGWidgetImage_MatInstScalarParam,
    ESBUMGWidgetImage_SetBrushFromResourceAsset,
};

