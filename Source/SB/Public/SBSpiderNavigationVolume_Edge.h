#pragma once
#include "CoreMinimal.h"
#include "SBSpiderNavigationVolume_Point.h"
#include "SBSpiderNavigationVolume_Edge.generated.h"

UCLASS()
class SB_API ASBSpiderNavigationVolume_Edge : public ASBSpiderNavigationVolume_Point {
    GENERATED_BODY()
public:
    ASBSpiderNavigationVolume_Edge(const FObjectInitializer& ObjectInitializer);

};

