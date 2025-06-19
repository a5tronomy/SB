#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBDynamicRegionActor.generated.h"

UCLASS()
class SB_API ASBDynamicRegionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName UniqueRegionName;
    
public:
    ASBDynamicRegionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void InitRegion(FName InitEventName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EventLeaveRegion();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventEnterRegion();
    
};

