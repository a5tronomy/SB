#pragma once
#include "CoreMinimal.h"
#include "SBZoneEnvActor.h"
#include "SBZoneEnvBoxActor.generated.h"

class UBoxComponent;

UCLASS()
class SB_API ASBZoneEnvBoxActor : public ASBZoneEnvActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* ZoneEnvRoot;
    
public:
    ASBZoneEnvBoxActor(const FObjectInitializer& ObjectInitializer);

};

