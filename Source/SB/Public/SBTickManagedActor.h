#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineBaseTypes.h"
#include "SBTickManagedActor.generated.h"

UCLASS()
class SB_API ASBTickManagedActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETickingGroup> TickingGroup;
    
public:
    ASBTickManagedActor(const FObjectInitializer& ObjectInitializer);

};

