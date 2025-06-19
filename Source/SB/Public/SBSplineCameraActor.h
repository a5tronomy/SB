#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "SBSplineCameraActor.generated.h"

class USBSplineCameraComponent;
class USceneComponent;
class USplineComponent;

UCLASS()
class SB_API ASBSplineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* TargetSpline;
    
    UPROPERTY(EditAnywhere, Instanced)
    USBSplineCameraComponent* CameraSpline;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraRotationData;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraCurrentFocalLength;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraManualFocusDistance;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* CameraRoot;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartProgress;
    
    UPROPERTY(EditAnywhere)
    float EditorViewProgress;
    
    UPROPERTY(EditAnywhere)
    bool GamePlayDummyHide;
    
    UPROPERTY(EditAnywhere)
    bool PlayerAutoTracking;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* TargetDummy;
    
public:
    ASBSplineCameraActor(const FObjectInitializer& ObjectInitializer);

};

