#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBLightFadeVolume.generated.h"

class AActor;
class ALight;

UCLASS()
class SB_API ASBLightFadeVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ALight>> TargetLights;
    
    ASBLightFadeVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlapActor(AActor* Overlapped, AActor* Other);
    
    UFUNCTION()
    void OnBeginOverlapActor(AActor* Overlapped, AActor* Other);
    
};

