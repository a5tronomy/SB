#pragma once
#include "CoreMinimal.h"
#include "ItemData.generated.h"

USTRUCT(BlueprintType)
struct FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 StatLevel;
    
    UPROPERTY(EditAnywhere)
    uint32 ItemCount;
    
    UPROPERTY(EditAnywhere)
    uint32 ItemChargeCount;
    
    SB_API FItemData();
};

