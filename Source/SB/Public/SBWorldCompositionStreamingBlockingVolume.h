#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBWorldCompositionStreamingBlockingVolume.generated.h"

UCLASS()
class SB_API ASBWorldCompositionStreamingBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    ASBWorldCompositionStreamingBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

