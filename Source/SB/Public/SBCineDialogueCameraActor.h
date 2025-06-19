#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "SBCineDialogueCameraActor.generated.h"

class USBCineCameraActorBoundsComponent;
class USBCineCameraComponent;

UCLASS()
class SB_API ASBCineDialogueCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USBCineCameraActorBoundsComponent* CameraActorBoundsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USBCineCameraComponent* SBCineCameraComponent;
    
public:
    ASBCineDialogueCameraActor(const FObjectInitializer& ObjectInitializer);

};

