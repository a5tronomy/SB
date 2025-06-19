#pragma once
#include "CoreMinimal.h"
#include "ESBZoneObjectSaveType.h"
#include "SBWorldActor.h"
#include "SBRestorationWorldActor.generated.h"

class USceneComponent;

UCLASS()
class SB_API ASBRestorationWorldActor : public ASBWorldActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* DummyRoot;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> ActorSaveType;
    
    UPROPERTY(EditAnywhere)
    float ViewDistance;
    
    UPROPERTY(Transient)
    bool bInitSimulatePhys;
    
public:
    ASBRestorationWorldActor(const FObjectInitializer& ObjectInitializer);

};

