#pragma once
#include "CoreMinimal.h"
#include "SBShowKeyContainer.generated.h"

class USBShowKey;

USTRUCT(BlueprintType)
struct FSBShowKeyContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<USBShowKey*> Keys;
    
    SB_API FSBShowKeyContainer();
};

