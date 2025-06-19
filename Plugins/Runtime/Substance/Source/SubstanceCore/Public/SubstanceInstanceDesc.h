#pragma once
#include "CoreMinimal.h"
#include "SubstanceInputDesc.h"
#include "SubstanceInstanceDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceInstanceDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSubstanceInputDesc> Inputs;
    
    SUBSTANCECORE_API FSubstanceInstanceDesc();
};

