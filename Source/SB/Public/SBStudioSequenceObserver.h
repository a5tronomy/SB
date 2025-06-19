#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBStudioSequenceObserver.generated.h"

UCLASS()
class USBStudioSequenceObserver : public UObject {
    GENERATED_BODY()
public:
    USBStudioSequenceObserver();

private:
    UFUNCTION()
    void OnFinishLevelSequence();
    
};

