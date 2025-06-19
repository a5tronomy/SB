#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "SBNavigationObjectBase.generated.h"

UCLASS()
class ASBNavigationObjectBase : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bExcludeFromActiveVolume: 1;
    
    ASBNavigationObjectBase(const FObjectInitializer& ObjectInitializer);

};

