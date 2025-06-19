#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MoveInfo.h"
#include "SBMoveTracker.generated.h"

UCLASS()
class USBMoveTracker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FMoveInfo> MoveHistory;
    
    UPROPERTY(Transient)
    float HistoryDuration;
    
public:
    USBMoveTracker();

};

