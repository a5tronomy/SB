#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryExecutionQueue.generated.h"

UCLASS()
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryExecutionQueue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Count;
    
    UPROPERTY()
    bool Next;
    
    ULowEntryExecutionQueue();

};

