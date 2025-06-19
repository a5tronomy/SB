#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBLevelSequenceObserver.generated.h"

UCLASS()
class SB_API USBLevelSequenceObserver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bFinishAutoDestoryActor;
    
private:
    UPROPERTY()
    bool fireNotify;
    
    UPROPERTY()
    FName KeyName;
    
public:
    USBLevelSequenceObserver();

private:
    UFUNCTION()
    void OnFinishLevelSequence();
    
};

