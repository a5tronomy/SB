#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaDamageEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaDamageEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString attacker_alias;
    
    UPROPERTY()
    FString defender_alias;
    
    UPROPERTY()
    FString skill_alias;
    
    UPROPERTY()
    int32 damage_amount;
    
    SB_API FSBWebJobSchemaDamageEvent();
};

