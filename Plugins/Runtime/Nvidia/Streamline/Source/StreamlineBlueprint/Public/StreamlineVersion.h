#pragma once
#include "CoreMinimal.h"
#include "StreamlineVersion.generated.h"

USTRUCT(BlueprintType)
struct FStreamlineVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Major;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Minor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Build;
    
    STREAMLINEBLUEPRINT_API FStreamlineVersion();
};

