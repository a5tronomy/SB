#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "SBKeyMappingsJsonObject.generated.h"

USTRUCT()
struct FSBKeyMappingsJsonObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TArray<FInputActionKeyMapping> ActionMappings;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FInputAxisKeyMapping> AxisMappings;
    
    SB_API FSBKeyMappingsJsonObject();
};

