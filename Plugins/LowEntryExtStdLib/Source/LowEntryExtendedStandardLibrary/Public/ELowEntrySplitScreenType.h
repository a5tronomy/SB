#pragma once
#include "CoreMinimal.h"
#include "ELowEntrySplitScreenType.generated.h"

UENUM()
enum class ELowEntrySplitScreenType : uint8 {
    None,
    TwoPlayer_Horizontal,
    TwoPlayer_Vertical,
    ThreePlayer_FavorTop,
    ThreePlayer_FavorBottom,
    ThreePlayer_Vertical,
    FourPlayer_Grid,
    FourPlayer_Vertical,
};

