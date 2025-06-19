#pragma once
#include "CoreMinimal.h"
#include "SBToolDataVersion.generated.h"

USTRUCT(BlueprintType)
struct FSBToolDataVersion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Major;
    
    UPROPERTY(EditAnywhere)
    uint16 Minor;
    
    SB_API FSBToolDataVersion();
};

