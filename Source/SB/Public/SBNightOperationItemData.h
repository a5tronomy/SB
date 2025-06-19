#pragma once
#include "CoreMinimal.h"
#include "SBNightOperationItemData.generated.h"

USTRUCT()
struct FSBNightOperationItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OperationAlias;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool bRandom;
    
    SB_API FSBNightOperationItemData();
};

