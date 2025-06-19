#pragma once
#include "CoreMinimal.h"
#include "ESubstanceInputType.h"
#include "SubstanceInputDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceInputDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESubstanceInputType> Type;
    
    SUBSTANCECORE_API FSubstanceInputDesc();
};

