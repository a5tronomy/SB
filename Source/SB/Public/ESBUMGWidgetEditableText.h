#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetEditableText.generated.h"

UENUM()
enum ESBUMGWidgetEditableText {
    ESBUMGWidgetEditableText_None,
    ESBUMGWidgetEditableText_Text,
    ESBUMGWidgetEditableText_SetKeyboardFocus,
    ESBUMGWidgetEditableText_HasKeyboardFocus,
};

