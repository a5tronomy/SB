#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_ZoneEventActorDestruction.generated.h"

USTRUCT()
struct FSBJsonEffectAction_ZoneEventActorDestruction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    FName ZoneEventActorTriggerTag;
    
    UPROPERTY(EditAnywhere, Transient)
    FName IgnoreSpecialTag;
    
    SB_API FSBJsonEffectAction_ZoneEventActorDestruction();
};

