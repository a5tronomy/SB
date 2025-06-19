#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaBuyItemEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaBuyItemEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString item_alias;
    
    UPROPERTY()
    FString item_category;
    
    UPROPERTY()
    uint32 buy_amount;
    
    SB_API FSBWebJobSchemaBuyItemEvent();
};

