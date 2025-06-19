#pragma once
#include "CoreMinimal.h"
#include "AddControllerValue.generated.h"

USTRUCT(BlueprintType)
struct FAddControllerValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DeltaTime;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    SB_API FAddControllerValue();
};

