#pragma once
#include "CoreMinimal.h"
#include "SBEnvProgressData.generated.h"

USTRUCT(BlueprintType)
struct FSBEnvProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProgressIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RangeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLength;
    
    SB_API FSBEnvProgressData();
};

