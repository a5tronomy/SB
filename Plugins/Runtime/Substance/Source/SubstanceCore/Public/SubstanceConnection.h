#pragma once
#include "CoreMinimal.h"
#include "SubstanceConnection.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString OutputIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputImageIdentifier;
    
    SUBSTANCECORE_API FSubstanceConnection();
};

