#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBFootStepPhySurfaceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBFootStepPhySurfaceComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<EPhysicalSurface> OverrideFootStepPhySurface;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> IntParams;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDetailMode> VolumeDetailMode;
    
    USBFootStepPhySurfaceComponent(const FObjectInitializer& ObjectInitializer);

};

