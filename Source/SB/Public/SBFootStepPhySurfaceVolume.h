#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Volume.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBFootStepPhySurfaceVolume.generated.h"

UCLASS()
class SB_API ASBFootStepPhySurfaceVolume : public AVolume {
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
    
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    ASBFootStepPhySurfaceVolume(const FObjectInitializer& ObjectInitializer);

};

