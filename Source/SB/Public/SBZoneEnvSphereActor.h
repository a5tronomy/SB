#pragma once
#include "CoreMinimal.h"
#include "SBZoneEnvActor.h"
#include "SBZoneEnvSphereActor.generated.h"

class USphereComponent;

UCLASS()
class SB_API ASBZoneEnvSphereActor : public ASBZoneEnvActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* ZoneEnvRoot;
    
public:
    ASBZoneEnvSphereActor(const FObjectInitializer& ObjectInitializer);

};

