#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "SBSplineCameraComponent.generated.h"

class USBSplineCameraMetadata;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSplineCameraComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USBSplineCameraMetadata* SplineMetadata;
    
    UPROPERTY()
    FInterpCurveQuat CameraRotation;
    
    UPROPERTY()
    FInterpCurveFloat CameraCurrentFocalLength;
    
    UPROPERTY()
    FInterpCurveFloat CameraManualFocusDistance;
    
public:
    USBSplineCameraComponent(const FObjectInitializer& ObjectInitializer);

};

