#pragma once
#include "CoreMinimal.h"
#include "SubstanceInputDesc.h"
#include "SubstanceFloatInputDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> Min;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> Max;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> Default;
    
    SUBSTANCECORE_API FSubstanceFloatInputDesc();
};

