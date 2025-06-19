#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_UIClientEvent.generated.h"

USTRUCT()
struct FSBJsonEffectAction_UIClientEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString Event;
    
    UPROPERTY(EditAnywhere, Transient)
    FName BulletAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    FName CoverPosition;
    
    SB_API FSBJsonEffectAction_UIClientEvent();
};

