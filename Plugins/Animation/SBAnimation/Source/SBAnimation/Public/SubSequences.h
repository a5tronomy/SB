#pragma once
#include "CoreMinimal.h"
#include "SubSequences.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSubSequences {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UAnimSequence*> SubSequences;
    
    FSubSequences();
};

