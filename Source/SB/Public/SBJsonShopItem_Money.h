#pragma once
#include "CoreMinimal.h"
#include "SBJsonShopItem_Money.generated.h"

USTRUCT()
struct FSBJsonShopItem_Money {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName Alias;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 Count;
    
    SB_API FSBJsonShopItem_Money();
};

