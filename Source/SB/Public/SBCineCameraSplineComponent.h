#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "SBCineCameraSplineComponent.generated.h"

class USBCineCameraSplineMetadata;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCineCameraSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveQuat CameraRotation;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat CameraCurrentFocalLength;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat CameraManualFocusDistance;
    
private:
    UPROPERTY()
    USBCineCameraSplineMetadata* SplineMetadata;
    
public:
    USBCineCameraSplineComponent(const FObjectInitializer& ObjectInitializer);

};

