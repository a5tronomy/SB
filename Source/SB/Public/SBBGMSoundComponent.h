#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBBGMSoundComponent.generated.h"

class AActor;
class USBBGMSoundTrack;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBBGMSoundComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float ChangedPeaceDelay;
    
    UPROPERTY(EditAnywhere)
    USBBGMSoundTrack* BGMTrack;
    
    UPROPERTY(EditAnywhere)
    AActor* AttachActor;
    
    USBBGMSoundComponent(const FObjectInitializer& ObjectInitializer);

};

