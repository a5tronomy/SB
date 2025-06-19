#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "SBTargetingPoint.generated.h"

UCLASS()
class SB_API ASBTargetingPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PointName;
    
    ASBTargetingPoint(const FObjectInitializer& ObjectInitializer);

};

