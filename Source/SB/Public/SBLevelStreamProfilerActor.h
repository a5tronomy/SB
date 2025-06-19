#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBLevelStreamProfilerActor.generated.h"

UCLASS()
class SB_API ASBLevelStreamProfilerActor : public AActor {
    GENERATED_BODY()
public:
    ASBLevelStreamProfilerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnLevelUnloadedIterative();
    
    UFUNCTION()
    void OnLevelUnloaded();
    
    UFUNCTION()
    void OnLevelLoaded();
    
};

