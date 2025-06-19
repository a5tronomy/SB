#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SBCineCameraSplineMetadata.generated.h"

class USBCineCameraSplineComponent;

UCLASS()
class SB_API USBCineCameraSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USBCineCameraSplineComponent> Owner;
    
    USBCineCameraSplineMetadata();

};

