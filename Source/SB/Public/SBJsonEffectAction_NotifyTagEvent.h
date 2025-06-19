#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_NotifyTagEvent.generated.h"

USTRUCT()
struct FSBJsonEffectAction_NotifyTagEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName TagName;
    
    UPROPERTY(EditAnywhere, Transient)
    FName CustomNameValue;
    
    SB_API FSBJsonEffectAction_NotifyTagEvent();
};

