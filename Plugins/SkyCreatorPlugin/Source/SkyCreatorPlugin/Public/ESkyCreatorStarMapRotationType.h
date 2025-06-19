#pragma once
#include "CoreMinimal.h"
#include "ESkyCreatorStarMapRotationType.generated.h"

UENUM()
enum ESkyCreatorStarMapRotationType {
    StarMapRotationType_NoRotation,
    StarMapRotationType_FollowSun,
    StarMapRotationType_FollowMoon,
};

