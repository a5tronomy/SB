#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESubstanceGenerationMode.h"
#include "SubstanceInstanceFactory.generated.h"

class USubstanceGraphInstance;

UCLASS()
class SUBSTANCECORE_API USubstanceInstanceFactory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient)
    TArray<USubstanceGraphInstance*> mGraphInstances;
    
public:
    UPROPERTY()
    FString RelativeSourceFilePath;
    
    UPROPERTY()
    FString AbsoluteSourceFilePath;
    
    UPROPERTY()
    FString SourceFileTimestamp;
    
    UPROPERTY()
    TEnumAsByte<ESubstanceGenerationMode> GenerationMode;
    
    USubstanceInstanceFactory();

};

