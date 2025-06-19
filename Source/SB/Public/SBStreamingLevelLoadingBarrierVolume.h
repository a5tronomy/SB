#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBStreamingLevelLoadingBarrierVolume.generated.h"

UCLASS()
class SB_API ASBStreamingLevelLoadingBarrierVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> StreamingLevelNames;
    
    UPROPERTY(EditAnywhere)
    float WaitDistance;
    
    UPROPERTY(EditAnywhere)
    float KeepDistance;
    
    UPROPERTY(EditAnywhere)
    FVector BlockingDirection;
    
    ASBStreamingLevelLoadingBarrierVolume(const FObjectInitializer& ObjectInitializer);

};

