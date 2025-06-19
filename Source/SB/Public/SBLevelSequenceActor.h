#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "SBLevelSequenceActor.generated.h"

UCLASS()
class ASBLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ASBLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnStopEvent();
    
    UFUNCTION()
    void OnFinishedEvent();
    
};

