#pragma once
#include "CoreMinimal.h"
#include "ESBSpiderNavigationPlaceType.generated.h"

UENUM()
enum ESBSpiderNavigationPlaceType {
    SpiderNavigationPlaceType_AnyWhere,
    SpiderNavigationPlaceType_Floor,
    SpiderNavigationPlaceType_Wall,
    SpiderNavigationPlaceType_Ceiling,
};

