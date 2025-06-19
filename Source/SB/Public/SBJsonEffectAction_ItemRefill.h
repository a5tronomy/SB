#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_ItemRefill.generated.h"

USTRUCT()
struct FSBJsonEffectAction_ItemRefill {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    float RefillTime;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 AddCount;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bLoop;
    
    SB_API FSBJsonEffectAction_ItemRefill();
};

