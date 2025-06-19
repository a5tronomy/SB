#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBDestructibleActor.generated.h"

class USBDestructibleComponent;

UCLASS()
class ASBDestructibleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USBDestructibleComponent* DestructibleComponent;
    
public:
    ASBDestructibleActor(const FObjectInitializer& ObjectInitializer);

};

