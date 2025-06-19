#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBAIFormationInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBAIFormationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> LocationArray;
    
    SB_API FSBAIFormationInfo();
};

