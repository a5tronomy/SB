#pragma once
#include "CoreMinimal.h"
#include "EBinkMediaPlayerBinkDrawStyle.generated.h"

UENUM()
enum EBinkMediaPlayerBinkDrawStyle {
    BMASM_Bink_DS_RenderToTexture,
    BMASM_Bink_DS_OverlayFillScreenWithAspectRatio,
    BMASM_Bink_DS_OverlayOriginalMovieSize,
    BMASM_Bink_DS_OverlayFillScreen,
    BMASM_Bink_DS_OverlaySpecificDestinationRectangle,
};

