#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaSellFishEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaSellFishEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString fish_alias;
    
    UPROPERTY()
    uint32 sell_amount;
    
    SB_API FSBWebJobSchemaSellFishEvent();
};

