#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "SBCineCameraComponent.generated.h"

class USBCineCameraActorBoundsComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    USBCineCameraActorBoundsComponent* CameraActorBoundsComponent;
    
    UPROPERTY(Transient)
    bool bForceDelayUpdate;
    
public:
    USBCineCameraComponent(const FObjectInitializer& ObjectInitializer);

};

