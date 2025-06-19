#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBMultithreaded.generated.h"

UINTERFACE(Blueprintable)
class USBMultithreaded : public UInterface {
    GENERATED_BODY()
};

class ISBMultithreaded : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MultithreadedFunction();
    
};

