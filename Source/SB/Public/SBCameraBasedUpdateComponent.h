#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBCameraBasedUpdateComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBCameraBasedUpdateComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoScaleUnitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateGridDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoScaleMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoScaleMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoScaleIncreasePerUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsingForOceanPlane;
    
    USBCameraBasedUpdateComponent(const FObjectInitializer& ObjectInitializer);

};

