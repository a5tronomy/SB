#pragma once
#include "CoreMinimal.h"
#include "SubstanceInputDesc.h"
#include "SubstanceIntInputDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceIntInputDesc : public FSubstanceInputDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> Min;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> Max;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> Default;
    
    SUBSTANCECORE_API FSubstanceIntInputDesc();
};

