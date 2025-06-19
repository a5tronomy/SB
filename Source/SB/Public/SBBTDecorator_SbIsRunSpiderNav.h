#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBSpiderNavigationPlaceType.h"
#include "SBBTDecorator_SbIsRunSpiderNav.generated.h"

UCLASS()
class SB_API USBBTDecorator_SbIsRunSpiderNav : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSpiderNavigationPlaceType> SpiderNavigationPlaceType;
    
    USBBTDecorator_SbIsRunSpiderNav();

};

