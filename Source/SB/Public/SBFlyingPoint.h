#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "SBFlyingPoint.generated.h"

UCLASS()
class SB_API ASBFlyingPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FlyingPointAlias;
    
    ASBFlyingPoint(const FObjectInitializer& ObjectInitializer);

};

